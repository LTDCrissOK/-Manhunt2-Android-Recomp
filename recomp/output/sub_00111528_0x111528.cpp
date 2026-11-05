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

// Function: sub_00111528
// Address: 0x111528 - 0x111738
void sub_00111528_0x111528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111528_0x111528");
#endif

    switch (ctx->pc) {
        case 0x111574u: goto label_111574;
        case 0x111610u: goto label_111610;
        case 0x11161cu: goto label_11161c;
        default: break;
    }

    ctx->pc = 0x111528u;

    // 0x111528: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x111528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11152c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11152cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x111530: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x111530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x111534: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x111534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111538: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x111538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11153c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x11153cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x111540: 0x14400078  bnez        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x111540u;
    {
        const bool branch_taken_0x111540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111540u;
        // 0x111544: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111540) {
            ctx->pc = 0x111724u;
            goto label_111724;
        }
    }
    ctx->pc = 0x111548u;
    // 0x111548: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x111548u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11154c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x11154cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x111550: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x111550u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x111554: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x111554u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x111558: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x111558u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x11155c: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x11155cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x111560: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x111560u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x111564: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x111564u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x111568: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x111568u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x11156c: 0xc0449e8  jal         func_1127A0
    ctx->pc = 0x11156Cu;
    SET_GPR_U32(ctx, 31, 0x111574u);
    ctx->pc = 0x111570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11156Cu;
    // 0x111570: 0xae2000b8  sw          $zero, 0xB8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1127A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1127A0u, 0x11156Cu, 0x111574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111574u;
label_111574:
    // 0x111574: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x111574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x111578: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x111578u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11157c: 0x2402004b  addiu       $v0, $zero, 0x4B
    ctx->pc = 0x11157cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x111580: 0xae220274  sw          $v0, 0x274($s1)
    ctx->pc = 0x111580u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 628), GPR_U32(ctx, 2));
    // 0x111584: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111588: 0xe620026c  swc1        $f0, 0x26C($s1)
    ctx->pc = 0x111588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 620), bits); }
    // 0x11158c: 0xae220270  sw          $v0, 0x270($s1)
    ctx->pc = 0x11158cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 624), GPR_U32(ctx, 2));
    // 0x111590: 0xae2000b0  sw          $zero, 0xB0($s1)
    ctx->pc = 0x111590u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
    // 0x111594: 0xae2000b4  sw          $zero, 0xB4($s1)
    ctx->pc = 0x111594u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
    // 0x111598: 0xae2000bc  sw          $zero, 0xBC($s1)
    ctx->pc = 0x111598u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 0));
    // 0x11159c: 0xae3000c0  sw          $s0, 0xC0($s1)
    ctx->pc = 0x11159cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 16));
    // 0x1115a0: 0xae2000c4  sw          $zero, 0xC4($s1)
    ctx->pc = 0x1115a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 0));
    // 0x1115a4: 0xae2000c8  sw          $zero, 0xC8($s1)
    ctx->pc = 0x1115a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 0));
    // 0x1115a8: 0xae2000cc  sw          $zero, 0xCC($s1)
    ctx->pc = 0x1115a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 0));
    // 0x1115ac: 0xae2000d0  sw          $zero, 0xD0($s1)
    ctx->pc = 0x1115acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
    // 0x1115b0: 0xae2000d8  sw          $zero, 0xD8($s1)
    ctx->pc = 0x1115b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 0));
    // 0x1115b4: 0xae2000d4  sw          $zero, 0xD4($s1)
    ctx->pc = 0x1115b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
    // 0x1115b8: 0xae2000dc  sw          $zero, 0xDC($s1)
    ctx->pc = 0x1115b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 0));
    // 0x1115bc: 0xae2000e0  sw          $zero, 0xE0($s1)
    ctx->pc = 0x1115bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 0));
    // 0x1115c0: 0xae2000e4  sw          $zero, 0xE4($s1)
    ctx->pc = 0x1115c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 228), GPR_U32(ctx, 0));
    // 0x1115c4: 0xae3000e8  sw          $s0, 0xE8($s1)
    ctx->pc = 0x1115c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 16));
    // 0x1115c8: 0xae2000ec  sw          $zero, 0xEC($s1)
    ctx->pc = 0x1115c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 236), GPR_U32(ctx, 0));
    // 0x1115cc: 0xae3000f0  sw          $s0, 0xF0($s1)
    ctx->pc = 0x1115ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 16));
    // 0x1115d0: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x1115d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
    // 0x1115d4: 0xae2000f8  sw          $zero, 0xF8($s1)
    ctx->pc = 0x1115d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 248), GPR_U32(ctx, 0));
    // 0x1115d8: 0xae2000fc  sw          $zero, 0xFC($s1)
    ctx->pc = 0x1115d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 252), GPR_U32(ctx, 0));
    // 0x1115dc: 0xae200100  sw          $zero, 0x100($s1)
    ctx->pc = 0x1115dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
    // 0x1115e0: 0xae200104  sw          $zero, 0x104($s1)
    ctx->pc = 0x1115e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 0));
    // 0x1115e4: 0xae200108  sw          $zero, 0x108($s1)
    ctx->pc = 0x1115e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
    // 0x1115e8: 0xae20010c  sw          $zero, 0x10C($s1)
    ctx->pc = 0x1115e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 268), GPR_U32(ctx, 0));
    // 0x1115ec: 0xae200110  sw          $zero, 0x110($s1)
    ctx->pc = 0x1115ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 272), GPR_U32(ctx, 0));
    // 0x1115f0: 0xae200114  sw          $zero, 0x114($s1)
    ctx->pc = 0x1115f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 0));
    // 0x1115f4: 0xae200118  sw          $zero, 0x118($s1)
    ctx->pc = 0x1115f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 280), GPR_U32(ctx, 0));
    // 0x1115f8: 0xae20011c  sw          $zero, 0x11C($s1)
    ctx->pc = 0x1115f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 0));
    // 0x1115fc: 0xae200120  sw          $zero, 0x120($s1)
    ctx->pc = 0x1115fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 0));
    // 0x111600: 0xae200124  sw          $zero, 0x124($s1)
    ctx->pc = 0x111600u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 292), GPR_U32(ctx, 0));
    // 0x111604: 0xae200128  sw          $zero, 0x128($s1)
    ctx->pc = 0x111604u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 0));
    // 0x111608: 0xc044cd8  jal         func_113360
    ctx->pc = 0x111608u;
    SET_GPR_U32(ctx, 31, 0x111610u);
    ctx->pc = 0x11160Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111608u;
    // 0x11160c: 0xae30012c  sw          $s0, 0x12C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113360u, 0x111608u, 0x111610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111610u;
label_111610:
    // 0x111610: 0xa22001b4  sb          $zero, 0x1B4($s1)
    ctx->pc = 0x111610u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 436), (uint8_t)GPR_U32(ctx, 0));
    // 0x111614: 0xc04508c  jal         func_114230
    ctx->pc = 0x111614u;
    SET_GPR_U32(ctx, 31, 0x11161Cu);
    ctx->pc = 0x111618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111614u;
    // 0x111618: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114230u, 0x111614u, 0x11161Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11161Cu;
label_11161c:
    // 0x11161c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x11161cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x111620: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x111620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111624: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x111624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x111628: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x111628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x11162c: 0xae300278  sw          $s0, 0x278($s1)
    ctx->pc = 0x11162cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 632), GPR_U32(ctx, 16));
    // 0x111630: 0xae2201f4  sw          $v0, 0x1F4($s1)
    ctx->pc = 0x111630u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 500), GPR_U32(ctx, 2));
    // 0x111634: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x111634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x111638: 0xe6200230  swc1        $f0, 0x230($s1)
    ctx->pc = 0x111638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 560), bits); }
    // 0x11163c: 0x2403080d  addiu       $v1, $zero, 0x80D
    ctx->pc = 0x11163cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    // 0x111640: 0xae2001b8  sw          $zero, 0x1B8($s1)
    ctx->pc = 0x111640u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 440), GPR_U32(ctx, 0));
    // 0x111644: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x111644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x111648: 0xae2001bc  sw          $zero, 0x1BC($s1)
    ctx->pc = 0x111648u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 444), GPR_U32(ctx, 0));
    // 0x11164c: 0xae2001c0  sw          $zero, 0x1C0($s1)
    ctx->pc = 0x11164cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 448), GPR_U32(ctx, 0));
    // 0x111650: 0xae2001c4  sw          $zero, 0x1C4($s1)
    ctx->pc = 0x111650u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 0));
    // 0x111654: 0xae2001c8  sw          $zero, 0x1C8($s1)
    ctx->pc = 0x111654u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 456), GPR_U32(ctx, 0));
    // 0x111658: 0xae2001cc  sw          $zero, 0x1CC($s1)
    ctx->pc = 0x111658u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 460), GPR_U32(ctx, 0));
    // 0x11165c: 0xae2001d0  sw          $zero, 0x1D0($s1)
    ctx->pc = 0x11165cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 464), GPR_U32(ctx, 0));
    // 0x111660: 0xae2001dc  sw          $zero, 0x1DC($s1)
    ctx->pc = 0x111660u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 476), GPR_U32(ctx, 0));
    // 0x111664: 0xae2001e0  sw          $zero, 0x1E0($s1)
    ctx->pc = 0x111664u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 0));
    // 0x111668: 0xae2001e4  sw          $zero, 0x1E4($s1)
    ctx->pc = 0x111668u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 484), GPR_U32(ctx, 0));
    // 0x11166c: 0xae2001e8  sw          $zero, 0x1E8($s1)
    ctx->pc = 0x11166cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 488), GPR_U32(ctx, 0));
    // 0x111670: 0xae2001ec  sw          $zero, 0x1EC($s1)
    ctx->pc = 0x111670u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 492), GPR_U32(ctx, 0));
    // 0x111674: 0xa22001f0  sb          $zero, 0x1F0($s1)
    ctx->pc = 0x111674u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 496), (uint8_t)GPR_U32(ctx, 0));
    // 0x111678: 0xae2001f8  sw          $zero, 0x1F8($s1)
    ctx->pc = 0x111678u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 504), GPR_U32(ctx, 0));
    // 0x11167c: 0xae2001fc  sw          $zero, 0x1FC($s1)
    ctx->pc = 0x11167cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 508), GPR_U32(ctx, 0));
    // 0x111680: 0xae200204  sw          $zero, 0x204($s1)
    ctx->pc = 0x111680u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 516), GPR_U32(ctx, 0));
    // 0x111684: 0xae200208  sw          $zero, 0x208($s1)
    ctx->pc = 0x111684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 520), GPR_U32(ctx, 0));
    // 0x111688: 0xae20020c  sw          $zero, 0x20C($s1)
    ctx->pc = 0x111688u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 524), GPR_U32(ctx, 0));
    // 0x11168c: 0xae200210  sw          $zero, 0x210($s1)
    ctx->pc = 0x11168cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 0));
    // 0x111690: 0xae200214  sw          $zero, 0x214($s1)
    ctx->pc = 0x111690u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
    // 0x111694: 0xae200218  sw          $zero, 0x218($s1)
    ctx->pc = 0x111694u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 536), GPR_U32(ctx, 0));
    // 0x111698: 0xae20021c  sw          $zero, 0x21C($s1)
    ctx->pc = 0x111698u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 540), GPR_U32(ctx, 0));
    // 0x11169c: 0xae200220  sw          $zero, 0x220($s1)
    ctx->pc = 0x11169cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 544), GPR_U32(ctx, 0));
    // 0x1116a0: 0xae200224  sw          $zero, 0x224($s1)
    ctx->pc = 0x1116a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 548), GPR_U32(ctx, 0));
    // 0x1116a4: 0xe6200228  swc1        $f0, 0x228($s1)
    ctx->pc = 0x1116a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 552), bits); }
    // 0x1116a8: 0xe620022c  swc1        $f0, 0x22C($s1)
    ctx->pc = 0x1116a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 556), bits); }
    // 0x1116ac: 0xa2200234  sb          $zero, 0x234($s1)
    ctx->pc = 0x1116acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 564), (uint8_t)GPR_U32(ctx, 0));
    // 0x1116b0: 0xae200238  sw          $zero, 0x238($s1)
    ctx->pc = 0x1116b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 568), GPR_U32(ctx, 0));
    // 0x1116b4: 0xae20027c  sw          $zero, 0x27C($s1)
    ctx->pc = 0x1116b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 636), GPR_U32(ctx, 0));
    // 0x1116b8: 0xae200280  sw          $zero, 0x280($s1)
    ctx->pc = 0x1116b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 640), GPR_U32(ctx, 0));
    // 0x1116bc: 0xae20023c  sw          $zero, 0x23C($s1)
    ctx->pc = 0x1116bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 572), GPR_U32(ctx, 0));
    // 0x1116c0: 0xa22200ac  sb          $v0, 0xAC($s1)
    ctx->pc = 0x1116c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 172), (uint8_t)GPR_U32(ctx, 2));
    // 0x1116c4: 0xae240298  sw          $a0, 0x298($s1)
    ctx->pc = 0x1116c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 664), GPR_U32(ctx, 4));
    // 0x1116c8: 0xae2302b0  sw          $v1, 0x2B0($s1)
    ctx->pc = 0x1116c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 688), GPR_U32(ctx, 3));
    // 0x1116cc: 0xae200240  sw          $zero, 0x240($s1)
    ctx->pc = 0x1116ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 576), GPR_U32(ctx, 0));
    // 0x1116d0: 0xae200248  sw          $zero, 0x248($s1)
    ctx->pc = 0x1116d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 584), GPR_U32(ctx, 0));
    // 0x1116d4: 0xae20024c  sw          $zero, 0x24C($s1)
    ctx->pc = 0x1116d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 588), GPR_U32(ctx, 0));
    // 0x1116d8: 0xae200250  sw          $zero, 0x250($s1)
    ctx->pc = 0x1116d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 0));
    // 0x1116dc: 0xae200284  sw          $zero, 0x284($s1)
    ctx->pc = 0x1116dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 644), GPR_U32(ctx, 0));
    // 0x1116e0: 0xae200288  sw          $zero, 0x288($s1)
    ctx->pc = 0x1116e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 648), GPR_U32(ctx, 0));
    // 0x1116e4: 0xae20028c  sw          $zero, 0x28C($s1)
    ctx->pc = 0x1116e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 652), GPR_U32(ctx, 0));
    // 0x1116e8: 0xae200254  sw          $zero, 0x254($s1)
    ctx->pc = 0x1116e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 0));
    // 0x1116ec: 0xae200258  sw          $zero, 0x258($s1)
    ctx->pc = 0x1116ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 0));
    // 0x1116f0: 0xae20025c  sw          $zero, 0x25C($s1)
    ctx->pc = 0x1116f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 604), GPR_U32(ctx, 0));
    // 0x1116f4: 0xae200260  sw          $zero, 0x260($s1)
    ctx->pc = 0x1116f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 0));
    // 0x1116f8: 0xae200264  sw          $zero, 0x264($s1)
    ctx->pc = 0x1116f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 0));
    // 0x1116fc: 0xae200268  sw          $zero, 0x268($s1)
    ctx->pc = 0x1116fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 616), GPR_U32(ctx, 0));
    // 0x111700: 0xae200290  sw          $zero, 0x290($s1)
    ctx->pc = 0x111700u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 656), GPR_U32(ctx, 0));
    // 0x111704: 0xae200294  sw          $zero, 0x294($s1)
    ctx->pc = 0x111704u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 660), GPR_U32(ctx, 0));
    // 0x111708: 0xae20029c  sw          $zero, 0x29C($s1)
    ctx->pc = 0x111708u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 668), GPR_U32(ctx, 0));
    // 0x11170c: 0xae2000a8  sw          $zero, 0xA8($s1)
    ctx->pc = 0x11170cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
    // 0x111710: 0xae2002a0  sw          $zero, 0x2A0($s1)
    ctx->pc = 0x111710u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 672), GPR_U32(ctx, 0));
    // 0x111714: 0xae2002a4  sw          $zero, 0x2A4($s1)
    ctx->pc = 0x111714u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 676), GPR_U32(ctx, 0));
    // 0x111718: 0xae2002ac  sw          $zero, 0x2AC($s1)
    ctx->pc = 0x111718u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 684), GPR_U32(ctx, 0));
    // 0x11171c: 0xae2002a8  sw          $zero, 0x2A8($s1)
    ctx->pc = 0x11171cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 680), GPR_U32(ctx, 0));
    // 0x111720: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x111720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_111724:
    // 0x111724: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x111724u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x111728: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x111728u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11172c: 0x3e00008  jr          $ra
    ctx->pc = 0x11172Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11172Cu;
        // 0x111730: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11172Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111734u;
    // 0x111734: 0x0  nop
    ctx->pc = 0x111734u;
    // NOP
    ctx->pc = 0x111738u;
}
