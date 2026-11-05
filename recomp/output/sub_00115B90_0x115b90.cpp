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

// Function: sub_00115B90
// Address: 0x115b90 - 0x115c50
void sub_00115B90_0x115b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115B90_0x115b90");
#endif

    switch (ctx->pc) {
        case 0x115bd8u: goto label_115bd8;
        case 0x115c20u: goto label_115c20;
        case 0x115c2cu: goto label_115c2c;
        default: break;
    }

    ctx->pc = 0x115b90u;

    // 0x115b90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x115b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x115b94: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x115b94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x115b98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x115b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x115b9c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x115b9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115ba0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x115ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x115ba4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x115ba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115ba8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x115ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x115bac: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x115bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x115bb0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x115bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x115bb4: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x115bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x115bb8: 0x92020040  lbu         $v0, 0x40($s0)
    ctx->pc = 0x115bb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x115bbc: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x115bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x115bc0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x115bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x115bc4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x115bc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x115bc8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x115BC8u;
    {
        const bool branch_taken_0x115bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115BC8u;
        // 0x115bcc: 0x8cb10000  lw          $s1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115bc8) {
            ctx->pc = 0x115C0Cu;
            goto label_115c0c;
        }
    }
    ctx->pc = 0x115BD0u;
    // 0x115bd0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x115bd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115bd4: 0x0  nop
    ctx->pc = 0x115bd4u;
    // NOP
label_115bd8:
    // 0x115bd8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x115bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x115bdc: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x115bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x115be0: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x115be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x115be4: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x115be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x115be8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x115be8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x115bec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x115becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x115bf0: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x115bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x115bf4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x115bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x115bf8: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x115bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x115bfc: 0x92020040  lbu         $v0, 0x40($s0)
    ctx->pc = 0x115bfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x115c00: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x115c00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x115c04: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x115C04u;
    {
        const bool branch_taken_0x115c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x115C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115C04u;
        // 0x115c08: 0x30a700ff  andi        $a3, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x115c04) {
            ctx->pc = 0x115BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_115bd8;
        }
    }
    ctx->pc = 0x115C0Cu;
label_115c0c:
    // 0x115c0c: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x115c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x115c10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x115c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c14: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x115c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x115c18: 0xc042442  jal         func_109108
    ctx->pc = 0x115C18u;
    SET_GPR_U32(ctx, 31, 0x115C20u);
    ctx->pc = 0x115C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115C18u;
    // 0x115c1c: 0xac400010  sw          $zero, 0x10($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109108u, 0x115C18u, 0x115C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115C20u;
label_115c20:
    // 0x115c20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x115c20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c24: 0xc04564a  jal         func_115928
    ctx->pc = 0x115C24u;
    SET_GPR_U32(ctx, 31, 0x115C2Cu);
    ctx->pc = 0x115C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115C24u;
    // 0x115c28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115928u, 0x115C24u, 0x115C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115C2Cu;
label_115c2c:
    // 0x115c2c: 0x92030040  lbu         $v1, 0x40($s0)
    ctx->pc = 0x115c2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x115c30: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x115c30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115c34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x115c34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x115c38: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x115c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x115c3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x115c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115c40: 0xa2030040  sb          $v1, 0x40($s0)
    ctx->pc = 0x115c40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 64), (uint8_t)GPR_U32(ctx, 3));
    // 0x115c44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x115c44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115c48: 0x3e00008  jr          $ra
    ctx->pc = 0x115C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115C48u;
        // 0x115c4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115C50u;
}
