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

// Function: sub_00187E18
// Address: 0x187e18 - 0x187ef8
void sub_00187E18_0x187e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187E18_0x187e18");
#endif

    switch (ctx->pc) {
        case 0x187e54u: goto label_187e54;
        case 0x187e68u: goto label_187e68;
        case 0x187e80u: goto label_187e80;
        case 0x187ea8u: goto label_187ea8;
        default: break;
    }

    ctx->pc = 0x187e18u;

    // 0x187e18: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x187e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x187e1c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x187e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x187e20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x187e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x187e24: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x187e24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187e28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x187e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x187e2c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x187e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x187e30: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x187e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x187e34: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x187e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x187e38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x187e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x187e3c: 0x8ea2001c  lw          $v0, 0x1C($s5)
    ctx->pc = 0x187e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x187e40: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x187E40u;
    {
        const bool branch_taken_0x187e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187E40u;
        // 0x187e44: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187e40) {
            ctx->pc = 0x187ED8u;
            goto label_187ed8;
        }
    }
    ctx->pc = 0x187E48u;
    // 0x187e48: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x187e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x187e4c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x187E4Cu;
    SET_GPR_U32(ctx, 31, 0x187E54u);
    ctx->pc = 0x187E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187E4Cu;
    // 0x187e50: 0x24140006  addiu       $s4, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x187E4Cu, 0x187E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187E54u;
label_187e54:
    // 0x187e54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x187e54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187e58: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x187e58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x187e5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x187e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187e60: 0xc061a32  jal         func_1868C8
    ctx->pc = 0x187E60u;
    SET_GPR_U32(ctx, 31, 0x187E68u);
    ctx->pc = 0x187E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187E60u;
    // 0x187e64: 0x26120020  addiu       $s2, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868C8u, 0x187E60u, 0x187E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187E68u;
label_187e68:
    // 0x187e68: 0x26130040  addiu       $s3, $s0, 0x40
    ctx->pc = 0x187e68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x187e6c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x187e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x187e70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x187e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187e74: 0x244212f0  addiu       $v0, $v0, 0x12F0
    ctx->pc = 0x187e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4848));
    // 0x187e78: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x187E78u;
    SET_GPR_U32(ctx, 31, 0x187E80u);
    ctx->pc = 0x187E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187E78u;
    // 0x187e7c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x187E78u, 0x187E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187E80u;
label_187e80:
    // 0x187e80: 0x3c110043  lui         $s1, 0x43
    ctx->pc = 0x187e80u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)67 << 16));
    // 0x187e84: 0xae540010  sw          $s4, 0x10($s2)
    ctx->pc = 0x187e84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 20));
    // 0x187e88: 0x26310f90  addiu       $s1, $s1, 0xF90
    ctx->pc = 0x187e88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 3984));
    // 0x187e8c: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x187e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x187e90: 0xae510018  sw          $s1, 0x18($s2)
    ctx->pc = 0x187e90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 17));
    // 0x187e94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x187e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187e98: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x187e98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x187e9c: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x187e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x187ea0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x187EA0u;
    SET_GPR_U32(ctx, 31, 0x187EA8u);
    ctx->pc = 0x187EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187EA0u;
    // 0x187ea4: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x187EA0u, 0x187EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187EA8u;
label_187ea8:
    // 0x187ea8: 0xae710018  sw          $s1, 0x18($s3)
    ctx->pc = 0x187ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 17));
    // 0x187eac: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x187eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x187eb0: 0xae740010  sw          $s4, 0x10($s3)
    ctx->pc = 0x187eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 20));
    // 0x187eb4: 0xae600014  sw          $zero, 0x14($s3)
    ctx->pc = 0x187eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 0));
    // 0x187eb8: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x187eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x187ebc: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x187ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x187ec0: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x187ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x187ec4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x187ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x187ec8: 0xaeb0001c  sw          $s0, 0x1C($s5)
    ctx->pc = 0x187ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 16));
    // 0x187ecc: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x187eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x187ed0: 0x8ea2001c  lw          $v0, 0x1C($s5)
    ctx->pc = 0x187ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x187ed4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x187ed4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_187ed8:
    // 0x187ed8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x187ed8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x187edc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x187edcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187ee0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x187ee0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x187ee4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x187ee4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x187ee8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x187ee8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x187eec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x187eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x187ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x187EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187EF0u;
        // 0x187ef4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187EF8u;
}
