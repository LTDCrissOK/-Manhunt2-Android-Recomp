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

// Function: sub_00185328
// Address: 0x185328 - 0x185448
void sub_00185328_0x185328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185328_0x185328");
#endif

    switch (ctx->pc) {
        case 0x185348u: goto label_185348;
        case 0x185374u: goto label_185374;
        case 0x1853a0u: goto label_1853a0;
        case 0x1853c4u: goto label_1853c4;
        case 0x1853e8u: goto label_1853e8;
        case 0x18540cu: goto label_18540c;
        case 0x185428u: goto label_185428;
        default: break;
    }

    ctx->pc = 0x185328u;

    // 0x185328: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x185328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18532c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18532cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x185330: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x185330u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185334: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x185334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x185338: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x185338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18533c: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x18533cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x185340: 0xc0608e8  jal         func_1823A0
    ctx->pc = 0x185340u;
    SET_GPR_U32(ctx, 31, 0x185348u);
    ctx->pc = 0x185344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185340u;
    // 0x185344: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1823A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1823A0u, 0x185340u, 0x185348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185348u;
label_185348:
    // 0x185348: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x185348u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x18534c: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x18534cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x185350: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x185350u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
    // 0x185354: 0x2228818  mult        $s1, $s1, $v0
    ctx->pc = 0x185354u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x185358: 0x2610bf34  addiu       $s0, $s0, -0x40CC
    ctx->pc = 0x185358u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950708));
    // 0x18535c: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x18535cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x185360: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x185360u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x185364: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x185364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x185368: 0x24a5f8e0  addiu       $a1, $a1, -0x720
    ctx->pc = 0x185368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965472));
    // 0x18536c: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x18536Cu;
    SET_GPR_U32(ctx, 31, 0x185374u);
    ctx->pc = 0x185370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18536Cu;
    // 0x185370: 0x2302021  addu        $a0, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x18536Cu, 0x185374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185374u;
label_185374:
    // 0x185374: 0x2610fe8c  addiu       $s0, $s0, -0x174
    ctx->pc = 0x185374u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966924));
    // 0x185378: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x185378u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x18537c: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x18537cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x185380: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x185380u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x185384: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185388: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x185388u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x18538c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x18538cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x185390: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x185390u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x185394: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x185394u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x185398: 0xc060450  jal         func_181140
    ctx->pc = 0x185398u;
    SET_GPR_U32(ctx, 31, 0x1853A0u);
    ctx->pc = 0x18539Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185398u;
    // 0x18539c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x185398u, 0x1853A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1853A0u;
label_1853a0:
    // 0x1853a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1853a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1853a4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1853a4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1853a8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1853a8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1853ac: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x1853acu;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x1853b0: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1853b0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1853b4: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x1853b4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x1853b8: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1853b8u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1853bc: 0xc060450  jal         func_181140
    ctx->pc = 0x1853BCu;
    SET_GPR_U32(ctx, 31, 0x1853C4u);
    ctx->pc = 0x1853C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1853BCu;
    // 0x1853c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1853BCu, 0x1853C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1853C4u;
label_1853c4:
    // 0x1853c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1853c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1853c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1853c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1853cc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1853ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1853d0: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x1853d0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x1853d4: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1853d4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1853d8: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x1853d8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x1853dc: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1853dcu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1853e0: 0xc060450  jal         func_181140
    ctx->pc = 0x1853E0u;
    SET_GPR_U32(ctx, 31, 0x1853E8u);
    ctx->pc = 0x1853E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1853E0u;
    // 0x1853e4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1853E0u, 0x1853E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1853E8u;
label_1853e8:
    // 0x1853e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1853e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1853ec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1853ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1853f0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1853f0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1853f4: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x1853f4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x1853f8: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1853f8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1853fc: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x1853fcu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x185400: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x185400u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x185404: 0xc060450  jal         func_181140
    ctx->pc = 0x185404u;
    SET_GPR_U32(ctx, 31, 0x18540Cu);
    ctx->pc = 0x185408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185404u;
    // 0x185408: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x185404u, 0x18540Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18540Cu;
label_18540c:
    // 0x18540c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x18540cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x185410: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185414: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x185414u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x185418: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x185418u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x18541c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x18541cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x185420: 0xc06049e  jal         func_181278
    ctx->pc = 0x185420u;
    SET_GPR_U32(ctx, 31, 0x185428u);
    ctx->pc = 0x185424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185420u;
    // 0x185424: 0x46006406  mov.s       $f16, $f12 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181278u, 0x185420u, 0x185428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185428u;
label_185428:
    // 0x185428: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x185428u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18542c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18542cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x185430: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x185430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185434: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x185434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x185438: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x185438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18543c: 0x3e00008  jr          $ra
    ctx->pc = 0x18543Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18543Cu;
        // 0x185440: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18543Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185444u;
    // 0x185444: 0x0  nop
    ctx->pc = 0x185444u;
    // NOP
    ctx->pc = 0x185448u;
}
