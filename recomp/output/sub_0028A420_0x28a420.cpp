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

// Function: sub_0028A420
// Address: 0x28a420 - 0x28a4f8
void sub_0028A420_0x28a420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028A420_0x28a420");
#endif

    switch (ctx->pc) {
        case 0x28a458u: goto label_28a458;
        case 0x28a46cu: goto label_28a46c;
        case 0x28a498u: goto label_28a498;
        case 0x28a4acu: goto label_28a4ac;
        case 0x28a4b8u: goto label_28a4b8;
        case 0x28a4e0u: goto label_28a4e0;
        default: break;
    }

    ctx->pc = 0x28a420u;

    // 0x28a420: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x28a420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x28a424: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28a424u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x28a428: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x28a428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
    // 0x28a42c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x28a42cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a430: 0x3c110057  lui         $s1, 0x57
    ctx->pc = 0x28a430u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)87 << 16));
    // 0x28a434: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x28a434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
    // 0x28a438: 0x26314ec0  addiu       $s1, $s1, 0x4EC0
    ctx->pc = 0x28a438u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20160));
    // 0x28a43c: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x28a43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x28a440: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x28a440u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x28a444: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28a444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a448: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x28a448u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x28a44c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x28a44cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x28a450: 0xc0aeb96  jal         func_2BAE58
    ctx->pc = 0x28A450u;
    SET_GPR_U32(ctx, 31, 0x28A458u);
    ctx->pc = 0x28A454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A450u;
    // 0x28a454: 0x24a5aef0  addiu       $a1, $a1, -0x5110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAE58u, 0x28A450u, 0x28A458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A458u;
label_28a458:
    // 0x28a458: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x28a458u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x28a45c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x28a45cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a460: 0x2610c970  addiu       $s0, $s0, -0x3690
    ctx->pc = 0x28a460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294953328));
    // 0x28a464: 0xc0a0c74  jal         func_2831D0
    ctx->pc = 0x28A464u;
    SET_GPR_U32(ctx, 31, 0x28A46Cu);
    ctx->pc = 0x28A468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A464u;
    // 0x28a468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2831D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2831D0u, 0x28A464u, 0x28A46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A46Cu;
label_28a46c:
    // 0x28a46c: 0x3c013e6b  lui         $at, 0x3E6B
    ctx->pc = 0x28a46cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15979 << 16));
    // 0x28a470: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x28a470u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x28a474: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x28a474u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28a478: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x28a478u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x28a47c: 0x3c013e8f  lui         $at, 0x3E8F
    ctx->pc = 0x28a47cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16015 << 16));
    // 0x28a480: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x28a480u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x28a484: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x28a484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x28a488: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x28a488u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x28a48c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28a48cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a490: 0xc0a2268  jal         func_2889A0
    ctx->pc = 0x28A490u;
    SET_GPR_U32(ctx, 31, 0x28A498u);
    ctx->pc = 0x28A494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A490u;
    // 0x28a494: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2889A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2889A0u, 0x28A490u, 0x28A498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A498u;
label_28a498:
    // 0x28a498: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28a498u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x28a49c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28a49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a4a0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x28a4a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a4a4: 0xc0aeb96  jal         func_2BAE58
    ctx->pc = 0x28A4A4u;
    SET_GPR_U32(ctx, 31, 0x28A4ACu);
    ctx->pc = 0x28A4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A4A4u;
    // 0x28a4a8: 0x24a5aef8  addiu       $a1, $a1, -0x5108 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAE58u, 0x28A4A4u, 0x28A4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A4ACu;
label_28a4ac:
    // 0x28a4ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28a4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a4b0: 0xc0a0c74  jal         func_2831D0
    ctx->pc = 0x28A4B0u;
    SET_GPR_U32(ctx, 31, 0x28A4B8u);
    ctx->pc = 0x28A4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A4B0u;
    // 0x28a4b4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2831D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2831D0u, 0x28A4B0u, 0x28A4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A4B8u;
label_28a4b8:
    // 0x28a4b8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x28a4b8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x28a4bc: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x28a4bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x28a4c0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x28a4c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x28a4c4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x28a4c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28a4c8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x28a4c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x28a4cc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x28a4ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x28a4d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28a4d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a4d4: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x28a4d4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x28a4d8: 0xc0a2268  jal         func_2889A0
    ctx->pc = 0x28A4D8u;
    SET_GPR_U32(ctx, 31, 0x28A4E0u);
    ctx->pc = 0x28A4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28A4D8u;
    // 0x28a4dc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2889A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2889A0u, 0x28A4D8u, 0x28A4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28A4E0u;
label_28a4e0:
    // 0x28a4e0: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x28a4e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28a4e4: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x28a4e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x28a4e8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x28a4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28a4ec: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x28a4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28a4f0: 0x3e00008  jr          $ra
    ctx->pc = 0x28A4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A4F0u;
        // 0x28a4f4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A4F8u;
}
