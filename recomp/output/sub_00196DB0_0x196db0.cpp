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

// Function: sub_00196DB0
// Address: 0x196db0 - 0x196e98
void sub_00196DB0_0x196db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196DB0_0x196db0");
#endif

    switch (ctx->pc) {
        case 0x196de8u: goto label_196de8;
        case 0x196dfcu: goto label_196dfc;
        case 0x196e24u: goto label_196e24;
        case 0x196e44u: goto label_196e44;
        case 0x196e64u: goto label_196e64;
        default: break;
    }

    ctx->pc = 0x196db0u;

    // 0x196db0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x196db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x196db4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x196db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x196db8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x196db8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196dbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x196dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x196dc0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x196dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x196dc4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x196dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x196dc8: 0x26110030  addiu       $s1, $s0, 0x30
    ctx->pc = 0x196dc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x196dcc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x196dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x196dd0: 0x26120050  addiu       $s2, $s0, 0x50
    ctx->pc = 0x196dd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x196dd4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x196dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x196dd8: 0x26140070  addiu       $s4, $s0, 0x70
    ctx->pc = 0x196dd8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x196ddc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x196ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x196de0: 0xc061a32  jal         func_1868C8
    ctx->pc = 0x196DE0u;
    SET_GPR_U32(ctx, 31, 0x196DE8u);
    ctx->pc = 0x196DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196DE0u;
    // 0x196de4: 0x24150006  addiu       $s5, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868C8u, 0x196DE0u, 0x196DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196DE8u;
label_196de8:
    // 0x196de8: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x196de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x196dec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x196decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196df0: 0x244211f0  addiu       $v0, $v0, 0x11F0
    ctx->pc = 0x196df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4592));
    // 0x196df4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x196DF4u;
    SET_GPR_U32(ctx, 31, 0x196DFCu);
    ctx->pc = 0x196DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196DF4u;
    // 0x196df8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x196DF4u, 0x196DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196DFCu;
label_196dfc:
    // 0x196dfc: 0x3c130043  lui         $s3, 0x43
    ctx->pc = 0x196dfcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)67 << 16));
    // 0x196e00: 0xae350010  sw          $s5, 0x10($s1)
    ctx->pc = 0x196e00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 21));
    // 0x196e04: 0x26730f90  addiu       $s3, $s3, 0xF90
    ctx->pc = 0x196e04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 3984));
    // 0x196e08: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x196e08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x196e0c: 0xae330018  sw          $s3, 0x18($s1)
    ctx->pc = 0x196e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 19));
    // 0x196e10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x196e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196e14: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x196e14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x196e18: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x196e18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x196e1c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x196E1Cu;
    SET_GPR_U32(ctx, 31, 0x196E24u);
    ctx->pc = 0x196E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196E1Cu;
    // 0x196e20: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x196E1Cu, 0x196E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196E24u;
label_196e24:
    // 0x196e24: 0xae530018  sw          $s3, 0x18($s2)
    ctx->pc = 0x196e24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 19));
    // 0x196e28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x196e28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196e2c: 0xae550010  sw          $s5, 0x10($s2)
    ctx->pc = 0x196e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 21));
    // 0x196e30: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x196e30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x196e34: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x196e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x196e38: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x196e38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x196e3c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x196E3Cu;
    SET_GPR_U32(ctx, 31, 0x196E44u);
    ctx->pc = 0x196E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196E3Cu;
    // 0x196e40: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x196E3Cu, 0x196E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196E44u;
label_196e44:
    // 0x196e44: 0xae930018  sw          $s3, 0x18($s4)
    ctx->pc = 0x196e44u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 19));
    // 0x196e48: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x196e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x196e4c: 0xae950010  sw          $s5, 0x10($s4)
    ctx->pc = 0x196e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 21));
    // 0x196e50: 0xae800014  sw          $zero, 0x14($s4)
    ctx->pc = 0x196e50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
    // 0x196e54: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x196e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x196e58: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x196e58u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x196e5c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x196E5Cu;
    SET_GPR_U32(ctx, 31, 0x196E64u);
    ctx->pc = 0x196E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196E5Cu;
    // 0x196e60: 0xae800004  sw          $zero, 0x4($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x196E5Cu, 0x196E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196E64u;
label_196e64:
    // 0x196e64: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x196e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x196e68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x196e68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196e6c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x196e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x196e70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x196e70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196e74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x196e74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x196e78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x196e78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196e7c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x196e7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x196e80: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x196e80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196e84: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x196e84u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x196e88: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x196e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x196e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x196E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196E8Cu;
        // 0x196e90: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196E94u;
    // 0x196e94: 0x0  nop
    ctx->pc = 0x196e94u;
    // NOP
    ctx->pc = 0x196e98u;
}
