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

// Function: sub_001B2428
// Address: 0x1b2428 - 0x1b2580
void sub_001B2428_0x1b2428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2428_0x1b2428");
#endif

    switch (ctx->pc) {
        case 0x1b2450u: goto label_1b2450;
        case 0x1b2480u: goto label_1b2480;
        case 0x1b24b0u: goto label_1b24b0;
        case 0x1b24c8u: goto label_1b24c8;
        case 0x1b24dcu: goto label_1b24dc;
        case 0x1b24ecu: goto label_1b24ec;
        default: break;
    }

    ctx->pc = 0x1b2428u;

    // 0x1b2428: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b2428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b242c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b242cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b2430: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b2430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b2434: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b2434u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2438: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b2438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b243c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b243cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b2440: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b2440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b2444: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x1b2444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x1b2448: 0xc06c6a2  jal         func_1B1A88
    ctx->pc = 0x1B2448u;
    SET_GPR_U32(ctx, 31, 0x1B2450u);
    ctx->pc = 0x1B244Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2448u;
    // 0x1b244c: 0x8c530110  lw          $s3, 0x110($v0) (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1A88u, 0x1B2448u, 0x1B2450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2450u;
label_1b2450:
    // 0x1b2450: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x1b2450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x1b2454: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x1B2454u;
    {
        const bool branch_taken_0x1b2454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2454) {
            ctx->pc = 0x1B2458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2454u;
            // 0x1b2458: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2500u;
            goto label_1b2500;
        }
    }
    ctx->pc = 0x1B245Cu;
    // 0x1b245c: 0x8e4500a0  lw          $a1, 0xA0($s2)
    ctx->pc = 0x1b245cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x1b2460: 0x94a2002a  lhu         $v0, 0x2A($a1)
    ctx->pc = 0x1b2460u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 42)));
    // 0x1b2464: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b2464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1b2468: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x1B2468u;
    {
        const bool branch_taken_0x1b2468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2468) {
            ctx->pc = 0x1B246Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2468u;
            // 0x1b246c: 0x8e4300a0  lw          $v1, 0xA0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2500u;
            goto label_1b2500;
        }
    }
    ctx->pc = 0x1B2470u;
    // 0x1b2470: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1b2470u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b2474: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b2474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2478: 0xc07574a  jal         func_1D5D28
    ctx->pc = 0x1B2478u;
    SET_GPR_U32(ctx, 31, 0x1B2480u);
    ctx->pc = 0x1B247Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2478u;
    // 0x1b247c: 0x24110018  addiu       $s1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D28u, 0x1B2478u, 0x1B2480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2480u;
label_1b2480:
    // 0x1b2480: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x1b2480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x1b2484: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x1b2484u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x1b2488: 0x26108658  addiu       $s0, $s0, -0x79A8
    ctx->pc = 0x1b2488u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936152));
    // 0x1b248c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b248cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b2490: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1b2490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b2494: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x1b2494u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1b2498: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1b2498u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1b249c: 0x8e4500a0  lw          $a1, 0xA0($s2)
    ctx->pc = 0x1b249cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x1b24a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1b24a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b24a4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1b24a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b24a8: 0xc075752  jal         func_1D5D48
    ctx->pc = 0x1B24A8u;
    SET_GPR_U32(ctx, 31, 0x1B24B0u);
    ctx->pc = 0x1B24ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B24A8u;
    // 0x1b24ac: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D48u, 0x1B24A8u, 0x1B24B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B24B0u;
label_1b24b0:
    // 0x1b24b0: 0x8e420088  lw          $v0, 0x88($s2)
    ctx->pc = 0x1b24b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x1b24b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b24b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b24b8: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x1b24b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1b24bc: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x1b24bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1b24c0: 0xc06c680  jal         func_1B1A00
    ctx->pc = 0x1B24C0u;
    SET_GPR_U32(ctx, 31, 0x1B24C8u);
    ctx->pc = 0x1B24C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B24C0u;
    // 0x1b24c4: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1A00u, 0x1B24C0u, 0x1B24C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B24C8u;
label_1b24c8:
    // 0x1b24c8: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x1b24c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x1b24cc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1b24ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1b24d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b24d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1b24d4: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x1B24D4u;
    SET_GPR_U32(ctx, 31, 0x1B24DCu);
    ctx->pc = 0x1B24D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B24D4u;
    // 0x1b24d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x1B24D4u, 0x1B24DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B24DCu;
label_1b24dc:
    // 0x1b24dc: 0x8e4400a0  lw          $a0, 0xA0($s2)
    ctx->pc = 0x1b24dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x1b24e0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1b24e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1b24e4: 0xc073e86  jal         func_1CFA18
    ctx->pc = 0x1B24E4u;
    SET_GPR_U32(ctx, 31, 0x1B24ECu);
    ctx->pc = 0x1B24E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B24E4u;
    // 0x1b24e8: 0xc44c0010  lwc1        $f12, 0x10($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x1B24E4u, 0x1B24ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B24ECu;
label_1b24ec:
    // 0x1b24ec: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x1b24ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x1b24f0: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x1b24f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x1b24f4: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x1b24f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
    // 0x1b24f8: 0xa462002a  sh          $v0, 0x2A($v1)
    ctx->pc = 0x1b24f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b24fc: 0x8e4300a0  lw          $v1, 0xA0($s2)
    ctx->pc = 0x1b24fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_1b2500:
    // 0x1b2500: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x1b2500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x1b2504: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1b2504u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x1b2508: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1b2508u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b250c: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x1b250cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2510: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b2510u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2514: 0x0  nop
    ctx->pc = 0x1b2514u;
    // NOP
    // 0x1b2518: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x1B2518u;
    {
        const bool branch_taken_0x1b2518 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B251Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2518u;
        // 0x1b251c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2518) {
            ctx->pc = 0x1B2568u;
            goto label_1b2568;
        }
    }
    ctx->pc = 0x1B2520u;
    // 0x1b2520: 0x9464002a  lhu         $a0, 0x2A($v1)
    ctx->pc = 0x1b2520u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x1b2524: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x1b2524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x1b2528: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B2528u;
    {
        const bool branch_taken_0x1b2528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2528u;
        // 0x1b252c: 0xdfb10008  ld          $s1, 0x8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2528) {
            ctx->pc = 0x1B256Cu;
            goto label_1b256c;
        }
    }
    ctx->pc = 0x1B2530u;
    // 0x1b2530: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x1b2530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b2534: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x1b2534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1b2538: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1b2538u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1b253c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b253cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2540: 0x0  nop
    ctx->pc = 0x1b2540u;
    // NOP
    // 0x1b2544: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b2544u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2548: 0x0  nop
    ctx->pc = 0x1b2548u;
    // NOP
    // 0x1b254c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1B254Cu;
    {
        const bool branch_taken_0x1b254c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B2550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B254Cu;
        // 0x1b2550: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b254c) {
            ctx->pc = 0x1B255Cu;
            goto label_1b255c;
        }
    }
    ctx->pc = 0x1B2554u;
    // 0x1b2554: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2554u;
    {
        const bool branch_taken_0x1b2554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2554u;
        // 0x1b2558: 0xae420098  sw          $v0, 0x98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2554) {
            ctx->pc = 0x1B256Cu;
            goto label_1b256c;
        }
    }
    ctx->pc = 0x1B255Cu;
label_1b255c:
    // 0x1b255c: 0x34820002  ori         $v0, $a0, 0x2
    ctx->pc = 0x1b255cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x1b2560: 0xa462002a  sh          $v0, 0x2A($v1)
    ctx->pc = 0x1b2560u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x1b2564: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2564u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b2568:
    // 0x1b2568: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b2568u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1b256c:
    // 0x1b256c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b256cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b2570: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b2570u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b2574: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b2574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2578: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B257Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2578u;
        // 0x1b257c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2580u;
}
