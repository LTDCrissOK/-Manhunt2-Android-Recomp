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

// Function: sub_001222D8
// Address: 0x1222d8 - 0x122418
void sub_001222D8_0x1222d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001222D8_0x1222d8");
#endif

    switch (ctx->pc) {
        case 0x12231cu: goto label_12231c;
        case 0x12232cu: goto label_12232c;
        case 0x12233cu: goto label_12233c;
        case 0x12234cu: goto label_12234c;
        case 0x122374u: goto label_122374;
        case 0x122388u: goto label_122388;
        case 0x122398u: goto label_122398;
        case 0x1223a4u: goto label_1223a4;
        case 0x1223b0u: goto label_1223b0;
        case 0x1223bcu: goto label_1223bc;
        case 0x1223c8u: goto label_1223c8;
        case 0x1223d4u: goto label_1223d4;
        case 0x1223e0u: goto label_1223e0;
        default: break;
    }

    ctx->pc = 0x1222d8u;

    // 0x1222d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1222d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1222dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1222dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1222e0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1222e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1222e4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1222e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1222e8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1222e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1222ec: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1222ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1222f0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1222f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1222f4: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1222f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1222f8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1222f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1222fc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1222fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122300: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x122300u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x122304: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x122304u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122308: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x122308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12230c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x12230cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x122310: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x122310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x122314: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x122314u;
    SET_GPR_U32(ctx, 31, 0x12231Cu);
    ctx->pc = 0x122318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122314u;
    // 0x122318: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x122314u, 0x12231Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12231Cu;
label_12231c:
    // 0x12231c: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x12231Cu;
    {
        const bool branch_taken_0x12231c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12231Cu;
        // 0x122320: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12231c) {
            ctx->pc = 0x1223ECu;
            goto label_1223ec;
        }
    }
    ctx->pc = 0x122324u;
    // 0x122324: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x122324u;
    SET_GPR_U32(ctx, 31, 0x12232Cu);
    ctx->pc = 0x122328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122324u;
    // 0x122328: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x122324u, 0x12232Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12232Cu;
label_12232c:
    // 0x12232c: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x12232Cu;
    {
        const bool branch_taken_0x12232c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12232Cu;
        // 0x122330: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12232c) {
            ctx->pc = 0x1223ECu;
            goto label_1223ec;
        }
    }
    ctx->pc = 0x122334u;
    // 0x122334: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x122334u;
    SET_GPR_U32(ctx, 31, 0x12233Cu);
    ctx->pc = 0x122338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122334u;
    // 0x122338: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x122334u, 0x12233Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12233Cu;
label_12233c:
    // 0x12233c: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x12233Cu;
    {
        const bool branch_taken_0x12233c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12233Cu;
        // 0x122340: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12233c) {
            ctx->pc = 0x1223ECu;
            goto label_1223ec;
        }
    }
    ctx->pc = 0x122344u;
    // 0x122344: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x122344u;
    SET_GPR_U32(ctx, 31, 0x12234Cu);
    ctx->pc = 0x122348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122344u;
    // 0x122348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x122344u, 0x12234Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12234Cu;
label_12234c:
    // 0x12234c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x12234Cu;
    {
        const bool branch_taken_0x12234c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12234Cu;
        // 0x122350: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12234c) {
            ctx->pc = 0x1223ECu;
            goto label_1223ec;
        }
    }
    ctx->pc = 0x122354u;
    // 0x122354: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x122354u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x122358: 0x0  nop
    ctx->pc = 0x122358u;
    // NOP
    // 0x12235c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x12235cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x122360: 0x0  nop
    ctx->pc = 0x122360u;
    // NOP
    // 0x122364: 0x45030022  bc1tl       . + 4 + (0x22 << 2)
    ctx->pc = 0x122364u;
    {
        const bool branch_taken_0x122364 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x122364) {
            ctx->pc = 0x122368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x122364u;
            // 0x122368: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1223F0u;
            goto label_1223f0;
        }
    }
    ctx->pc = 0x12236Cu;
    // 0x12236c: 0xc040a7a  jal         func_1029E8
    ctx->pc = 0x12236Cu;
    SET_GPR_U32(ctx, 31, 0x122374u);
    ctx->pc = 0x122370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12236Cu;
    // 0x122370: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1029E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1029E8u, 0x12236Cu, 0x122374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122374u;
label_122374:
    // 0x122374: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x122374u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122378: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x122378u;
    {
        const bool branch_taken_0x122378 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12237Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122378u;
        // 0x12237c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122378) {
            ctx->pc = 0x1223E8u;
            goto label_1223e8;
        }
    }
    ctx->pc = 0x122380u;
    // 0x122380: 0xc04a2e0  jal         func_128B80
    ctx->pc = 0x122380u;
    SET_GPR_U32(ctx, 31, 0x122388u);
    ctx->pc = 0x122384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122380u;
    // 0x122384: 0x2405091f  addiu       $a1, $zero, 0x91F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2335));
    ctx->in_delay_slot = false;
    ctx->pc = 0x128B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128B80u, 0x122380u, 0x122388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122388u;
label_122388:
    // 0x122388: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x122388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12238c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12238cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x122390: 0xc05a6b0  jal         func_169AC0
    ctx->pc = 0x122390u;
    SET_GPR_U32(ctx, 31, 0x122398u);
    ctx->pc = 0x122394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122390u;
    // 0x122394: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169AC0u, 0x122390u, 0x122398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122398u;
label_122398:
    // 0x122398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x122398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12239c: 0xc05a6ba  jal         func_169AE8
    ctx->pc = 0x12239Cu;
    SET_GPR_U32(ctx, 31, 0x1223A4u);
    ctx->pc = 0x1223A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12239Cu;
    // 0x1223a0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169AE8u, 0x12239Cu, 0x1223A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1223A4u;
label_1223a4:
    // 0x1223a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1223a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1223a8: 0xc05a6c8  jal         func_169B20
    ctx->pc = 0x1223A8u;
    SET_GPR_U32(ctx, 31, 0x1223B0u);
    ctx->pc = 0x1223ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1223A8u;
    // 0x1223ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169B20u, 0x1223A8u, 0x1223B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1223B0u;
label_1223b0:
    // 0x1223b0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1223b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1223b4: 0xc05a6d2  jal         func_169B48
    ctx->pc = 0x1223B4u;
    SET_GPR_U32(ctx, 31, 0x1223BCu);
    ctx->pc = 0x1223B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1223B4u;
    // 0x1223b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169B48u, 0x1223B4u, 0x1223BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1223BCu;
label_1223bc:
    // 0x1223bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1223bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1223c0: 0xc05a6e6  jal         func_169B98
    ctx->pc = 0x1223C0u;
    SET_GPR_U32(ctx, 31, 0x1223C8u);
    ctx->pc = 0x1223C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1223C0u;
    // 0x1223c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169B98u, 0x1223C0u, 0x1223C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1223C8u;
label_1223c8:
    // 0x1223c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1223c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1223cc: 0xc05a722  jal         func_169C88
    ctx->pc = 0x1223CCu;
    SET_GPR_U32(ctx, 31, 0x1223D4u);
    ctx->pc = 0x1223D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1223CCu;
    // 0x1223d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169C88u, 0x1223CCu, 0x1223D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1223D4u;
label_1223d4:
    // 0x1223d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1223d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1223d8: 0xc049944  jal         func_126510
    ctx->pc = 0x1223D8u;
    SET_GPR_U32(ctx, 31, 0x1223E0u);
    ctx->pc = 0x1223DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1223D8u;
    // 0x1223dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126510u, 0x1223D8u, 0x1223E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1223E0u;
label_1223e0:
    // 0x1223e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1223E0u;
    {
        const bool branch_taken_0x1223e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1223E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1223E0u;
        // 0x1223e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1223e0) {
            ctx->pc = 0x1223ECu;
            goto label_1223ec;
        }
    }
    ctx->pc = 0x1223E8u;
label_1223e8:
    // 0x1223e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1223e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1223ec:
    // 0x1223ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1223ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1223f0:
    // 0x1223f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1223f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1223f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1223f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1223f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1223f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1223fc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1223fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122400: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x122400u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x122404: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x122404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x122408: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x122408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12240c: 0x3e00008  jr          $ra
    ctx->pc = 0x12240Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x122410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12240Cu;
        // 0x122410: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12240Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122414u;
    // 0x122414: 0x0  nop
    ctx->pc = 0x122414u;
    // NOP
    ctx->pc = 0x122418u;
}
