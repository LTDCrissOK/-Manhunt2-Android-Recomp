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

// Function: sub_00185230
// Address: 0x185230 - 0x185328
void sub_00185230_0x185230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185230_0x185230");
#endif

    switch (ctx->pc) {
        case 0x185250u: goto label_185250;
        case 0x18527cu: goto label_18527c;
        case 0x1852a8u: goto label_1852a8;
        case 0x1852ccu: goto label_1852cc;
        case 0x1852f0u: goto label_1852f0;
        case 0x18530cu: goto label_18530c;
        default: break;
    }

    ctx->pc = 0x185230u;

    // 0x185230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x185230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x185234: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x185234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x185238: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x185238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18523c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18523cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x185240: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x185240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x185244: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x185244u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x185248: 0xc0608e8  jal         func_1823A0
    ctx->pc = 0x185248u;
    SET_GPR_U32(ctx, 31, 0x185250u);
    ctx->pc = 0x18524Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185248u;
    // 0x18524c: 0xe7b40020  swc1        $f20, 0x20($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1823A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1823A0u, 0x185248u, 0x185250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x185250u;
label_185250:
    // 0x185250: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x185250u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x185254: 0x24020180  addiu       $v0, $zero, 0x180
    ctx->pc = 0x185254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    // 0x185258: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x185258u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
    // 0x18525c: 0x2228818  mult        $s1, $s1, $v0
    ctx->pc = 0x18525cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x185260: 0x2610bf34  addiu       $s0, $s0, -0x40CC
    ctx->pc = 0x185260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950708));
    // 0x185264: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x185264u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x185268: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x185268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x18526c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x18526cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x185270: 0x24a5f8d0  addiu       $a1, $a1, -0x730
    ctx->pc = 0x185270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965456));
    // 0x185274: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x185274u;
    SET_GPR_U32(ctx, 31, 0x18527Cu);
    ctx->pc = 0x185278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185274u;
    // 0x185278: 0x2302021  addu        $a0, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x185274u, 0x18527Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18527Cu;
label_18527c:
    // 0x18527c: 0x2610fe8c  addiu       $s0, $s0, -0x174
    ctx->pc = 0x18527cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294966924));
    // 0x185280: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x185280u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x185284: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x185284u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x185288: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x185288u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x18528c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18528cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185290: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x185290u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x185294: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x185294u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x185298: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x185298u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x18529c: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x18529cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1852a0: 0xc060450  jal         func_181140
    ctx->pc = 0x1852A0u;
    SET_GPR_U32(ctx, 31, 0x1852A8u);
    ctx->pc = 0x1852A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1852A0u;
    // 0x1852a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1852A0u, 0x1852A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1852A8u;
label_1852a8:
    // 0x1852a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1852a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1852ac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1852acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1852b0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1852b0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1852b4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1852b4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1852b8: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1852b8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1852bc: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x1852bcu;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x1852c0: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1852c0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1852c4: 0xc060450  jal         func_181140
    ctx->pc = 0x1852C4u;
    SET_GPR_U32(ctx, 31, 0x1852CCu);
    ctx->pc = 0x1852C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1852C4u;
    // 0x1852c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1852C4u, 0x1852CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1852CCu;
label_1852cc:
    // 0x1852cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1852ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1852d0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1852d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1852d4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x1852d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x1852d8: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1852d8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1852dc: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x1852dcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x1852e0: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x1852e0u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x1852e4: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x1852e4u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x1852e8: 0xc060450  jal         func_181140
    ctx->pc = 0x1852E8u;
    SET_GPR_U32(ctx, 31, 0x1852F0u);
    ctx->pc = 0x1852ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1852E8u;
    // 0x1852ec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181140u, 0x1852E8u, 0x1852F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1852F0u;
label_1852f0:
    // 0x1852f0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1852f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1852f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1852f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1852f8: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x1852f8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x1852fc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1852fcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x185300: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x185300u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x185304: 0xc06049e  jal         func_181278
    ctx->pc = 0x185304u;
    SET_GPR_U32(ctx, 31, 0x18530Cu);
    ctx->pc = 0x185308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185304u;
    // 0x185308: 0x46006406  mov.s       $f16, $f12 (Delay Slot)
    ctx->f[16] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x181278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181278u, 0x185304u, 0x18530Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18530Cu;
label_18530c:
    // 0x18530c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18530cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185310: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x185310u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x185314: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x185314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185318: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x185318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x18531c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x18531cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x185320: 0x3e00008  jr          $ra
    ctx->pc = 0x185320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185320u;
        // 0x185324: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185328u;
}
