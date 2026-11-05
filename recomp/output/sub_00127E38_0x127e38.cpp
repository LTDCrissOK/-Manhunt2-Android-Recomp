#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00127E38
// Address: 0x127e38 - 0x127ef8
void sub_00127E38_0x127e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00127E38_0x127e38");
#endif

    switch (ctx->pc) {
        case 0x127e80u: goto label_127e80;
        case 0x127eacu: goto label_127eac;
        default: break;
    }

    ctx->pc = 0x127e38u;

    // 0x127e38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x127e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x127e3c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x127e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x127e40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x127e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x127e44: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x127e44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127e48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x127e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x127e4c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x127e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x127e50: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x127e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x127e54: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x127e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x127e58: 0x92420a70  lbu         $v0, 0xA70($s2)
    ctx->pc = 0x127e58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2672)));
    // 0x127e5c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x127E5Cu;
    {
        const bool branch_taken_0x127e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E5Cu;
        // 0x127e60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127e5c) {
            ctx->pc = 0x127EDCu;
            goto label_127edc;
        }
    }
    ctx->pc = 0x127E64u;
    // 0x127e64: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x127E64u;
    {
        const bool branch_taken_0x127e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x127E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E64u;
        // 0x127e68: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127e64) {
            ctx->pc = 0x127EDCu;
            goto label_127edc;
        }
    }
    ctx->pc = 0x127E6Cu;
    // 0x127e6c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x127e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x127e70: 0x24140006  addiu       $s4, $zero, 0x6
    ctx->pc = 0x127e70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x127e74: 0x24539c14  addiu       $s3, $v0, -0x63EC
    ctx->pc = 0x127e74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941716));
    // 0x127e78: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x127e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x127e7c: 0x0  nop
    ctx->pc = 0x127e7cu;
    // NOP
label_127e80:
    // 0x127e80: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x127e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x127e84: 0x8c830878  lw          $v1, 0x878($a0)
    ctx->pc = 0x127e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2168)));
    // 0x127e88: 0x1474000e  bne         $v1, $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x127E88u;
    {
        const bool branch_taken_0x127e88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        ctx->pc = 0x127E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127E88u;
        // 0x127e8c: 0x26230001  addiu       $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127e88) {
            ctx->pc = 0x127EC4u;
            goto label_127ec4;
        }
    }
    ctx->pc = 0x127E90u;
    // 0x127e90: 0x8c820894  lw          $v0, 0x894($a0)
    ctx->pc = 0x127e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2196)));
    // 0x127e94: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x127E94u;
    {
        const bool branch_taken_0x127e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x127e94) {
            ctx->pc = 0x127E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127E94u;
            // 0x127e98: 0x92420a70  lbu         $v0, 0xA70($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127EC8u;
            goto label_127ec8;
        }
    }
    ctx->pc = 0x127E9Cu;
    // 0x127e9c: 0x8c900870  lw          $s0, 0x870($a0)
    ctx->pc = 0x127e9cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2160)));
    // 0x127ea0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x127ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x127ea4: 0xc04970e  jal         func_125C38
    ctx->pc = 0x127EA4u;
    SET_GPR_U32(ctx, 31, 0x127EACu);
    ctx->pc = 0x127EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x127EA4u;
    // 0x127ea8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125C38u, 0x127EA4u, 0x127EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x127EACu;
label_127eac:
    // 0x127eac: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x127eacu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x127eb0: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x127eb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x127eb4: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x127eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x127eb8: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x127EB8u;
    {
        const bool branch_taken_0x127eb8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x127eb8) {
            ctx->pc = 0x127EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x127EB8u;
            // 0x127ebc: 0xa2000234  sb          $zero, 0x234($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 564), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x127EC0u;
            goto label_127ec0;
        }
    }
    ctx->pc = 0x127EC0u;
label_127ec0:
    // 0x127ec0: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x127ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_127ec4:
    // 0x127ec4: 0x92420a70  lbu         $v0, 0xA70($s2)
    ctx->pc = 0x127ec4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2672)));
label_127ec8:
    // 0x127ec8: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x127ec8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x127ecc: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x127eccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x127ed0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x127ED0u;
    {
        const bool branch_taken_0x127ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x127ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127ED0u;
        // 0x127ed4: 0x111180  sll         $v0, $s1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x127ed0) {
            ctx->pc = 0x127E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_127e80;
        }
    }
    ctx->pc = 0x127ED8u;
    // 0x127ed8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x127ed8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_127edc:
    // 0x127edc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x127edcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x127ee0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x127ee0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x127ee4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x127ee4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x127ee8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x127ee8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x127eec: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x127eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x127ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x127EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x127EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x127EF0u;
        // 0x127ef4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x127EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x127EF8u;
}
