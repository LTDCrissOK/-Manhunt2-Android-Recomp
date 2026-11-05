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

// Function: sub_00185830
// Address: 0x185830 - 0x185958
void sub_00185830_0x185830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185830_0x185830");
#endif

    switch (ctx->pc) {
        case 0x185850u: goto label_185850;
        case 0x18587cu: goto label_18587c;
        case 0x1858a8u: goto label_1858a8;
        case 0x1858ccu: goto label_1858cc;
        case 0x1858f0u: goto label_1858f0;
        case 0x185914u: goto label_185914;
        case 0x185938u: goto label_185938;
        default: break;
    }

    ctx->pc = 0x185830u;

    // 0x185830: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x185830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x185834: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x185834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x185838: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x185838u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18583c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18583cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x185840: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x185840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x185844: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x185844u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x185848: 0xc0608e8  jal         func_1823A0
    ctx->pc = 0x185848u;
    SET_GPR_U32(ctx, 31, 0x185850u);
    ctx->pc = 0x18584Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185848u;
    // 0x18584c: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1823A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1823A0u, 0x185848u, 0x185850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185850u;
label_185850:
    // 0x185850: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x185850u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x185854: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x185854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x185858: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x185858u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
    // 0x18585c: 0x2228818  mult        $s1, $s1, $v0
    ctx->pc = 0x18585cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x185860: 0x2610bf34  addiu       $s0, $s0, -0x40CC
    ctx->pc = 0x185860u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950708));
    // 0x185864: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x185864u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x185868: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x185868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x18586c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x18586cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x185870: 0x24a5f920  addiu       $a1, $a1, -0x6E0
    ctx->pc = 0x185870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965536));
    // 0x185874: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x185874u;
    SET_GPR_U32(ctx, 31, 0x18587Cu);
    ctx->pc = 0x185878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185874u;
    // 0x185878: 0x2302021  addu        $a0, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x185874u, 0x18587Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18587Cu;
label_18587c:
    // 0x18587c: 0x2610fe8c  addiu       $s0, $s0, -0x174
    ctx->pc = 0x18587cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966924));
    // 0x185880: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x185880u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x185884: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x185884u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x185888: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x185888u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x18588c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18588cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185890: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x185890u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x185894: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x185894u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x185898: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x185898u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x18589c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x18589cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1858a0: 0xc060450  jal         func_181140
    ctx->pc = 0x1858A0u;
    SET_GPR_U32(ctx, 31, 0x1858A8u);
    ctx->pc = 0x1858A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1858A0u;
    // 0x1858a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1858A0u, 0x1858A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1858A8u;
label_1858a8:
    // 0x1858a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1858a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1858ac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1858acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1858b0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1858b0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1858b4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1858b4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1858b8: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x1858b8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x1858bc: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x1858bcu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x1858c0: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1858c0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1858c4: 0xc060450  jal         func_181140
    ctx->pc = 0x1858C4u;
    SET_GPR_U32(ctx, 31, 0x1858CCu);
    ctx->pc = 0x1858C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1858C4u;
    // 0x1858c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1858C4u, 0x1858CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1858CCu;
label_1858cc:
    // 0x1858cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1858ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1858d0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1858d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1858d4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1858d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1858d8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1858d8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1858dc: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x1858dcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x1858e0: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x1858e0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x1858e4: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1858e4u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1858e8: 0xc060450  jal         func_181140
    ctx->pc = 0x1858E8u;
    SET_GPR_U32(ctx, 31, 0x1858F0u);
    ctx->pc = 0x1858ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1858E8u;
    // 0x1858ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1858E8u, 0x1858F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1858F0u;
label_1858f0:
    // 0x1858f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1858f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1858f4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1858f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1858f8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1858f8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x1858fc: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1858fcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x185900: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x185900u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x185904: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x185904u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x185908: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x185908u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x18590c: 0xc060450  jal         func_181140
    ctx->pc = 0x18590Cu;
    SET_GPR_U32(ctx, 31, 0x185914u);
    ctx->pc = 0x185910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18590Cu;
    // 0x185910: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x18590Cu, 0x185914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185914u;
label_185914:
    // 0x185914: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x185914u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x185918: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x185918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18591c: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x18591cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x185920: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x185920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x185924: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x185924u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x185928: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x185928u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x18592c: 0x46006406  mov.s       $f16, $f12
    ctx->pc = 0x18592cu;
    ctx->f[16] = FPU_MOV_S(ctx->f[12]);
    // 0x185930: 0xc060450  jal         func_181140
    ctx->pc = 0x185930u;
    SET_GPR_U32(ctx, 31, 0x185938u);
    ctx->pc = 0x185934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185930u;
    // 0x185934: 0x46006446  mov.s       $f17, $f12 (Delay Slot)
    ctx->f[17] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x185930u, 0x185938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185938u;
label_185938:
    // 0x185938: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x185938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18593c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18593cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x185940: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x185940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185944: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x185944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x185948: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x185948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x18594c: 0x3e00008  jr          $ra
    ctx->pc = 0x18594Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18594Cu;
        // 0x185950: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18594Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185954u;
    // 0x185954: 0x0  nop
    ctx->pc = 0x185954u;
    // NOP
    ctx->pc = 0x185958u;
}
