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

// Function: sub_00151688
// Address: 0x151688 - 0x151758
void sub_00151688_0x151688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151688_0x151688");
#endif

    switch (ctx->pc) {
        case 0x151688u: goto label_151688;
        case 0x15168cu: goto label_15168c;
        case 0x151690u: goto label_151690;
        case 0x151694u: goto label_151694;
        case 0x151698u: goto label_151698;
        case 0x15169cu: goto label_15169c;
        case 0x1516a0u: goto label_1516a0;
        case 0x1516a4u: goto label_1516a4;
        case 0x1516a8u: goto label_1516a8;
        case 0x1516acu: goto label_1516ac;
        case 0x1516b0u: goto label_1516b0;
        case 0x1516b4u: goto label_1516b4;
        case 0x1516b8u: goto label_1516b8;
        case 0x1516bcu: goto label_1516bc;
        case 0x1516c0u: goto label_1516c0;
        case 0x1516c4u: goto label_1516c4;
        case 0x1516c8u: goto label_1516c8;
        case 0x1516ccu: goto label_1516cc;
        case 0x1516d0u: goto label_1516d0;
        case 0x1516d4u: goto label_1516d4;
        case 0x1516d8u: goto label_1516d8;
        case 0x1516dcu: goto label_1516dc;
        case 0x1516e0u: goto label_1516e0;
        case 0x1516e4u: goto label_1516e4;
        case 0x1516e8u: goto label_1516e8;
        case 0x1516ecu: goto label_1516ec;
        case 0x1516f0u: goto label_1516f0;
        case 0x1516f4u: goto label_1516f4;
        case 0x1516f8u: goto label_1516f8;
        case 0x1516fcu: goto label_1516fc;
        case 0x151700u: goto label_151700;
        case 0x151704u: goto label_151704;
        case 0x151708u: goto label_151708;
        case 0x15170cu: goto label_15170c;
        case 0x151710u: goto label_151710;
        case 0x151714u: goto label_151714;
        case 0x151718u: goto label_151718;
        case 0x15171cu: goto label_15171c;
        case 0x151720u: goto label_151720;
        case 0x151724u: goto label_151724;
        case 0x151728u: goto label_151728;
        case 0x15172cu: goto label_15172c;
        case 0x151730u: goto label_151730;
        case 0x151734u: goto label_151734;
        case 0x151738u: goto label_151738;
        case 0x15173cu: goto label_15173c;
        case 0x151740u: goto label_151740;
        case 0x151744u: goto label_151744;
        case 0x151748u: goto label_151748;
        case 0x15174cu: goto label_15174c;
        case 0x151750u: goto label_151750;
        case 0x151754u: goto label_151754;
        default: break;
    }

    ctx->pc = 0x151688u;

label_151688:
    // 0x151688: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x151688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_15168c:
    // 0x15168c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15168cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_151690:
    // 0x151690: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x151690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_151694:
    // 0x151694: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x151694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_151698:
    // 0x151698: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x151698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_15169c:
    // 0x15169c: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x15169cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1516a0:
    // 0x1516a0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1516a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1516a4:
    // 0x1516a4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1516a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1516a8:
    // 0x1516a8: 0xc053c82  jal         func_14F208
label_1516ac:
    if (ctx->pc == 0x1516ACu) {
        ctx->pc = 0x1516ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1516A8u;
        // 0x1516ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1516B0u;
        goto label_1516b0;
    }
    ctx->pc = 0x1516A8u;
    SET_GPR_U32(ctx, 31, 0x1516B0u);
    ctx->pc = 0x1516ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1516A8u;
    // 0x1516ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F208u, 0x1516A8u, 0x1516B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1516B0u;
label_1516b0:
    // 0x1516b0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1516b4:
    if (ctx->pc == 0x1516B4u) {
        ctx->pc = 0x1516B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1516B0u;
        // 0x1516b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1516B8u;
        goto label_1516b8;
    }
    ctx->pc = 0x1516B0u;
    {
        const bool branch_taken_0x1516b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1516B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1516B0u;
        // 0x1516b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1516b0) {
            ctx->pc = 0x1516E0u;
            goto label_1516e0;
        }
    }
    ctx->pc = 0x1516B8u;
label_1516b8:
    // 0x1516b8: 0xc053ca4  jal         func_14F290
label_1516bc:
    if (ctx->pc == 0x1516BCu) {
        ctx->pc = 0x1516BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1516B8u;
        // 0x1516bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1516C0u;
        goto label_1516c0;
    }
    ctx->pc = 0x1516B8u;
    SET_GPR_U32(ctx, 31, 0x1516C0u);
    ctx->pc = 0x1516BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1516B8u;
    // 0x1516bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F290u, 0x1516B8u, 0x1516C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1516C0u;
label_1516c0:
    // 0x1516c0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1516c4:
    if (ctx->pc == 0x1516C4u) {
        ctx->pc = 0x1516C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1516C0u;
        // 0x1516c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1516C8u;
        goto label_1516c8;
    }
    ctx->pc = 0x1516C0u;
    {
        const bool branch_taken_0x1516c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1516C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1516C0u;
        // 0x1516c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1516c0) {
            ctx->pc = 0x15173Cu;
            goto label_15173c;
        }
    }
    ctx->pc = 0x1516C8u;
label_1516c8:
    // 0x1516c8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1516c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1516cc:
    // 0x1516cc: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1516ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1516d0:
    // 0x1516d0: 0x40f809  jalr        $v0
label_1516d4:
    if (ctx->pc == 0x1516D4u) {
        ctx->pc = 0x1516D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1516D0u;
        // 0x1516d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1516D8u;
        goto label_1516d8;
    }
    ctx->pc = 0x1516D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1516D8u);
        ctx->pc = 0x1516D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1516D0u;
        // 0x1516d4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1516D0u, 0x1516D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1516D8u;
label_1516d8:
    // 0x1516d8: 0x10000019  b           . + 4 + (0x19 << 2)
label_1516dc:
    if (ctx->pc == 0x1516DCu) {
        ctx->pc = 0x1516DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1516D8u;
        // 0x1516dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1516E0u;
        goto label_1516e0;
    }
    ctx->pc = 0x1516D8u;
    {
        const bool branch_taken_0x1516d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1516DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1516D8u;
        // 0x1516dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1516d8) {
            ctx->pc = 0x151740u;
            goto label_151740;
        }
    }
    ctx->pc = 0x1516E0u;
label_1516e0:
    // 0x1516e0: 0xc60004d4  lwc1        $f0, 0x4D4($s0)
    ctx->pc = 0x1516e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1516e4:
    // 0x1516e4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1516e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1516e8:
    // 0x1516e8: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x1516e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_1516ec:
    // 0x1516ec: 0xc053c88  jal         func_14F220
label_1516f0:
    if (ctx->pc == 0x1516F0u) {
        ctx->pc = 0x1516F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1516ECu;
        // 0x1516f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1516F4u;
        goto label_1516f4;
    }
    ctx->pc = 0x1516ECu;
    SET_GPR_U32(ctx, 31, 0x1516F4u);
    ctx->pc = 0x1516F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1516ECu;
    // 0x1516f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F220u, 0x1516ECu, 0x1516F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1516F4u;
label_1516f4:
    // 0x1516f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1516f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1516f8:
    // 0x1516f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1516f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1516fc:
    // 0x1516fc: 0xc053c7c  jal         func_14F1F0
label_151700:
    if (ctx->pc == 0x151700u) {
        ctx->pc = 0x151700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1516FCu;
        // 0x151700: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151704u;
        goto label_151704;
    }
    ctx->pc = 0x1516FCu;
    SET_GPR_U32(ctx, 31, 0x151704u);
    ctx->pc = 0x151700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1516FCu;
    // 0x151700: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F1F0u, 0x1516FCu, 0x151704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151704u;
label_151704:
    // 0x151704: 0x9205046c  lbu         $a1, 0x46C($s0)
    ctx->pc = 0x151704u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_151708:
    // 0x151708: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x151708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15170c:
    // 0x15170c: 0xc04d8d6  jal         func_136358
label_151710:
    if (ctx->pc == 0x151710u) {
        ctx->pc = 0x151710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15170Cu;
        // 0x151710: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151714u;
        goto label_151714;
    }
    ctx->pc = 0x15170Cu;
    SET_GPR_U32(ctx, 31, 0x151714u);
    ctx->pc = 0x151710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15170Cu;
    // 0x151710: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x15170Cu, 0x151714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151714u;
label_151714:
    // 0x151714: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_151718:
    if (ctx->pc == 0x151718u) {
        ctx->pc = 0x151718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151714u;
        // 0x151718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15171Cu;
        goto label_15171c;
    }
    ctx->pc = 0x151714u;
    {
        const bool branch_taken_0x151714 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x151718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151714u;
        // 0x151718: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151714) {
            ctx->pc = 0x151730u;
            goto label_151730;
        }
    }
    ctx->pc = 0x15171Cu;
label_15171c:
    // 0x15171c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x15171cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_151720:
    // 0x151720: 0xc053b00  jal         func_14EC00
label_151724:
    if (ctx->pc == 0x151724u) {
        ctx->pc = 0x151724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151720u;
        // 0x151724: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151728u;
        goto label_151728;
    }
    ctx->pc = 0x151720u;
    SET_GPR_U32(ctx, 31, 0x151728u);
    ctx->pc = 0x151724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151720u;
    // 0x151724: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EC00u, 0x151720u, 0x151728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151728u;
label_151728:
    // 0x151728: 0x10000005  b           . + 4 + (0x5 << 2)
label_15172c:
    if (ctx->pc == 0x15172Cu) {
        ctx->pc = 0x15172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151728u;
        // 0x15172c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151730u;
        goto label_151730;
    }
    ctx->pc = 0x151728u;
    {
        const bool branch_taken_0x151728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151728u;
        // 0x15172c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151728) {
            ctx->pc = 0x151740u;
            goto label_151740;
        }
    }
    ctx->pc = 0x151730u;
label_151730:
    // 0x151730: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x151730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_151734:
    // 0x151734: 0xc053b00  jal         func_14EC00
label_151738:
    if (ctx->pc == 0x151738u) {
        ctx->pc = 0x151738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151734u;
        // 0x151738: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15173Cu;
        goto label_15173c;
    }
    ctx->pc = 0x151734u;
    SET_GPR_U32(ctx, 31, 0x15173Cu);
    ctx->pc = 0x151738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151734u;
    // 0x151738: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EC00u, 0x151734u, 0x15173Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15173Cu;
label_15173c:
    // 0x15173c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15173cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_151740:
    // 0x151740: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x151740u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_151744:
    // 0x151744: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x151744u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_151748:
    // 0x151748: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x151748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_15174c:
    // 0x15174c: 0x3e00008  jr          $ra
label_151750:
    if (ctx->pc == 0x151750u) {
        ctx->pc = 0x151750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15174Cu;
        // 0x151750: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x151754u;
        goto label_151754;
    }
    ctx->pc = 0x15174Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15174Cu;
        // 0x151750: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15174Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151754u;
label_151754:
    // 0x151754: 0x0  nop
    ctx->pc = 0x151754u;
    // NOP
    ctx->pc = 0x151758u;
}
