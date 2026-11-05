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

// Function: sub_00298030
// Address: 0x298030 - 0x298248
void sub_00298030_0x298030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298030_0x298030");
#endif

    switch (ctx->pc) {
        case 0x298064u: goto label_298064;
        case 0x298094u: goto label_298094;
        case 0x2980a4u: goto label_2980a4;
        case 0x2980d4u: goto label_2980d4;
        case 0x2980e4u: goto label_2980e4;
        case 0x2980f4u: goto label_2980f4;
        case 0x29811cu: goto label_29811c;
        case 0x298138u: goto label_298138;
        case 0x298174u: goto label_298174;
        case 0x298184u: goto label_298184;
        case 0x2981a0u: goto label_2981a0;
        case 0x29820cu: goto label_29820c;
        case 0x29822cu: goto label_29822c;
        default: break;
    }

    ctx->pc = 0x298030u;

    // 0x298030: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x298030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x298034: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x298034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x298038: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x298038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x29803c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29803cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x298040: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x298040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298044: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x298044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x298048: 0x2452ac80  addiu       $s2, $v0, -0x5380
    ctx->pc = 0x298048u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945920));
    // 0x29804c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x29804cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x298050: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x298050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298054: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x298054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x298058: 0x24130110  addiu       $s3, $zero, 0x110
    ctx->pc = 0x298058u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x29805c: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x29805Cu;
    SET_GPR_U32(ctx, 31, 0x298064u);
    ctx->pc = 0x298060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29805Cu;
    // 0x298060: 0x8e300078  lw          $s0, 0x78($s1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x29805Cu, 0x298064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298064u;
label_298064:
    // 0x298064: 0x2138018  mult        $s0, $s0, $s3
    ctx->pc = 0x298064u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x298068: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x298068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29806c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x29806cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x298070: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x298070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x298074: 0x54640009  bnel        $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x298074u;
    {
        const bool branch_taken_0x298074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x298074) {
            ctx->pc = 0x298078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298074u;
            // 0x298078: 0x8e300078  lw          $s0, 0x78($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29809Cu;
            goto label_29809c;
        }
    }
    ctx->pc = 0x29807Cu;
    // 0x29807c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x29807cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x298080: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x298080u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x298084: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x298084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x298088: 0x24a5bd38  addiu       $a1, $a1, -0x42C8
    ctx->pc = 0x298088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950200));
    // 0x29808c: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x29808Cu;
    SET_GPR_U32(ctx, 31, 0x298094u);
    ctx->pc = 0x298090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29808Cu;
    // 0x298090: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x29808Cu, 0x298094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298094u;
label_298094:
    // 0x298094: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x298094u;
    {
        const bool branch_taken_0x298094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298094u;
        // 0x298098: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298094) {
            ctx->pc = 0x2980F8u;
            goto label_2980f8;
        }
    }
    ctx->pc = 0x29809Cu;
label_29809c:
    // 0x29809c: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x29809Cu;
    SET_GPR_U32(ctx, 31, 0x2980A4u);
    ctx->pc = 0x2980A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29809Cu;
    // 0x2980a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x29809Cu, 0x2980A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2980A4u;
label_2980a4:
    // 0x2980a4: 0x2138018  mult        $s0, $s0, $s3
    ctx->pc = 0x2980a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2980a8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2980a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2980ac: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x2980acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2980b0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2980b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2980b4: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2980B4u;
    {
        const bool branch_taken_0x2980b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2980b4) {
            ctx->pc = 0x2980B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2980B4u;
            // 0x2980b8: 0x8e250078  lw          $a1, 0x78($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2980DCu;
            goto label_2980dc;
        }
    }
    ctx->pc = 0x2980BCu;
    // 0x2980bc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2980bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2980c0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2980c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2980c4: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x2980c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x2980c8: 0x24a5bd40  addiu       $a1, $a1, -0x42C0
    ctx->pc = 0x2980c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950208));
    // 0x2980cc: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x2980CCu;
    SET_GPR_U32(ctx, 31, 0x2980D4u);
    ctx->pc = 0x2980D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2980CCu;
    // 0x2980d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x2980CCu, 0x2980D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2980D4u;
label_2980d4:
    // 0x2980d4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2980D4u;
    {
        const bool branch_taken_0x2980d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2980D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2980D4u;
        // 0x2980d8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2980d4) {
            ctx->pc = 0x2980F8u;
            goto label_2980f8;
        }
    }
    ctx->pc = 0x2980DCu;
label_2980dc:
    // 0x2980dc: 0xc0ad86c  jal         func_2B61B0
    ctx->pc = 0x2980DCu;
    SET_GPR_U32(ctx, 31, 0x2980E4u);
    ctx->pc = 0x2980E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2980DCu;
    // 0x2980e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61B0u, 0x2980DCu, 0x2980E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2980E4u;
label_2980e4:
    // 0x2980e4: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x2980e4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2980e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2980e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2980ec: 0xc0a1a5e  jal         func_286978
    ctx->pc = 0x2980ECu;
    SET_GPR_U32(ctx, 31, 0x2980F4u);
    ctx->pc = 0x2980F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2980ECu;
    // 0x2980f0: 0x43200b  movn        $a0, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286978u, 0x2980ECu, 0x2980F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2980F4u;
label_2980f4:
    // 0x2980f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2980f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2980f8:
    // 0x2980f8: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x2980f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2980fc: 0xc6230028  lwc1        $f3, 0x28($s1)
    ctx->pc = 0x2980fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x298100: 0xc620001c  lwc1        $f0, 0x1C($s1)
    ctx->pc = 0x298100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x298104: 0xc622002c  lwc1        $f2, 0x2C($s1)
    ctx->pc = 0x298104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x298108: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x298108u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x29810c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x29810cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x298110: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x298110u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x298114: 0xc0a0340  jal         func_280D00
    ctx->pc = 0x298114u;
    SET_GPR_U32(ctx, 31, 0x29811Cu);
    ctx->pc = 0x298118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298114u;
    // 0x298118: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x280D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280D00u, 0x298114u, 0x29811Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29811Cu;
label_29811c:
    // 0x29811c: 0x92230060  lbu         $v1, 0x60($s1)
    ctx->pc = 0x29811cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x298120: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x298120u;
    {
        const bool branch_taken_0x298120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x298124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298120u;
        // 0x298124: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298120) {
            ctx->pc = 0x29817Cu;
            goto label_29817c;
        }
    }
    ctx->pc = 0x298128u;
    // 0x298128: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x298128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29812c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29812cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298130: 0xc0a17c6  jal         func_285F18
    ctx->pc = 0x298130u;
    SET_GPR_U32(ctx, 31, 0x298138u);
    ctx->pc = 0x298134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298130u;
    // 0x298134: 0x240700ff  addiu       $a3, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F18u, 0x298130u, 0x298138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298138u;
label_298138:
    // 0x298138: 0x9222006e  lbu         $v0, 0x6E($s1)
    ctx->pc = 0x298138u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 110)));
    // 0x29813c: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x29813Cu;
    {
        const bool branch_taken_0x29813c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29813Cu;
        // 0x298140: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29813c) {
            ctx->pc = 0x29820Cu;
            goto label_29820c;
        }
    }
    ctx->pc = 0x298144u;
    // 0x298144: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x298144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298148: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x298148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x29814c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29814cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298150: 0xc62e0020  lwc1        $f14, 0x20($s1)
    ctx->pc = 0x298150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x298154: 0xc62f0024  lwc1        $f15, 0x24($s1)
    ctx->pc = 0x298154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x298158: 0x92260068  lbu         $a2, 0x68($s1)
    ctx->pc = 0x298158u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x29815c: 0x92270069  lbu         $a3, 0x69($s1)
    ctx->pc = 0x29815cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 105)));
    // 0x298160: 0x9228006a  lbu         $t0, 0x6A($s1)
    ctx->pc = 0x298160u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 106)));
    // 0x298164: 0x9229006b  lbu         $t1, 0x6B($s1)
    ctx->pc = 0x298164u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 107)));
    // 0x298168: 0x8e2a0010  lw          $t2, 0x10($s1)
    ctx->pc = 0x298168u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x29816c: 0xc0a5976  jal         func_2965D8
    ctx->pc = 0x29816Cu;
    SET_GPR_U32(ctx, 31, 0x298174u);
    ctx->pc = 0x298170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29816Cu;
    // 0x298170: 0x8e2b0064  lw          $t3, 0x64($s1) (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2965D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2965D8u, 0x29816Cu, 0x298174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298174u;
label_298174:
    // 0x298174: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x298174u;
    {
        const bool branch_taken_0x298174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298174u;
        // 0x298178: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298174) {
            ctx->pc = 0x298210u;
            goto label_298210;
        }
    }
    ctx->pc = 0x29817Cu;
label_29817c:
    // 0x29817c: 0xc0a5b3c  jal         func_296CF0
    ctx->pc = 0x29817Cu;
    SET_GPR_U32(ctx, 31, 0x298184u);
    ctx->pc = 0x298180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29817Cu;
    // 0x298180: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CF0u, 0x29817Cu, 0x298184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298184u;
label_298184:
    // 0x298184: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x298184u;
    {
        const bool branch_taken_0x298184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x298184) {
            ctx->pc = 0x298188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298184u;
            // 0x298188: 0x92220014  lbu         $v0, 0x14($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2981A8u;
            goto label_2981a8;
        }
    }
    ctx->pc = 0x29818Cu;
    // 0x29818c: 0x92240014  lbu         $a0, 0x14($s1)
    ctx->pc = 0x29818cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x298190: 0x92250015  lbu         $a1, 0x15($s1)
    ctx->pc = 0x298190u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 21)));
    // 0x298194: 0x92260016  lbu         $a2, 0x16($s1)
    ctx->pc = 0x298194u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x298198: 0xc0a17c6  jal         func_285F18
    ctx->pc = 0x298198u;
    SET_GPR_U32(ctx, 31, 0x2981A0u);
    ctx->pc = 0x29819Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298198u;
    // 0x29819c: 0x92270017  lbu         $a3, 0x17($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F18u, 0x298198u, 0x2981A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2981A0u;
label_2981a0:
    // 0x2981a0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2981A0u;
    {
        const bool branch_taken_0x2981a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2981A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2981A0u;
        // 0x2981a4: 0x8e250010  lw          $a1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2981a0) {
            ctx->pc = 0x298210u;
            goto label_298210;
        }
    }
    ctx->pc = 0x2981A8u;
label_2981a8:
    // 0x2981a8: 0x92240016  lbu         $a0, 0x16($s1)
    ctx->pc = 0x2981a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 22)));
    // 0x2981ac: 0x92230015  lbu         $v1, 0x15($s1)
    ctx->pc = 0x2981acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 21)));
    // 0x2981b0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2981b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2981b4: 0x0  nop
    ctx->pc = 0x2981b4u;
    // NOP
    // 0x2981b8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2981b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2981bc: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2981bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2981c0: 0x0  nop
    ctx->pc = 0x2981c0u;
    // NOP
    // 0x2981c4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2981c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2981c8: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2981c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x2981cc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2981ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2981d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2981d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2981d4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2981d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2981d8: 0x0  nop
    ctx->pc = 0x2981d8u;
    // NOP
    // 0x2981dc: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2981dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2981e0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2981e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2981e4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2981e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2981e8: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2981e8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2981ec: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2981ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2981f0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2981f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2981f4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2981f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2981f8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x2981f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x2981fc: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2981fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x298200: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x298200u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x298204: 0xc0a17c6  jal         func_285F18
    ctx->pc = 0x298204u;
    SET_GPR_U32(ctx, 31, 0x29820Cu);
    ctx->pc = 0x298208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298204u;
    // 0x298208: 0x92270017  lbu         $a3, 0x17($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 23)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285F18u, 0x298204u, 0x29820Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29820Cu;
label_29820c:
    // 0x29820c: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x29820cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_298210:
    // 0x298210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298214: 0xc62e0020  lwc1        $f14, 0x20($s1)
    ctx->pc = 0x298214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x298218: 0xc62f0024  lwc1        $f15, 0x24($s1)
    ctx->pc = 0x298218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x29821c: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x29821cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x298220: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x298220u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x298224: 0xc09f662  jal         func_27D988
    ctx->pc = 0x298224u;
    SET_GPR_U32(ctx, 31, 0x29822Cu);
    ctx->pc = 0x298228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298224u;
    // 0x298228: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D988u, 0x298224u, 0x29822Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29822Cu;
label_29822c:
    // 0x29822c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x29822cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298230: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x298230u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x298234: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x298234u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298238: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x298238u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x29823c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29823cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x298240: 0x3e00008  jr          $ra
    ctx->pc = 0x298240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298240u;
        // 0x298244: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298248u;
}
