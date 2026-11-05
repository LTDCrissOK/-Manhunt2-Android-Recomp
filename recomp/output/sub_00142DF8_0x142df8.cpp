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

// Function: sub_00142DF8
// Address: 0x142df8 - 0x142e98
void sub_00142DF8_0x142df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142DF8_0x142df8");
#endif

    switch (ctx->pc) {
        case 0x142e1cu: goto label_142e1c;
        case 0x142e28u: goto label_142e28;
        case 0x142e34u: goto label_142e34;
        case 0x142e54u: goto label_142e54;
        case 0x142e68u: goto label_142e68;
        case 0x142e74u: goto label_142e74;
        case 0x142e84u: goto label_142e84;
        default: break;
    }

    ctx->pc = 0x142df8u;

    // 0x142df8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x142df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x142dfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x142dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x142e00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x142e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x142e04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x142e04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142e08: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x142e08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142e0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x142e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x142e10: 0xae060468  sw          $a2, 0x468($s0)
    ctx->pc = 0x142e10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1128), GPR_U32(ctx, 6));
    // 0x142e14: 0xc0461fe  jal         func_1187F8
    ctx->pc = 0x142E14u;
    SET_GPR_U32(ctx, 31, 0x142E1Cu);
    ctx->pc = 0x142E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142E14u;
    // 0x142e18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187F8u, 0x142E14u, 0x142E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142E1Cu;
label_142e1c:
    // 0x142e1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x142e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142e20: 0xc04623e  jal         func_1188F8
    ctx->pc = 0x142E20u;
    SET_GPR_U32(ctx, 31, 0x142E28u);
    ctx->pc = 0x142E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142E20u;
    // 0x142e24: 0xae020ab0  sw          $v0, 0xAB0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2736), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1188F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1188F8u, 0x142E20u, 0x142E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142E28u;
label_142e28:
    // 0x142e28: 0xa2020b10  sb          $v0, 0xB10($s0)
    ctx->pc = 0x142e28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2832), (uint8_t)GPR_U32(ctx, 2));
    // 0x142e2c: 0xc0462b0  jal         func_118AC0
    ctx->pc = 0x142E2Cu;
    SET_GPR_U32(ctx, 31, 0x142E34u);
    ctx->pc = 0x142E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142E2Cu;
    // 0x142e30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118AC0u, 0x142E2Cu, 0x142E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142E34u;
label_142e34:
    // 0x142e34: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x142e34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x142e38: 0x0  nop
    ctx->pc = 0x142e38u;
    // NOP
    // 0x142e3c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x142e3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142e40: 0x0  nop
    ctx->pc = 0x142e40u;
    // NOP
    // 0x142e44: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x142E44u;
    {
        const bool branch_taken_0x142e44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x142E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142E44u;
        // 0x142e48: 0xe6000b1c  swc1        $f0, 0xB1C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2844), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x142e44) {
            ctx->pc = 0x142E60u;
            goto label_142e60;
        }
    }
    ctx->pc = 0x142E4Cu;
    // 0x142e4c: 0xc046002  jal         func_118008
    ctx->pc = 0x142E4Cu;
    SET_GPR_U32(ctx, 31, 0x142E54u);
    ctx->pc = 0x142E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142E4Cu;
    // 0x142e50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118008u, 0x142E4Cu, 0x142E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142E54u;
label_142e54:
    // 0x142e54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x142e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142e58: 0xae020b14  sw          $v0, 0xB14($s0)
    ctx->pc = 0x142e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2836), GPR_U32(ctx, 2));
    // 0x142e5c: 0xae030b18  sw          $v1, 0xB18($s0)
    ctx->pc = 0x142e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2840), GPR_U32(ctx, 3));
label_142e60:
    // 0x142e60: 0xc046272  jal         func_1189C8
    ctx->pc = 0x142E60u;
    SET_GPR_U32(ctx, 31, 0x142E68u);
    ctx->pc = 0x142E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142E60u;
    // 0x142e64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189C8u, 0x142E60u, 0x142E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142E68u;
label_142e68:
    // 0x142e68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x142e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142e6c: 0xc045eee  jal         func_117BB8
    ctx->pc = 0x142E6Cu;
    SET_GPR_U32(ctx, 31, 0x142E74u);
    ctx->pc = 0x142E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142E6Cu;
    // 0x142e70: 0xae020ab8  sw          $v0, 0xAB8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 2744), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x142E6Cu, 0x142E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142E74u;
label_142e74:
    // 0x142e74: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x142e74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x142e78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x142e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142e7c: 0xc042136  jal         func_1084D8
    ctx->pc = 0x142E7Cu;
    SET_GPR_U32(ctx, 31, 0x142E84u);
    ctx->pc = 0x142E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142E7Cu;
    // 0x142e80: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084D8u, 0x142E7Cu, 0x142E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142E84u;
label_142e84:
    // 0x142e84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x142e84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142e88: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x142e88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x142e8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x142e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142e90: 0x3e00008  jr          $ra
    ctx->pc = 0x142E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142E90u;
        // 0x142e94: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142E98u;
}
