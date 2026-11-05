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

// Function: sub_00150308
// Address: 0x150308 - 0x150428
void sub_00150308_0x150308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150308_0x150308");
#endif

    switch (ctx->pc) {
        case 0x150330u: goto label_150330;
        case 0x15033cu: goto label_15033c;
        case 0x15034cu: goto label_15034c;
        case 0x150354u: goto label_150354;
        case 0x150364u: goto label_150364;
        case 0x150398u: goto label_150398;
        case 0x1503a4u: goto label_1503a4;
        case 0x1503e8u: goto label_1503e8;
        case 0x150408u: goto label_150408;
        default: break;
    }

    ctx->pc = 0x150308u;

    // 0x150308: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x150308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15030c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x15030cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x150310: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x150310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x150314: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x150314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x150318: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x150318u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15031c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x15031cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x150320: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x150320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x150324: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x150324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x150328: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x150328u;
    SET_GPR_U32(ctx, 31, 0x150330u);
    ctx->pc = 0x15032Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150328u;
    // 0x15032c: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x150328u, 0x150330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150330u;
label_150330:
    // 0x150330: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x150330u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x150334: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x150334u;
    SET_GPR_U32(ctx, 31, 0x15033Cu);
    ctx->pc = 0x150338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150334u;
    // 0x150338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x150334u, 0x15033Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15033Cu;
label_15033c:
    // 0x15033c: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x15033cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x150340: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x150340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x150344: 0xc053b00  jal         func_14EC00
    ctx->pc = 0x150344u;
    SET_GPR_U32(ctx, 31, 0x15034Cu);
    ctx->pc = 0x150348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150344u;
    // 0x150348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EC00u, 0x150344u, 0x15034Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15034Cu;
label_15034c:
    // 0x15034c: 0xc053aaa  jal         func_14EAA8
    ctx->pc = 0x15034Cu;
    SET_GPR_U32(ctx, 31, 0x150354u);
    ctx->pc = 0x150350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15034Cu;
    // 0x150350: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EAA8u, 0x15034Cu, 0x150354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150354u;
label_150354:
    // 0x150354: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x150354u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x150358: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x150358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15035c: 0xc04d9f0  jal         func_1367C0
    ctx->pc = 0x15035Cu;
    SET_GPR_U32(ctx, 31, 0x150364u);
    ctx->pc = 0x150360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15035Cu;
    // 0x150360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1367C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1367C0u, 0x15035Cu, 0x150364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150364u;
label_150364:
    // 0x150364: 0x9203046c  lbu         $v1, 0x46C($s0)
    ctx->pc = 0x150364u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    // 0x150368: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x150368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x15036c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x15036cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x150370: 0x24539a08  addiu       $s3, $v0, -0x65F8
    ctx->pc = 0x150370u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x150374: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x150374u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x150378: 0x24050029  addiu       $a1, $zero, 0x29
    ctx->pc = 0x150378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x15037c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x15037cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x150380: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x150380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150384: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x150384u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x150388: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x150388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x15038c: 0x8c51020c  lw          $s1, 0x20C($v0)
    ctx->pc = 0x15038cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x150390: 0xc043c56  jal         func_10F158
    ctx->pc = 0x150390u;
    SET_GPR_U32(ctx, 31, 0x150398u);
    ctx->pc = 0x150394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150390u;
    // 0x150394: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x150390u, 0x150398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150398u;
label_150398:
    // 0x150398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x150398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15039c: 0xc053c6a  jal         func_14F1A8
    ctx->pc = 0x15039Cu;
    SET_GPR_U32(ctx, 31, 0x1503A4u);
    ctx->pc = 0x1503A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15039Cu;
    // 0x1503a0: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F1A8u, 0x15039Cu, 0x1503A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1503A4u;
label_1503a4:
    // 0x1503a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1503a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1503a8: 0x12400018  beqz        $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x1503A8u;
    {
        const bool branch_taken_0x1503a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1503ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1503A8u;
        // 0x1503ac: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1503a8) {
            ctx->pc = 0x15040Cu;
            goto label_15040c;
        }
    }
    ctx->pc = 0x1503B0u;
    // 0x1503b0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1503b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1503b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1503b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1503b8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1503b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1503bc: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x1503bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x1503c0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1503C0u;
    {
        const bool branch_taken_0x1503c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1503c0) {
            ctx->pc = 0x1503C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1503C0u;
            // 0x1503c4: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1503D0u;
            goto label_1503d0;
        }
    }
    ctx->pc = 0x1503C8u;
    // 0x1503c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1503C8u;
    {
        const bool branch_taken_0x1503c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1503CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1503C8u;
        // 0x1503cc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1503c8) {
            ctx->pc = 0x1503D8u;
            goto label_1503d8;
        }
    }
    ctx->pc = 0x1503D0u;
label_1503d0:
    // 0x1503d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1503d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1503d4: 0x24700070  addiu       $s0, $v1, 0x70
    ctx->pc = 0x1503d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1503d8:
    // 0x1503d8: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1503D8u;
    {
        const bool branch_taken_0x1503d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1503d8) {
            ctx->pc = 0x1503DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1503D8u;
            // 0x1503dc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15040Cu;
            goto label_15040c;
        }
    }
    ctx->pc = 0x1503E0u;
    // 0x1503e0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1503E0u;
    SET_GPR_U32(ctx, 31, 0x1503E8u);
    ctx->pc = 0x1503E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1503E0u;
    // 0x1503e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1503E0u, 0x1503E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1503E8u;
label_1503e8:
    // 0x1503e8: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1503e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1503ec: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x1503ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1503f0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1503f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1503f4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1503f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1503f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1503f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1503fc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1503fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150400: 0xc043b18  jal         func_10EC60
    ctx->pc = 0x150400u;
    SET_GPR_U32(ctx, 31, 0x150408u);
    ctx->pc = 0x150404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150400u;
    // 0x150404: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EC60u, 0x150400u, 0x150408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150408u;
label_150408:
    // 0x150408: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x150408u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15040c:
    // 0x15040c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x15040cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x150410: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x150410u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x150414: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x150414u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x150418: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x150418u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15041c: 0x3e00008  jr          $ra
    ctx->pc = 0x15041Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15041Cu;
        // 0x150420: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15041Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150424u;
    // 0x150424: 0x0  nop
    ctx->pc = 0x150424u;
    // NOP
    ctx->pc = 0x150428u;
}
