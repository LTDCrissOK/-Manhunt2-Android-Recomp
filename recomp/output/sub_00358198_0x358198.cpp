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

// Function: sub_00358198
// Address: 0x358198 - 0x3582c0
void sub_00358198_0x358198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358198_0x358198");
#endif

    switch (ctx->pc) {
        case 0x3581b0u: goto label_3581b0;
        case 0x3581c0u: goto label_3581c0;
        case 0x3581ecu: goto label_3581ec;
        case 0x358280u: goto label_358280;
        case 0x3582b0u: goto label_3582b0;
        default: break;
    }

    ctx->pc = 0x358198u;

    // 0x358198: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x358198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35819c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x35819cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3581a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3581a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3581a4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3581a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3581a8: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x3581A8u;
    SET_GPR_U32(ctx, 31, 0x3581B0u);
    ctx->pc = 0x3581ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3581A8u;
    // 0x3581ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x3581A8u, 0x3581B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3581B0u;
label_3581b0:
    // 0x3581b0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3581b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x3581b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3581b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3581b8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x3581B8u;
    SET_GPR_U32(ctx, 31, 0x3581C0u);
    ctx->pc = 0x3581BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3581B8u;
    // 0x3581bc: 0x24a56b38  addiu       $a1, $a1, 0x6B38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x3581B8u, 0x3581C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3581C0u;
label_3581c0:
    // 0x3581c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3581c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3581c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3581C4u;
    {
        const bool branch_taken_0x3581c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3581C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3581C4u;
        // 0x3581c8: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3581c4) {
            ctx->pc = 0x3581E0u;
            goto label_3581e0;
        }
    }
    ctx->pc = 0x3581CCu;
    // 0x3581cc: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x3581ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3581d0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3581D0u;
    {
        const bool branch_taken_0x3581d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3581d0) {
            ctx->pc = 0x3581D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3581D0u;
            // 0x3581d4: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3581D8u;
            goto label_3581d8;
        }
    }
    ctx->pc = 0x3581D8u;
label_3581d8:
    // 0x3581d8: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x3581D8u;
    {
        const bool branch_taken_0x3581d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3581DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3581D8u;
        // 0x3581dc: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3581d8) {
            ctx->pc = 0x3582A4u;
            goto label_3582a4;
        }
    }
    ctx->pc = 0x3581E0u;
label_3581e0:
    // 0x3581e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3581e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3581e4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x3581E4u;
    SET_GPR_U32(ctx, 31, 0x3581ECu);
    ctx->pc = 0x3581E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3581E4u;
    // 0x3581e8: 0x24a56b40  addiu       $a1, $a1, 0x6B40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x3581E4u, 0x3581ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3581ECu;
label_3581ec:
    // 0x3581ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3581ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3581f0: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x3581F0u;
    {
        const bool branch_taken_0x3581f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3581f0) {
            ctx->pc = 0x3581F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3581F0u;
            // 0x3581f4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x358274u;
            goto label_358274;
        }
    }
    ctx->pc = 0x3581F8u;
    // 0x3581f8: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x3581f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x3581fc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3581FCu;
    {
        const bool branch_taken_0x3581fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x358200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3581FCu;
        // 0x358200: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3581fc) {
            ctx->pc = 0x358208u;
            goto label_358208;
        }
    }
    ctx->pc = 0x358204u;
    // 0x358204: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x358204u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_358208:
    // 0x358208: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x358208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35820c: 0x26030040  addiu       $v1, $s0, 0x40
    ctx->pc = 0x35820cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x358210: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x358210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x358214: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x358214u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x358218: 0xfa010050  sqc2        $vf1, 0x50($s0)
    ctx->pc = 0x358218u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x35821c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x35821cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x358220: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x358220u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x358224: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x358224u;
    {
        const bool branch_taken_0x358224 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x358228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358224u;
        // 0x358228: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358224) {
            ctx->pc = 0x358240u;
            goto label_358240;
        }
    }
    ctx->pc = 0x35822Cu;
    // 0x35822c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x35822cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x358230: 0x0  nop
    ctx->pc = 0x358230u;
    // NOP
    // 0x358234: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x358234u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x358238: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x358238u;
    {
        const bool branch_taken_0x358238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358238) {
            ctx->pc = 0x358258u;
            goto label_358258;
        }
    }
    ctx->pc = 0x358240u;
label_358240:
    // 0x358240: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x358240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x358244: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x358244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x358248: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x358248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35824c: 0x0  nop
    ctx->pc = 0x35824cu;
    // NOP
    // 0x358250: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x358250u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x358254: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x358254u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_358258:
    // 0x358258: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x358258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x35825c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x35825cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x358260: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x358260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x358264: 0x0  nop
    ctx->pc = 0x358264u;
    // NOP
    // 0x358268: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x358268u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x35826c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x35826Cu;
    {
        const bool branch_taken_0x35826c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35826Cu;
        // 0x358270: 0xe600003c  swc1        $f0, 0x3C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35826c) {
            ctx->pc = 0x3582A4u;
            goto label_3582a4;
        }
    }
    ctx->pc = 0x358274u;
label_358274:
    // 0x358274: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x358274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358278: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x358278u;
    SET_GPR_U32(ctx, 31, 0x358280u);
    ctx->pc = 0x35827Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358278u;
    // 0x35827c: 0x24a56b48  addiu       $a1, $a1, 0x6B48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x358278u, 0x358280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358280u;
label_358280:
    // 0x358280: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x358280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x358284: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x358284u;
    {
        const bool branch_taken_0x358284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x358288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358284u;
        // 0x358288: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358284) {
            ctx->pc = 0x3582A8u;
            goto label_3582a8;
        }
    }
    ctx->pc = 0x35828Cu;
    // 0x35828c: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x35828cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x358290: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x358290u;
    {
        const bool branch_taken_0x358290 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x358294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358290u;
        // 0x358294: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358290) {
            ctx->pc = 0x35829Cu;
            goto label_35829c;
        }
    }
    ctx->pc = 0x358298u;
    // 0x358298: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x358298u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_35829c:
    // 0x35829c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x35829cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3582a0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3582a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3582a4:
    // 0x3582a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3582a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3582a8:
    // 0x3582a8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x3582A8u;
    SET_GPR_U32(ctx, 31, 0x3582B0u);
    ctx->pc = 0x3582ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3582A8u;
    // 0x3582ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x3582A8u, 0x3582B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3582B0u;
label_3582b0:
    // 0x3582b0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3582b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3582b4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3582b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3582b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3582B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3582BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3582B8u;
        // 0x3582bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3582B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3582C0u;
}
