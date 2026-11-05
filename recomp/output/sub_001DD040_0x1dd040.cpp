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

// Function: sub_001DD040
// Address: 0x1dd040 - 0x1dd100
void sub_001DD040_0x1dd040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD040_0x1dd040");
#endif

    switch (ctx->pc) {
        case 0x1dd088u: goto label_1dd088;
        case 0x1dd090u: goto label_1dd090;
        case 0x1dd0a4u: goto label_1dd0a4;
        case 0x1dd0b4u: goto label_1dd0b4;
        default: break;
    }

    ctx->pc = 0x1dd040u;

    // 0x1dd040: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1dd040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1dd044: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1dd044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1dd048: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1dd048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1dd04c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1dd04cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd050: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1dd050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1dd054: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1dd054u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd058: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1dd058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1dd05c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1dd05cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd060: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1dd060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1dd064: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1dd064u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd068: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1dd068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1dd06c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1dd06cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd070: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1dd070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1dd074: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1dd074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1dd078: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1DD078u;
    {
        const bool branch_taken_0x1dd078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD078u;
        // 0x1dd07c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd078) {
            ctx->pc = 0x1DD0D4u;
            goto label_1dd0d4;
        }
    }
    ctx->pc = 0x1DD080u;
    // 0x1dd080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dd080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd084: 0x0  nop
    ctx->pc = 0x1dd084u;
    // NOP
label_1dd088:
    // 0x1dd088: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1DD088u;
    SET_GPR_U32(ctx, 31, 0x1DD090u);
    ctx->pc = 0x1DD08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD088u;
    // 0x1dd08c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x1DD088u, 0x1DD090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD090u;
label_1dd090:
    // 0x1dd090: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dd090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd094: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1dd094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd098: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1dd098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd09c: 0xc0789d6  jal         func_1E2758
    ctx->pc = 0x1DD09Cu;
    SET_GPR_U32(ctx, 31, 0x1DD0A4u);
    ctx->pc = 0x1DD0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD09Cu;
    // 0x1dd0a0: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2758u, 0x1DD09Cu, 0x1DD0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD0A4u;
label_1dd0a4:
    // 0x1dd0a4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DD0A4u;
    {
        const bool branch_taken_0x1dd0a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DD0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0A4u;
        // 0x1dd0a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd0a4) {
            ctx->pc = 0x1DD0C0u;
            goto label_1dd0c0;
        }
    }
    ctx->pc = 0x1DD0ACu;
    // 0x1dd0ac: 0xc079848  jal         func_1E6120
    ctx->pc = 0x1DD0ACu;
    SET_GPR_U32(ctx, 31, 0x1DD0B4u);
    ctx->pc = 0x1DD0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DD0ACu;
    // 0x1dd0b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x1DD0ACu, 0x1DD0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DD0B4u;
label_1dd0b4:
    // 0x1dd0b4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1dd0b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd0b8: 0xae62002c  sw          $v0, 0x2C($s3)
    ctx->pc = 0x1dd0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 2));
    // 0x1dd0bc: 0xae720030  sw          $s2, 0x30($s3)
    ctx->pc = 0x1dd0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 18));
label_1dd0c0:
    // 0x1dd0c0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1dd0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1dd0c4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1dd0c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1dd0c8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1dd0c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1dd0cc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1DD0CCu;
    {
        const bool branch_taken_0x1dd0cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DD0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0CCu;
        // 0x1dd0d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd0cc) {
            ctx->pc = 0x1DD088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dd088;
        }
    }
    ctx->pc = 0x1DD0D4u;
label_1dd0d4:
    // 0x1dd0d4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1dd0d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd0d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1dd0d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dd0dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1dd0dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1dd0e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1dd0e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dd0e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1dd0e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1dd0e8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1dd0e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dd0ec: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1dd0ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dd0f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1dd0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dd0f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD0F4u;
        // 0x1dd0f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD0F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD0FCu;
    // 0x1dd0fc: 0x0  nop
    ctx->pc = 0x1dd0fcu;
    // NOP
    ctx->pc = 0x1dd100u;
}
