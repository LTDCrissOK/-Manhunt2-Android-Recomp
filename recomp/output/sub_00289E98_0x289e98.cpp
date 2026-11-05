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

// Function: sub_00289E98
// Address: 0x289e98 - 0x289f90
void sub_00289E98_0x289e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289E98_0x289e98");
#endif

    switch (ctx->pc) {
        case 0x289ec0u: goto label_289ec0;
        case 0x289ee4u: goto label_289ee4;
        case 0x289ef8u: goto label_289ef8;
        case 0x289f24u: goto label_289f24;
        case 0x289f38u: goto label_289f38;
        case 0x289f44u: goto label_289f44;
        case 0x289f6cu: goto label_289f6c;
        default: break;
    }

    ctx->pc = 0x289e98u;

    // 0x289e98: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x289e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x289e9c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x289e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x289ea0: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x289ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x289ea4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x289ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289ea8: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x289ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x289eac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x289eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289eb0: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x289eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x289eb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x289eb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289eb8: 0xc0a2ae2  jal         func_28AB88
    ctx->pc = 0x289EB8u;
    SET_GPR_U32(ctx, 31, 0x289EC0u);
    ctx->pc = 0x289EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289EB8u;
    // 0x289ebc: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB88u, 0x289EB8u, 0x289EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289EC0u;
label_289ec0:
    // 0x289ec0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x289ec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x289ec4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x289ec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x289ec8: 0x3c110057  lui         $s1, 0x57
    ctx->pc = 0x289ec8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)87 << 16));
    // 0x289ecc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x289eccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x289ed0: 0x26314ec0  addiu       $s1, $s1, 0x4EC0
    ctx->pc = 0x289ed0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20160));
    // 0x289ed4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x289ed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289ed8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x289ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289edc: 0xc0aeb96  jal         func_2BAE58
    ctx->pc = 0x289EDCu;
    SET_GPR_U32(ctx, 31, 0x289EE4u);
    ctx->pc = 0x289EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289EDCu;
    // 0x289ee0: 0x24a5aea8  addiu       $a1, $a1, -0x5158 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAE58u, 0x289EDCu, 0x289EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289EE4u;
label_289ee4:
    // 0x289ee4: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x289ee4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x289ee8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x289ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289eec: 0x2610c970  addiu       $s0, $s0, -0x3690
    ctx->pc = 0x289eecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294953328));
    // 0x289ef0: 0xc0a0c74  jal         func_2831D0
    ctx->pc = 0x289EF0u;
    SET_GPR_U32(ctx, 31, 0x289EF8u);
    ctx->pc = 0x289EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289EF0u;
    // 0x289ef4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2831D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2831D0u, 0x289EF0u, 0x289EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289EF8u;
label_289ef8:
    // 0x289ef8: 0x3c013ea8  lui         $at, 0x3EA8
    ctx->pc = 0x289ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16040 << 16));
    // 0x289efc: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x289efcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x289f00: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x289f00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x289f04: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x289f04u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x289f08: 0x3c013e8f  lui         $at, 0x3E8F
    ctx->pc = 0x289f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16015 << 16));
    // 0x289f0c: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x289f0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x289f10: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x289f10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x289f14: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x289f14u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x289f18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x289f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289f1c: 0xc0a2268  jal         func_2889A0
    ctx->pc = 0x289F1Cu;
    SET_GPR_U32(ctx, 31, 0x289F24u);
    ctx->pc = 0x289F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289F1Cu;
    // 0x289f20: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2889A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2889A0u, 0x289F1Cu, 0x289F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289F24u;
label_289f24:
    // 0x289f24: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x289f24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x289f28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x289f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289f2c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x289f2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289f30: 0xc0aeb96  jal         func_2BAE58
    ctx->pc = 0x289F30u;
    SET_GPR_U32(ctx, 31, 0x289F38u);
    ctx->pc = 0x289F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289F30u;
    // 0x289f34: 0x24a5aeb0  addiu       $a1, $a1, -0x5150 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAE58u, 0x289F30u, 0x289F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289F38u;
label_289f38:
    // 0x289f38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x289f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289f3c: 0xc0a0c74  jal         func_2831D0
    ctx->pc = 0x289F3Cu;
    SET_GPR_U32(ctx, 31, 0x289F44u);
    ctx->pc = 0x289F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289F3Cu;
    // 0x289f40: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2831D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2831D0u, 0x289F3Cu, 0x289F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289F44u;
label_289f44:
    // 0x289f44: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x289f44u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x289f48: 0x3c013e9e  lui         $at, 0x3E9E
    ctx->pc = 0x289f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16030 << 16));
    // 0x289f4c: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x289f4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x289f50: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x289f50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x289f54: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x289f54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x289f58: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x289f58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x289f5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x289f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289f60: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x289f60u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x289f64: 0xc0a2268  jal         func_2889A0
    ctx->pc = 0x289F64u;
    SET_GPR_U32(ctx, 31, 0x289F6Cu);
    ctx->pc = 0x289F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289F64u;
    // 0x289f68: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2889A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2889A0u, 0x289F64u, 0x289F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289F6Cu;
label_289f6c:
    // 0x289f6c: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x289f6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x289f70: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x289f70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x289f74: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x289f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x289f78: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x289f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x289f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x289F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289F7Cu;
        // 0x289f80: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x289F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289F84u;
    // 0x289f84: 0x0  nop
    ctx->pc = 0x289f84u;
    // NOP
    // 0x289f88: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x289f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x289f8c: 0x0  nop
    ctx->pc = 0x289f8cu;
    // NOP
    ctx->pc = 0x289f90u;
}
