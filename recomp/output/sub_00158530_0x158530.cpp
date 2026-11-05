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

// Function: sub_00158530
// Address: 0x158530 - 0x158640
void sub_00158530_0x158530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158530_0x158530");
#endif

    switch (ctx->pc) {
        case 0x158530u: goto label_158530;
        case 0x158534u: goto label_158534;
        case 0x158538u: goto label_158538;
        case 0x15853cu: goto label_15853c;
        case 0x158540u: goto label_158540;
        case 0x158544u: goto label_158544;
        case 0x158548u: goto label_158548;
        case 0x15854cu: goto label_15854c;
        case 0x158550u: goto label_158550;
        case 0x158554u: goto label_158554;
        case 0x158558u: goto label_158558;
        case 0x15855cu: goto label_15855c;
        case 0x158560u: goto label_158560;
        case 0x158564u: goto label_158564;
        case 0x158568u: goto label_158568;
        case 0x15856cu: goto label_15856c;
        case 0x158570u: goto label_158570;
        case 0x158574u: goto label_158574;
        case 0x158578u: goto label_158578;
        case 0x15857cu: goto label_15857c;
        case 0x158580u: goto label_158580;
        case 0x158584u: goto label_158584;
        case 0x158588u: goto label_158588;
        case 0x15858cu: goto label_15858c;
        case 0x158590u: goto label_158590;
        case 0x158594u: goto label_158594;
        case 0x158598u: goto label_158598;
        case 0x15859cu: goto label_15859c;
        case 0x1585a0u: goto label_1585a0;
        case 0x1585a4u: goto label_1585a4;
        case 0x1585a8u: goto label_1585a8;
        case 0x1585acu: goto label_1585ac;
        case 0x1585b0u: goto label_1585b0;
        case 0x1585b4u: goto label_1585b4;
        case 0x1585b8u: goto label_1585b8;
        case 0x1585bcu: goto label_1585bc;
        case 0x1585c0u: goto label_1585c0;
        case 0x1585c4u: goto label_1585c4;
        case 0x1585c8u: goto label_1585c8;
        case 0x1585ccu: goto label_1585cc;
        case 0x1585d0u: goto label_1585d0;
        case 0x1585d4u: goto label_1585d4;
        case 0x1585d8u: goto label_1585d8;
        case 0x1585dcu: goto label_1585dc;
        case 0x1585e0u: goto label_1585e0;
        case 0x1585e4u: goto label_1585e4;
        case 0x1585e8u: goto label_1585e8;
        case 0x1585ecu: goto label_1585ec;
        case 0x1585f0u: goto label_1585f0;
        case 0x1585f4u: goto label_1585f4;
        case 0x1585f8u: goto label_1585f8;
        case 0x1585fcu: goto label_1585fc;
        case 0x158600u: goto label_158600;
        case 0x158604u: goto label_158604;
        case 0x158608u: goto label_158608;
        case 0x15860cu: goto label_15860c;
        case 0x158610u: goto label_158610;
        case 0x158614u: goto label_158614;
        case 0x158618u: goto label_158618;
        case 0x15861cu: goto label_15861c;
        case 0x158620u: goto label_158620;
        case 0x158624u: goto label_158624;
        case 0x158628u: goto label_158628;
        case 0x15862cu: goto label_15862c;
        case 0x158630u: goto label_158630;
        case 0x158634u: goto label_158634;
        case 0x158638u: goto label_158638;
        case 0x15863cu: goto label_15863c;
        default: break;
    }

    ctx->pc = 0x158530u;

label_158530:
    // 0x158530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x158530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_158534:
    // 0x158534: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x158534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_158538:
    // 0x158538: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x158538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_15853c:
    // 0x15853c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x15853cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_158540:
    // 0x158540: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x158540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_158544:
    // 0x158544: 0xc04f1f4  jal         func_13C7D0
label_158548:
    if (ctx->pc == 0x158548u) {
        ctx->pc = 0x158548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158544u;
        // 0x158548: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15854Cu;
        goto label_15854c;
    }
    ctx->pc = 0x158544u;
    SET_GPR_U32(ctx, 31, 0x15854Cu);
    ctx->pc = 0x158548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158544u;
    // 0x158548: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C7D0u, 0x158544u, 0x15854Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15854Cu;
label_15854c:
    // 0x15854c: 0x8e0602e0  lw          $a2, 0x2E0($s0)
    ctx->pc = 0x15854cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
label_158550:
    // 0x158550: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x158550u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_158554:
    // 0x158554: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_158558:
    // 0x158558: 0xc04f33e  jal         func_13CCF8
label_15855c:
    if (ctx->pc == 0x15855Cu) {
        ctx->pc = 0x15855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158558u;
        // 0x15855c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158560u;
        goto label_158560;
    }
    ctx->pc = 0x158558u;
    SET_GPR_U32(ctx, 31, 0x158560u);
    ctx->pc = 0x15855Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158558u;
    // 0x15855c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCF8u, 0x158558u, 0x158560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158560u;
label_158560:
    // 0x158560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_158564:
    // 0x158564: 0xc04f0b6  jal         func_13C2D8
label_158568:
    if (ctx->pc == 0x158568u) {
        ctx->pc = 0x158568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158564u;
        // 0x158568: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15856Cu;
        goto label_15856c;
    }
    ctx->pc = 0x158564u;
    SET_GPR_U32(ctx, 31, 0x15856Cu);
    ctx->pc = 0x158568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158564u;
    // 0x158568: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x158564u, 0x15856Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15856Cu;
label_15856c:
    // 0x15856c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15856cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_158570:
    // 0x158570: 0x8e0502e4  lw          $a1, 0x2E4($s0)
    ctx->pc = 0x158570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
label_158574:
    // 0x158574: 0xc045fea  jal         func_117FA8
label_158578:
    if (ctx->pc == 0x158578u) {
        ctx->pc = 0x158578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158574u;
        // 0x158578: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15857Cu;
        goto label_15857c;
    }
    ctx->pc = 0x158574u;
    SET_GPR_U32(ctx, 31, 0x15857Cu);
    ctx->pc = 0x158578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158574u;
    // 0x158578: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x158574u, 0x15857Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15857Cu;
label_15857c:
    // 0x15857c: 0x8e05031c  lw          $a1, 0x31C($s0)
    ctx->pc = 0x15857cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 796)));
label_158580:
    // 0x158580: 0xc046104  jal         func_118410
label_158584:
    if (ctx->pc == 0x158584u) {
        ctx->pc = 0x158584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158580u;
        // 0x158584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158588u;
        goto label_158588;
    }
    ctx->pc = 0x158580u;
    SET_GPR_U32(ctx, 31, 0x158588u);
    ctx->pc = 0x158584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158580u;
    // 0x158584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x158580u, 0x158588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158588u;
label_158588:
    // 0x158588: 0x8e050320  lw          $a1, 0x320($s0)
    ctx->pc = 0x158588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
label_15858c:
    // 0x15858c: 0xc0460c4  jal         func_118310
label_158590:
    if (ctx->pc == 0x158590u) {
        ctx->pc = 0x158590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15858Cu;
        // 0x158590: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158594u;
        goto label_158594;
    }
    ctx->pc = 0x15858Cu;
    SET_GPR_U32(ctx, 31, 0x158594u);
    ctx->pc = 0x158590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15858Cu;
    // 0x158590: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118310u, 0x15858Cu, 0x158594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158594u;
label_158594:
    // 0x158594: 0xc60c0310  lwc1        $f12, 0x310($s0)
    ctx->pc = 0x158594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_158598:
    // 0x158598: 0xc046290  jal         func_118A40
label_15859c:
    if (ctx->pc == 0x15859Cu) {
        ctx->pc = 0x15859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158598u;
        // 0x15859c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1585A0u;
        goto label_1585a0;
    }
    ctx->pc = 0x158598u;
    SET_GPR_U32(ctx, 31, 0x1585A0u);
    ctx->pc = 0x15859Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158598u;
    // 0x15859c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x158598u, 0x1585A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1585A0u;
label_1585a0:
    // 0x1585a0: 0x8e020300  lw          $v0, 0x300($s0)
    ctx->pc = 0x1585a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
label_1585a4:
    // 0x1585a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1585a8:
    if (ctx->pc == 0x1585A8u) {
        ctx->pc = 0x1585A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1585A4u;
        // 0x1585a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1585ACu;
        goto label_1585ac;
    }
    ctx->pc = 0x1585A4u;
    {
        const bool branch_taken_0x1585a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1585A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1585A4u;
        // 0x1585a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1585a4) {
            ctx->pc = 0x1585B4u;
            goto label_1585b4;
        }
    }
    ctx->pc = 0x1585ACu;
label_1585ac:
    // 0x1585ac: 0xc046058  jal         func_118160
label_1585b0:
    if (ctx->pc == 0x1585B0u) {
        ctx->pc = 0x1585B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1585ACu;
        // 0x1585b0: 0x260502f0  addiu       $a1, $s0, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1585B4u;
        goto label_1585b4;
    }
    ctx->pc = 0x1585ACu;
    SET_GPR_U32(ctx, 31, 0x1585B4u);
    ctx->pc = 0x1585B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1585ACu;
    // 0x1585b0: 0x260502f0  addiu       $a1, $s0, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x1585ACu, 0x1585B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1585B4u;
label_1585b4:
    // 0x1585b4: 0x8e030220  lw          $v1, 0x220($s0)
    ctx->pc = 0x1585b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
label_1585b8:
    // 0x1585b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1585b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1585bc:
    // 0x1585bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1585bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1585c0:
    // 0x1585c0: 0xae230080  sw          $v1, 0x80($s1)
    ctx->pc = 0x1585c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
label_1585c4:
    // 0x1585c4: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1585c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1585c8:
    // 0x1585c8: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1585c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1585cc:
    // 0x1585cc: 0x60f809  jalr        $v1
label_1585d0:
    if (ctx->pc == 0x1585D0u) {
        ctx->pc = 0x1585D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1585CCu;
        // 0x1585d0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1585D4u;
        goto label_1585d4;
    }
    ctx->pc = 0x1585CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1585D4u);
        ctx->pc = 0x1585D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1585CCu;
        // 0x1585d0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1585CCu, 0x1585D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1585D4u;
label_1585d4:
    // 0x1585d4: 0x8e020334  lw          $v0, 0x334($s0)
    ctx->pc = 0x1585d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_1585d8:
    // 0x1585d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1585dc:
    if (ctx->pc == 0x1585DCu) {
        ctx->pc = 0x1585DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1585D8u;
        // 0x1585dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1585E0u;
        goto label_1585e0;
    }
    ctx->pc = 0x1585D8u;
    {
        const bool branch_taken_0x1585d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1585DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1585D8u;
        // 0x1585dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1585d8) {
            ctx->pc = 0x1585E8u;
            goto label_1585e8;
        }
    }
    ctx->pc = 0x1585E0u;
label_1585e0:
    // 0x1585e0: 0xc04d7dc  jal         func_135F70
label_1585e4:
    if (ctx->pc == 0x1585E4u) {
        ctx->pc = 0x1585E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1585E0u;
        // 0x1585e4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1585E8u;
        goto label_1585e8;
    }
    ctx->pc = 0x1585E0u;
    SET_GPR_U32(ctx, 31, 0x1585E8u);
    ctx->pc = 0x1585E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1585E0u;
    // 0x1585e4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F70u, 0x1585E0u, 0x1585E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1585E8u;
label_1585e8:
    // 0x1585e8: 0x8e020338  lw          $v0, 0x338($s0)
    ctx->pc = 0x1585e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_1585ec:
    // 0x1585ec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1585f0:
    if (ctx->pc == 0x1585F0u) {
        ctx->pc = 0x1585F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1585ECu;
        // 0x1585f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1585F4u;
        goto label_1585f4;
    }
    ctx->pc = 0x1585ECu;
    {
        const bool branch_taken_0x1585ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1585F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1585ECu;
        // 0x1585f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1585ec) {
            ctx->pc = 0x1585FCu;
            goto label_1585fc;
        }
    }
    ctx->pc = 0x1585F4u;
label_1585f4:
    // 0x1585f4: 0xc04d7dc  jal         func_135F70
label_1585f8:
    if (ctx->pc == 0x1585F8u) {
        ctx->pc = 0x1585F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1585F4u;
        // 0x1585f8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1585FCu;
        goto label_1585fc;
    }
    ctx->pc = 0x1585F4u;
    SET_GPR_U32(ctx, 31, 0x1585FCu);
    ctx->pc = 0x1585F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1585F4u;
    // 0x1585f8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F70u, 0x1585F4u, 0x1585FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1585FCu;
label_1585fc:
    // 0x1585fc: 0x8e050330  lw          $a1, 0x330($s0)
    ctx->pc = 0x1585fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
label_158600:
    // 0x158600: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x158600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_158604:
    // 0x158604: 0xc04d7da  jal         func_135F68
label_158608:
    if (ctx->pc == 0x158608u) {
        ctx->pc = 0x158608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158604u;
        // 0x158608: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x15860Cu;
        goto label_15860c;
    }
    ctx->pc = 0x158604u;
    SET_GPR_U32(ctx, 31, 0x15860Cu);
    ctx->pc = 0x158608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158604u;
    // 0x158608: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F68u, 0x158604u, 0x15860Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15860Cu;
label_15860c:
    // 0x15860c: 0x8e020324  lw          $v0, 0x324($s0)
    ctx->pc = 0x15860cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 804)));
label_158610:
    // 0x158610: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x158610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
label_158614:
    // 0x158614: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x158614u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_158618:
    // 0x158618: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15861c:
    if (ctx->pc == 0x15861Cu) {
        ctx->pc = 0x15861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158618u;
        // 0x15861c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158620u;
        goto label_158620;
    }
    ctx->pc = 0x158618u;
    {
        const bool branch_taken_0x158618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15861Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158618u;
        // 0x15861c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158618) {
            ctx->pc = 0x158628u;
            goto label_158628;
        }
    }
    ctx->pc = 0x158620u;
label_158620:
    // 0x158620: 0xc052000  jal         func_148000
label_158624:
    if (ctx->pc == 0x158624u) {
        ctx->pc = 0x158624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158620u;
        // 0x158624: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158628u;
        goto label_158628;
    }
    ctx->pc = 0x158620u;
    SET_GPR_U32(ctx, 31, 0x158628u);
    ctx->pc = 0x158624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158620u;
    // 0x158624: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148000u, 0x158620u, 0x158628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158628u;
label_158628:
    // 0x158628: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x158628u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15862c:
    // 0x15862c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15862cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_158630:
    // 0x158630: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x158630u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_158634:
    // 0x158634: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x158634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_158638:
    // 0x158638: 0x3e00008  jr          $ra
label_15863c:
    if (ctx->pc == 0x15863Cu) {
        ctx->pc = 0x15863Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158638u;
        // 0x15863c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158640u;
        goto label_fallthrough_0x158638;
    }
    ctx->pc = 0x158638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15863Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158638u;
        // 0x15863c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x158638:
    ctx->pc = 0x158640u;
}
