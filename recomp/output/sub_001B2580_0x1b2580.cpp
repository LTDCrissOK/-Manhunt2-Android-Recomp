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

// Function: sub_001B2580
// Address: 0x1b2580 - 0x1b26e8
void sub_001B2580_0x1b2580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2580_0x1b2580");
#endif

    switch (ctx->pc) {
        case 0x1b25a4u: goto label_1b25a4;
        case 0x1b25d0u: goto label_1b25d0;
        case 0x1b2600u: goto label_1b2600;
        case 0x1b2634u: goto label_1b2634;
        case 0x1b2654u: goto label_1b2654;
        default: break;
    }

    ctx->pc = 0x1b2580u;

    // 0x1b2580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b2580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b2584: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b2584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b2588: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b2588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b258c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b258cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2590: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b2590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b2594: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1b2594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1b2598: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x1b2598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x1b259c: 0xc06c6a2  jal         func_1B1A88
    ctx->pc = 0x1B259Cu;
    SET_GPR_U32(ctx, 31, 0x1B25A4u);
    ctx->pc = 0x1B25A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B259Cu;
    // 0x1b25a0: 0x8c520110  lw          $s2, 0x110($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1A88u, 0x1B259Cu, 0x1B25A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B25A4u;
label_1b25a4:
    // 0x1b25a4: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x1b25a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x1b25a8: 0x5440002f  bnel        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x1B25A8u;
    {
        const bool branch_taken_0x1b25a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b25a8) {
            ctx->pc = 0x1B25ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B25A8u;
            // 0x1b25ac: 0x8e2300a0  lw          $v1, 0xA0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2668u;
            goto label_1b2668;
        }
    }
    ctx->pc = 0x1B25B0u;
    // 0x1b25b0: 0x8e2500a0  lw          $a1, 0xA0($s1)
    ctx->pc = 0x1b25b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x1b25b4: 0x94a2002a  lhu         $v0, 0x2A($a1)
    ctx->pc = 0x1b25b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 42)));
    // 0x1b25b8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b25b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b25bc: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x1B25BCu;
    {
        const bool branch_taken_0x1b25bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b25bc) {
            ctx->pc = 0x1B25C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B25BCu;
            // 0x1b25c0: 0x8e2300a0  lw          $v1, 0xA0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2668u;
            goto label_1b2668;
        }
    }
    ctx->pc = 0x1B25C4u;
    // 0x1b25c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b25c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b25c8: 0xc07574a  jal         func_1D5D28
    ctx->pc = 0x1B25C8u;
    SET_GPR_U32(ctx, 31, 0x1B25D0u);
    ctx->pc = 0x1B25CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B25C8u;
    // 0x1b25cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D28u, 0x1B25C8u, 0x1B25D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B25D0u;
label_1b25d0:
    // 0x1b25d0: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x1b25d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x1b25d4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1b25d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1b25d8: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1B25D8u;
    {
        const bool branch_taken_0x1b25d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b25d8) {
            ctx->pc = 0x1B25DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B25D8u;
            // 0x1b25dc: 0x8e230088  lw          $v1, 0x88($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2608u;
            goto label_1b2608;
        }
    }
    ctx->pc = 0x1B25E0u;
    // 0x1b25e0: 0x8e2500a0  lw          $a1, 0xA0($s1)
    ctx->pc = 0x1b25e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x1b25e4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1b25e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1b25e8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1b25e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1b25ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b25ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b25f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b25f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b25f4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1b25f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b25f8: 0xc075752  jal         func_1D5D48
    ctx->pc = 0x1B25F8u;
    SET_GPR_U32(ctx, 31, 0x1B2600u);
    ctx->pc = 0x1B25FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B25F8u;
    // 0x1b25fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D48u, 0x1B25F8u, 0x1B2600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2600u;
label_1b2600:
    // 0x1b2600: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B2600u;
    {
        const bool branch_taken_0x1b2600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2600u;
        // 0x1b2604: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2600) {
            ctx->pc = 0x1B2634u;
            goto label_1b2634;
        }
    }
    ctx->pc = 0x1B2608u;
label_1b2608:
    // 0x1b2608: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1b2608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1b260c: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x1b260cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x1b2610: 0x8e2500a0  lw          $a1, 0xA0($s1)
    ctx->pc = 0x1b2610u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x1b2614: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1b2614u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b2618: 0x26028658  addiu       $v0, $s0, -0x79A8
    ctx->pc = 0x1b2618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936152));
    // 0x1b261c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b261cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b2620: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1b2620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b2624: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2628: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b2628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b262c: 0xc075752  jal         func_1D5D48
    ctx->pc = 0x1B262Cu;
    SET_GPR_U32(ctx, 31, 0x1B2634u);
    ctx->pc = 0x1B2630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B262Cu;
    // 0x1b2630: 0xc44c0004  lwc1        $f12, 0x4($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D48u, 0x1B262Cu, 0x1B2634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2634u;
label_1b2634:
    // 0x1b2634: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x1b2634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x1b2638: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1b2638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1b263c: 0x26028658  addiu       $v0, $s0, -0x79A8
    ctx->pc = 0x1b263cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936152));
    // 0x1b2640: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b2640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2644: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x1b2644u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b2648: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b2648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b264c: 0xc06c680  jal         func_1B1A00
    ctx->pc = 0x1B264Cu;
    SET_GPR_U32(ctx, 31, 0x1B2654u);
    ctx->pc = 0x1B2650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B264Cu;
    // 0x1b2650: 0xc44c0004  lwc1        $f12, 0x4($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1A00u, 0x1B264Cu, 0x1B2654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2654u;
label_1b2654:
    // 0x1b2654: 0x8e2300a0  lw          $v1, 0xA0($s1)
    ctx->pc = 0x1b2654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    // 0x1b2658: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x1b2658u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x1b265c: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x1b265cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
    // 0x1b2660: 0xa462002a  sh          $v0, 0x2A($v1)
    ctx->pc = 0x1b2660u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b2664: 0x8e2300a0  lw          $v1, 0xA0($s1)
    ctx->pc = 0x1b2664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_1b2668:
    // 0x1b2668: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x1b2668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x1b266c: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1b266cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x1b2670: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b2670u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b2674: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1b2674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2678: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b2678u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b267c: 0x0  nop
    ctx->pc = 0x1b267cu;
    // NOP
    // 0x1b2680: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1B2680u;
    {
        const bool branch_taken_0x1b2680 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B2684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2680u;
        // 0x1b2684: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2680) {
            ctx->pc = 0x1B26D0u;
            goto label_1b26d0;
        }
    }
    ctx->pc = 0x1B2688u;
    // 0x1b2688: 0x9464002a  lhu         $a0, 0x2A($v1)
    ctx->pc = 0x1b2688u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x1b268c: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x1b268cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x1b2690: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B2690u;
    {
        const bool branch_taken_0x1b2690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2690) {
            ctx->pc = 0x1B2694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2690u;
            // 0x1b2694: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B26D4u;
            goto label_1b26d4;
        }
    }
    ctx->pc = 0x1B2698u;
    // 0x1b2698: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x1b2698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b269c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1b269cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1b26a0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1b26a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1b26a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b26a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b26a8: 0x0  nop
    ctx->pc = 0x1b26a8u;
    // NOP
    // 0x1b26ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b26acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b26b0: 0x0  nop
    ctx->pc = 0x1b26b0u;
    // NOP
    // 0x1b26b4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1B26B4u;
    {
        const bool branch_taken_0x1b26b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B26B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26B4u;
        // 0x1b26b8: 0x34820002  ori         $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b26b4) {
            ctx->pc = 0x1B26C4u;
            goto label_1b26c4;
        }
    }
    ctx->pc = 0x1B26BCu;
    // 0x1b26bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B26BCu;
    {
        const bool branch_taken_0x1b26bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B26C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26BCu;
        // 0x1b26c0: 0xa462002a  sh          $v0, 0x2A($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b26bc) {
            ctx->pc = 0x1B26D0u;
            goto label_1b26d0;
        }
    }
    ctx->pc = 0x1B26C4u;
label_1b26c4:
    // 0x1b26c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b26c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b26c8: 0xae220098  sw          $v0, 0x98($s1)
    ctx->pc = 0x1b26c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 2));
    // 0x1b26cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b26ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b26d0:
    // 0x1b26d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b26d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b26d4:
    // 0x1b26d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b26d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b26d8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1b26d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b26dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B26DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B26E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B26DCu;
        // 0x1b26e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B26DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B26E4u;
    // 0x1b26e4: 0x0  nop
    ctx->pc = 0x1b26e4u;
    // NOP
    ctx->pc = 0x1b26e8u;
}
