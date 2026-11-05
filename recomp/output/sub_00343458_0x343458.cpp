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

// Function: sub_00343458
// Address: 0x343458 - 0x343fb0
void sub_00343458_0x343458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00343458_0x343458");
#endif

    switch (ctx->pc) {
        case 0x343494u: goto label_343494;
        case 0x3435d4u: goto label_3435d4;
        case 0x3435e8u: goto label_3435e8;
        case 0x343600u: goto label_343600;
        case 0x34363cu: goto label_34363c;
        case 0x343650u: goto label_343650;
        case 0x343664u: goto label_343664;
        case 0x343670u: goto label_343670;
        case 0x34367cu: goto label_34367c;
        case 0x34368cu: goto label_34368c;
        case 0x343698u: goto label_343698;
        case 0x3436a4u: goto label_3436a4;
        case 0x3436b8u: goto label_3436b8;
        case 0x3436c8u: goto label_3436c8;
        case 0x3436d4u: goto label_3436d4;
        case 0x3436e8u: goto label_3436e8;
        case 0x3437c4u: goto label_3437c4;
        case 0x3437d0u: goto label_3437d0;
        case 0x343854u: goto label_343854;
        case 0x34386cu: goto label_34386c;
        case 0x3438ecu: goto label_3438ec;
        case 0x3438f8u: goto label_3438f8;
        case 0x343944u: goto label_343944;
        case 0x343968u: goto label_343968;
        case 0x343994u: goto label_343994;
        case 0x3439b8u: goto label_3439b8;
        case 0x3439ccu: goto label_3439cc;
        case 0x343a00u: goto label_343a00;
        case 0x343a0cu: goto label_343a0c;
        case 0x343a1cu: goto label_343a1c;
        case 0x343a28u: goto label_343a28;
        case 0x343a80u: goto label_343a80;
        case 0x343a8cu: goto label_343a8c;
        case 0x343b68u: goto label_343b68;
        case 0x343b74u: goto label_343b74;
        case 0x343b88u: goto label_343b88;
        case 0x343b90u: goto label_343b90;
        case 0x343ba0u: goto label_343ba0;
        case 0x343c84u: goto label_343c84;
        case 0x343c98u: goto label_343c98;
        case 0x343cb4u: goto label_343cb4;
        case 0x343cc0u: goto label_343cc0;
        case 0x343cccu: goto label_343ccc;
        case 0x343d0cu: goto label_343d0c;
        case 0x343d18u: goto label_343d18;
        case 0x343d24u: goto label_343d24;
        case 0x343db4u: goto label_343db4;
        case 0x343dd4u: goto label_343dd4;
        case 0x343df0u: goto label_343df0;
        case 0x343e14u: goto label_343e14;
        case 0x343e20u: goto label_343e20;
        case 0x343e2cu: goto label_343e2c;
        case 0x343e38u: goto label_343e38;
        case 0x343e44u: goto label_343e44;
        case 0x343e9cu: goto label_343e9c;
        case 0x343ef4u: goto label_343ef4;
        case 0x343f08u: goto label_343f08;
        case 0x343f18u: goto label_343f18;
        case 0x343f2cu: goto label_343f2c;
        case 0x343f34u: goto label_343f34;
        case 0x343f48u: goto label_343f48;
        case 0x343f54u: goto label_343f54;
        case 0x343f68u: goto label_343f68;
        case 0x343f74u: goto label_343f74;
        default: break;
    }

    ctx->pc = 0x343458u;

    // 0x343458: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x343458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x34345c: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x34345cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x343460: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x343460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
    // 0x343464: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x343464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x343468: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x343468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x34346c: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x34346cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x343470: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x343470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x343474: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x343474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x343478: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x343478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
    // 0x34347c: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x34347cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
    // 0x343480: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x343480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x343484: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x343484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x343488: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x343488u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x34348c: 0xc0dcc44  jal         func_373110
    ctx->pc = 0x34348Cu;
    SET_GPR_U32(ctx, 31, 0x343494u);
    ctx->pc = 0x343490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34348Cu;
    // 0x343490: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x373110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373110u, 0x34348Cu, 0x343494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343494u;
label_343494:
    // 0x343494: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x343494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x343498: 0x2b2c0  sll         $s6, $v0, 11
    ctx->pc = 0x343498u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x34349c: 0x26c41000  addiu       $a0, $s6, 0x1000
    ctx->pc = 0x34349cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4096));
    // 0x3434a0: 0x3c014420  lui         $at, 0x4420
    ctx->pc = 0x3434a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17440 << 16));
    // 0x3434a4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3434a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3434a8: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x3434a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x3434ac: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x3434acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x3434b0: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x3434b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x3434b4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3434b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3434b8: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x3434b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3434bc: 0xc4410044  lwc1        $f1, 0x44($v0)
    ctx->pc = 0x3434bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3434c0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3434c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3434c4: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x3434c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
    // 0x3434c8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3434c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3434cc: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x3434ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x3434d0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3434d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3434d4: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3434d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x3434d8: 0x44141000  mfc1        $s4, $f2
    ctx->pc = 0x3434d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
    // 0x3434dc: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x3434dcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x3434e0: 0x2682000f  addiu       $v0, $s4, 0xF
    ctx->pc = 0x3434e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 15));
    // 0x3434e4: 0x2c420280  sltiu       $v0, $v0, 0x280
    ctx->pc = 0x3434e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)640) ? 1 : 0);
    // 0x3434e8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3434e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3434ec: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x3434ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x3434f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3434F0u;
    {
        const bool branch_taken_0x3434f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3434F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3434F0u;
        // 0x3434f4: 0x2a62fff1  slti        $v0, $s3, -0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4294967281) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3434f0) {
            ctx->pc = 0x343510u;
            goto label_343510;
        }
    }
    ctx->pc = 0x3434F8u;
    // 0x3434f8: 0x1440029f  bnez        $v0, . + 4 + (0x29F << 2)
    ctx->pc = 0x3434F8u;
    {
        const bool branch_taken_0x3434f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3434FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3434F8u;
        // 0x3434fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3434f8) {
            ctx->pc = 0x343F78u;
            goto label_343f78;
        }
    }
    ctx->pc = 0x343500u;
    // 0x343500: 0x26620010  addiu       $v0, $s3, 0x10
    ctx->pc = 0x343500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x343504: 0x28420201  slti        $v0, $v0, 0x201
    ctx->pc = 0x343504u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)513) ? 1 : 0);
    // 0x343508: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x343508u;
    {
        const bool branch_taken_0x343508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x343508) {
            ctx->pc = 0x343518u;
            goto label_343518;
        }
    }
    ctx->pc = 0x343510u;
label_343510:
    // 0x343510: 0x10000299  b           . + 4 + (0x299 << 2)
    ctx->pc = 0x343510u;
    {
        const bool branch_taken_0x343510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343510u;
        // 0x343514: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343510) {
            ctx->pc = 0x343F78u;
            goto label_343f78;
        }
    }
    ctx->pc = 0x343518u;
label_343518:
    // 0x343518: 0x6810003  bgez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x343518u;
    {
        const bool branch_taken_0x343518 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x34351Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343518u;
        // 0x34351c: 0x241e0010  addiu       $fp, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343518) {
            ctx->pc = 0x343528u;
            goto label_343528;
        }
    }
    ctx->pc = 0x343520u;
    // 0x343520: 0x3d4f021  addu        $fp, $fp, $s4
    ctx->pc = 0x343520u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
    // 0x343524: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x343524u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_343528:
    // 0x343528: 0x29e1821  addu        $v1, $s4, $fp
    ctx->pc = 0x343528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 30)));
    // 0x34352c: 0x28620280  slti        $v0, $v1, 0x280
    ctx->pc = 0x34352cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)640) ? 1 : 0);
    // 0x343530: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x343530u;
    {
        const bool branch_taken_0x343530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x343534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343530u;
        // 0x343534: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343530) {
            ctx->pc = 0x343544u;
            goto label_343544;
        }
    }
    ctx->pc = 0x343538u;
    // 0x343538: 0x27c20280  addiu       $v0, $fp, 0x280
    ctx->pc = 0x343538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 640));
    // 0x34353c: 0x43f023  subu        $fp, $v0, $v1
    ctx->pc = 0x34353cu;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x343540: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x343540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_343544:
    // 0x343544: 0x6610004  bgez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x343544u;
    {
        const bool branch_taken_0x343544 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x343548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343544u;
        // 0x343548: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343544) {
            ctx->pc = 0x343558u;
            goto label_343558;
        }
    }
    ctx->pc = 0x34354Cu;
    // 0x34354c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x34354cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x343550: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x343550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x343554: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x343554u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_343558:
    // 0x343558: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x343558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34355c: 0x2641821  addu        $v1, $s3, $a0
    ctx->pc = 0x34355cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x343560: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x343560u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x343564: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x343564u;
    {
        const bool branch_taken_0x343564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x343564) {
            ctx->pc = 0x343568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x343564u;
            // 0x343568: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34357Cu;
            goto label_34357c;
        }
    }
    ctx->pc = 0x34356Cu;
    // 0x34356c: 0x24820200  addiu       $v0, $a0, 0x200
    ctx->pc = 0x34356cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 512));
    // 0x343570: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x343570u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x343574: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x343574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x343578: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x343578u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_34357c:
    // 0x34357c: 0x2672001f  addiu       $s2, $s3, 0x1F
    ctx->pc = 0x34357cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 31));
    // 0x343580: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x343580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x343584: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x343584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343588: 0x3c53018  mult        $a2, $fp, $a1
    ctx->pc = 0x343588u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x34358c: 0x73202a  slt         $a0, $v1, $s3
    ctx->pc = 0x34358cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x343590: 0x264100b  movn        $v0, $s3, $a0
    ctx->pc = 0x343590u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 19));
    // 0x343594: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x343594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x343598: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x343598u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x34359c: 0x2691003f  addiu       $s1, $s4, 0x3F
    ctx->pc = 0x34359cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 63));
    // 0x3435a0: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x3435a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3435a4: 0x74182a  slt         $v1, $v1, $s4
    ctx->pc = 0x3435a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x3435a8: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x3435a8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3435ac: 0x0  nop
    ctx->pc = 0x3435acu;
    // NOP
    // 0x3435b0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3435b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3435b4: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x3435b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3435b8: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x3435b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x3435bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3435bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3435c0: 0x283800b  movn        $s0, $s4, $v1
    ctx->pc = 0x3435c0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 20));
    // 0x3435c4: 0x108183  sra         $s0, $s0, 6
    ctx->pc = 0x3435c4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 6));
    // 0x3435c8: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x3435c8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3435cc: 0xc0dcc34  jal         func_3730D0
    ctx->pc = 0x3435CCu;
    SET_GPR_U32(ctx, 31, 0x3435D4u);
    ctx->pc = 0x3435D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3435CCu;
    // 0x3435d0: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3730D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3730D0u, 0x3435CCu, 0x3435D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3435D4u;
label_3435d4:
    // 0x3435d4: 0x3c15005c  lui         $s5, 0x5C
    ctx->pc = 0x3435d4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)92 << 16));
    // 0x3435d8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3435d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3435dc: 0x240401e0  addiu       $a0, $zero, 0x1E0
    ctx->pc = 0x3435dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x3435e0: 0xc0dd734  jal         func_375CD0
    ctx->pc = 0x3435E0u;
    SET_GPR_U32(ctx, 31, 0x3435E8u);
    ctx->pc = 0x3435E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3435E0u;
    // 0x3435e4: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375CD0u, 0x3435E0u, 0x3435E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3435E8u;
label_3435e8:
    // 0x3435e8: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x3435e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
    // 0x3435ec: 0x162ac3  sra         $a1, $s6, 11
    ctx->pc = 0x3435ecu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 22), 11));
    // 0x3435f0: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3435f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x3435f4: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x3435f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x3435f8: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x3435F8u;
    SET_GPR_U32(ctx, 31, 0x343600u);
    ctx->pc = 0x3435FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3435F8u;
    // 0x3435fc: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x3435F8u, 0x343600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343600u;
label_343600:
    // 0x343600: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x343600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x343604: 0x26c217ff  addiu       $v0, $s6, 0x17FF
    ctx->pc = 0x343604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 6143));
    // 0x343608: 0x3c053100  lui         $a1, 0x3100
    ctx->pc = 0x343608u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12544 << 16));
    // 0x34360c: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x34360cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x343610: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x343610u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x343614: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x343614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x343618: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x343618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x34361c: 0x26c3003f  addiu       $v1, $s6, 0x3F
    ctx->pc = 0x34361cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 63));
    // 0x343620: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x343620u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x343624: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x343624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
    // 0x343628: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x343628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34362c: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x34362cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x343630: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x343630u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x343634: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x343634u;
    SET_GPR_U32(ctx, 31, 0x34363Cu);
    ctx->pc = 0x343638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343634u;
    // 0x343638: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x343634u, 0x34363Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34363Cu;
label_34363c:
    // 0x34363c: 0x1e1900  sll         $v1, $fp, 4
    ctx->pc = 0x34363cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 4));
    // 0x343640: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x343640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x343644: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x343644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x343648: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x343648u;
    SET_GPR_U32(ctx, 31, 0x343650u);
    ctx->pc = 0x34364Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343648u;
    // 0x34364c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x343648u, 0x343650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343650u;
label_343650:
    // 0x343650: 0x26c4103f  addiu       $a0, $s6, 0x103F
    ctx->pc = 0x343650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4159));
    // 0x343654: 0x24050156  addiu       $a1, $zero, 0x156
    ctx->pc = 0x343654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    // 0x343658: 0xafa40064  sw          $a0, 0x64($sp)
    ctx->pc = 0x343658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 4));
    // 0x34365c: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x34365Cu;
    SET_GPR_U32(ctx, 31, 0x343664u);
    ctx->pc = 0x343660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34365Cu;
    // 0x343660: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x34365Cu, 0x343664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343664u;
label_343664:
    // 0x343664: 0x2404004a  addiu       $a0, $zero, 0x4A
    ctx->pc = 0x343664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x343668: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x343668u;
    SET_GPR_U32(ctx, 31, 0x343670u);
    ctx->pc = 0x34366Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343668u;
    // 0x34366c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x343668u, 0x343670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343670u;
label_343670:
    // 0x343670: 0x24040049  addiu       $a0, $zero, 0x49
    ctx->pc = 0x343670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x343674: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x343674u;
    SET_GPR_U32(ctx, 31, 0x34367Cu);
    ctx->pc = 0x343678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343674u;
    // 0x343678: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x343674u, 0x34367Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34367Cu;
label_34367c:
    // 0x34367c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x34367cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x343680: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x343680u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x343684: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x343684u;
    SET_GPR_U32(ctx, 31, 0x34368Cu);
    ctx->pc = 0x343688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343684u;
    // 0x343688: 0x2404003b  addiu       $a0, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x343684u, 0x34368Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34368Cu;
label_34368c:
    // 0x34368c: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x34368cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x343690: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x343690u;
    SET_GPR_U32(ctx, 31, 0x343698u);
    ctx->pc = 0x343694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343690u;
    // 0x343694: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x343690u, 0x343698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343698u;
label_343698:
    // 0x343698: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x343698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x34369c: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x34369Cu;
    SET_GPR_U32(ctx, 31, 0x3436A4u);
    ctx->pc = 0x3436A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34369Cu;
    // 0x3436a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x34369Cu, 0x3436A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3436A4u;
label_3436a4:
    // 0x3436a4: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x3436a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3436a8: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x3436a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x3436ac: 0x34a5002a  ori         $a1, $a1, 0x2A
    ctx->pc = 0x3436acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)42);
    // 0x3436b0: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x3436B0u;
    SET_GPR_U32(ctx, 31, 0x3436B8u);
    ctx->pc = 0x3436B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3436B0u;
    // 0x3436b4: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x3436B0u, 0x3436B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3436B8u;
label_3436b8:
    // 0x3436b8: 0x3405fe00  ori         $a1, $zero, 0xFE00
    ctx->pc = 0x3436b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x3436bc: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3436bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3436c0: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x3436C0u;
    SET_GPR_U32(ctx, 31, 0x3436C8u);
    ctx->pc = 0x3436C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3436C0u;
    // 0x3436c4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x3436C0u, 0x3436C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3436C8u;
label_3436c8:
    // 0x3436c8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3436c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3436cc: 0xc0d0cc6  jal         func_343318
    ctx->pc = 0x3436CCu;
    SET_GPR_U32(ctx, 31, 0x3436D4u);
    ctx->pc = 0x3436D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3436CCu;
    // 0x3436d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343318u, 0x3436CCu, 0x3436D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3436D4u;
label_3436d4:
    // 0x3436d4: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x3436d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3436d8: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x3436d8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3436dc: 0x94eb8  dsll        $t1, $t1, 26
    ctx->pc = 0x3436dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 26);
    // 0x3436e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3436e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3436e4: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x3436e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_3436e8:
    // 0x3436e8: 0x61280  sll         $v0, $a2, 10
    ctx->pc = 0x3436e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 10));
    // 0x3436ec: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x3436ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x3436f0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3436f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3436f4: 0xe92025  or          $a0, $a3, $t1
    ctx->pc = 0x3436f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 9));
    // 0x3436f8: 0x8d03f910  lw          $v1, -0x6F0($t0)
    ctx->pc = 0x3436f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294965520)));
    // 0x3436fc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3436fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x343700: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x343700u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343704: 0x24e70400  addiu       $a3, $a3, 0x400
    ctx->pc = 0x343704u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1024));
    // 0x343708: 0x28c50002  slti        $a1, $a2, 0x2
    ctx->pc = 0x343708u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x34370c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x34370cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x343710: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x343710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x343714: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x343714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x343718: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x343718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x34371c: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x34371cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x343720: 0xad03f910  sw          $v1, -0x6F0($t0)
    ctx->pc = 0x343720u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294965520), GPR_U32(ctx, 3));
    // 0x343724: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x343724u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343728: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x343728u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x34372c: 0x14a0ffee  bnez        $a1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x34372Cu;
    {
        const bool branch_taken_0x34372c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x343730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34372Cu;
        // 0x343730: 0xad04f910  sw          $a0, -0x6F0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4294965520), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34372c) {
            ctx->pc = 0x3436E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3436e8;
        }
    }
    ctx->pc = 0x343734u;
    // 0x343734: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x343734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x343738: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x343738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x34373c: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x34373cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x343740: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x343740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x343744: 0x8ca20064  lw          $v0, 0x64($a1)
    ctx->pc = 0x343744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x343748: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x343748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x34374c: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x34374cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x343750: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x343750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x343754: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x343754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x343758: 0xc4430054  lwc1        $f3, 0x54($v0)
    ctx->pc = 0x343758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34375c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x34375cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x343760: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x343760u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x343764: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x343764u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x343768: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x343768u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34376c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x34376cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x343770: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x343770u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x343774: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x343774u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x343778: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x343778u;
    {
        const bool branch_taken_0x343778 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x34377Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343778u;
        // 0x34377c: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343778) {
            ctx->pc = 0x343788u;
            goto label_343788;
        }
    }
    ctx->pc = 0x343780u;
    // 0x343780: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x343780u;
    {
        const bool branch_taken_0x343780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343780u;
        // 0x343784: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343780) {
            ctx->pc = 0x343790u;
            goto label_343790;
        }
    }
    ctx->pc = 0x343788u;
label_343788:
    // 0x343788: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x343788u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x34378c: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x34378cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_343790:
    // 0x343790: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x343790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343794: 0x3406fe00  ori         $a2, $zero, 0xFE00
    ctx->pc = 0x343794u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x343798: 0x633bc  dsll32      $a2, $a2, 14
    ctx->pc = 0x343798u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 14));
    // 0x34379c: 0x22a38  dsll        $a1, $v0, 8
    ctx->pc = 0x34379cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << 8);
    // 0x3437a0: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x3437a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x3437a4: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x3437a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x3437a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3437a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3437ac: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x3437acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x3437b0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3437b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3437b4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3437b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x3437b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3437b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3437bc: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x3437BCu;
    SET_GPR_U32(ctx, 31, 0x3437C4u);
    ctx->pc = 0x3437C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3437BCu;
    // 0x3437c0: 0xa62825  or          $a1, $a1, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x3437BCu, 0x3437C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3437C4u;
label_3437c4:
    // 0x3437c4: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x3437c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x3437c8: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x3437C8u;
    SET_GPR_U32(ctx, 31, 0x3437D0u);
    ctx->pc = 0x3437CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3437C8u;
    // 0x3437cc: 0x3c050005  lui         $a1, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x3437C8u, 0x3437D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3437D0u;
label_3437d0:
    // 0x3437d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3437d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3437d4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3437d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3437d8: 0x73102a  slt         $v0, $v1, $s3
    ctx->pc = 0x3437d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x3437dc: 0x74182a  slt         $v1, $v1, $s4
    ctx->pc = 0x3437dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x3437e0: 0x262900b  movn        $s2, $s3, $v0
    ctx->pc = 0x3437e0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 19));
    // 0x3437e4: 0x283880b  movn        $s1, $s4, $v1
    ctx->pc = 0x3437e4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 20));
    // 0x3437e8: 0x12b943  sra         $s7, $s2, 5
    ctx->pc = 0x3437e8u;
    SET_GPR_S32(ctx, 23, SRA32(GPR_S32(ctx, 18), 5));
    // 0x3437ec: 0x118983  sra         $s1, $s1, 6
    ctx->pc = 0x3437ecu;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 6));
    // 0x3437f0: 0x171140  sll         $v0, $s7, 5
    ctx->pc = 0x3437f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 5));
    // 0x3437f4: 0x262b823  subu        $s7, $s3, $v0
    ctx->pc = 0x3437f4u;
    SET_GPR_S32(ctx, 23, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x3437f8: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x3437f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x3437fc: 0x2838823  subu        $s1, $s4, $v1
    ctx->pc = 0x3437fcu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x343800: 0x2e49021  addu        $s2, $s7, $a0
    ctx->pc = 0x343800u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
    // 0x343804: 0x2a420021  slti        $v0, $s2, 0x21
    ctx->pc = 0x343804u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x343808: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x343808u;
    {
        const bool branch_taken_0x343808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34380Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343808u;
        // 0x34380c: 0x23ea021  addu        $s4, $s1, $fp (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343808) {
            ctx->pc = 0x343818u;
            goto label_343818;
        }
    }
    ctx->pc = 0x343810u;
    // 0x343810: 0x2650ffe0  addiu       $s0, $s2, -0x20
    ctx->pc = 0x343810u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967264));
    // 0x343814: 0x24120020  addiu       $s2, $zero, 0x20
    ctx->pc = 0x343814u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_343818:
    // 0x343818: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x343818u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34381c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x34381cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x343820: 0xc460c5e8  lwc1        $f0, -0x3A18($v1)
    ctx->pc = 0x343820u;
    { uint32_t bits = FAST_READ32(0x3FC5E8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x343824: 0x8ca20064  lw          $v0, 0x64($a1)
    ctx->pc = 0x343824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x343828: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x343828u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34382c: 0xc44c0038  lwc1        $f12, 0x38($v0)
    ctx->pc = 0x34382cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x343830: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x343830u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x343834: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x343834u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x343838: 0x0  nop
    ctx->pc = 0x343838u;
    // NOP
    // 0x34383c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x34383Cu;
    {
        const bool branch_taken_0x34383c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34383c) {
            ctx->pc = 0x343840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34383Cu;
            // 0x343840: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x343844u;
            goto label_343844;
        }
    }
    ctx->pc = 0x343844u;
label_343844:
    // 0x343844: 0x118900  sll         $s1, $s1, 4
    ctx->pc = 0x343844u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x343848: 0x14a100  sll         $s4, $s4, 4
    ctx->pc = 0x343848u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x34384c: 0xc0ddd40  jal         func_377500
    ctx->pc = 0x34384Cu;
    SET_GPR_U32(ctx, 31, 0x343854u);
    ctx->pc = 0x343850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34384Cu;
    // 0x343850: 0xafb10020  sw          $s1, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377500u, 0x34384Cu, 0x343854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343854u;
label_343854:
    // 0x343854: 0x171900  sll         $v1, $s7, 4
    ctx->pc = 0x343854u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
    // 0x343858: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x343858u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34385c: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x34385cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x343860: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x343860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343864: 0xc0d0cc6  jal         func_343318
    ctx->pc = 0x343864u;
    SET_GPR_U32(ctx, 31, 0x34386Cu);
    ctx->pc = 0x343868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343864u;
    // 0x343868: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343318u, 0x343864u, 0x34386Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34386Cu;
label_34386c:
    // 0x34386c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x34386cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x343870: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x343870u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x343874: 0x8fb30020  lw          $s3, 0x20($sp)
    ctx->pc = 0x343874u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x343878: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x343878u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34387c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x34387cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x343880: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x343880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x343884: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x343884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x343888: 0x8ea4f910  lw          $a0, -0x6F0($s5)
    ctx->pc = 0x343888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294965520)));
    // 0x34388c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x34388cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x343890: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x343890u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x343894: 0xafb40040  sw          $s4, 0x40($sp)
    ctx->pc = 0x343894u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 20));
    // 0x343898: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x343898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x34389c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x34389cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3438a0: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3438a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x3438a4: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x3438a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x3438a8: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3438a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3438ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3438acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3438b0: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x3438b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3438b4: 0xaea4f910  sw          $a0, -0x6F0($s5)
    ctx->pc = 0x3438b4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294965520), GPR_U32(ctx, 4));
    // 0x3438b8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3438b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3438bc: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x3438bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x3438c0: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3438C0u;
    {
        const bool branch_taken_0x3438c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3438C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3438C0u;
        // 0x3438c4: 0xaea3f910  sw          $v1, -0x6F0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4294965520), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3438c0) {
            ctx->pc = 0x343938u;
            goto label_343938;
        }
    }
    ctx->pc = 0x3438C8u;
    // 0x3438c8: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x3438c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x3438cc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x3438ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3438d0: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x3438d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x3438d4: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x3438d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x3438d8: 0x24a3000a  addiu       $v1, $a1, 0xA
    ctx->pc = 0x3438d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
    // 0x3438dc: 0x3c053100  lui         $a1, 0x3100
    ctx->pc = 0x3438dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12544 << 16));
    // 0x3438e0: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x3438e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3438e4: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x3438E4u;
    SET_GPR_U32(ctx, 31, 0x3438ECu);
    ctx->pc = 0x3438E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3438E4u;
    // 0x3438e8: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x3438E4u, 0x3438ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3438ECu;
label_3438ec:
    // 0x3438ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3438ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3438f0: 0xc0d0cc6  jal         func_343318
    ctx->pc = 0x3438F0u;
    SET_GPR_U32(ctx, 31, 0x3438F8u);
    ctx->pc = 0x3438F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3438F0u;
    // 0x3438f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343318u, 0x3438F0u, 0x3438F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3438F8u;
label_3438f8:
    // 0x3438f8: 0xffb30000  sd          $s3, 0x0($sp)
    ctx->pc = 0x3438f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 19));
    // 0x3438fc: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x3438fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x343900: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x343900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x343904: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x343904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x343908: 0x8ea4f910  lw          $a0, -0x6F0($s5)
    ctx->pc = 0x343908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294965520)));
    // 0x34390c: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x34390cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x343910: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x343910u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343914: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x343914u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x343918: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x343918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x34391c: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x34391cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x343920: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x343920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x343924: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x343924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x343928: 0xaea4f910  sw          $a0, -0x6F0($s5)
    ctx->pc = 0x343928u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294965520), GPR_U32(ctx, 4));
    // 0x34392c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x34392cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343930: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x343930u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x343934: 0xaea3f910  sw          $v1, -0x6F0($s5)
    ctx->pc = 0x343934u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294965520), GPR_U32(ctx, 3));
label_343938:
    // 0x343938: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x343938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x34393c: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x34393Cu;
    SET_GPR_U32(ctx, 31, 0x343944u);
    ctx->pc = 0x343940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34393Cu;
    // 0x343940: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x34393Cu, 0x343944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343944u;
label_343944:
    // 0x343944: 0x3412a800  ori         $s2, $zero, 0xA800
    ctx->pc = 0x343944u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43008);
    // 0x343948: 0x1294f8  dsll        $s2, $s2, 19
    ctx->pc = 0x343948u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << 19);
    // 0x34394c: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x34394cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x343950: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x343950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x343954: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x343954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x343958: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x343958u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x34395c: 0x43882a  slt         $s1, $v0, $v1
    ctx->pc = 0x34395cu;
    SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x343960: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x343960u;
    SET_GPR_U32(ctx, 31, 0x343968u);
    ctx->pc = 0x343964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343960u;
    // 0x343964: 0x3c0982d  daddu       $s3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x343960u, 0x343968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343968u;
label_343968:
    // 0x343968: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x343968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x34396c: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x34396cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x343970: 0xb1200b  movn        $a0, $a1, $s1
    ctx->pc = 0x343970u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 5));
    // 0x343974: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x343974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
    // 0x343978: 0x3405fe00  ori         $a1, $zero, 0xFE00
    ctx->pc = 0x343978u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x34397c: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x34397cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x343980: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x343980u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x343984: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x343984u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x343988: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x343988u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x34398c: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x34398Cu;
    SET_GPR_U32(ctx, 31, 0x343994u);
    ctx->pc = 0x343990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34398Cu;
    // 0x343990: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x34398Cu, 0x343994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343994u;
label_343994:
    // 0x343994: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x343994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x343998: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x343998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x34399c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x34399cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3439a0: 0x22ac3  sra         $a1, $v0, 11
    ctx->pc = 0x3439a0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 11));
    // 0x3439a4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3439a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x3439a8: 0x3803c  dsll32      $s0, $v1, 0
    ctx->pc = 0x3439a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3439ac: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3439acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x3439b0: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x3439B0u;
    SET_GPR_U32(ctx, 31, 0x3439B8u);
    ctx->pc = 0x3439B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3439B0u;
    // 0x3439b4: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x3439B0u, 0x3439B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3439B8u;
label_3439b8:
    // 0x3439b8: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x3439b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3439bc: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x3439bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x3439c0: 0x34a50261  ori         $a1, $a1, 0x261
    ctx->pc = 0x3439c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)609);
    // 0x3439c4: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x3439C4u;
    SET_GPR_U32(ctx, 31, 0x3439CCu);
    ctx->pc = 0x3439C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3439C4u;
    // 0x3439c8: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x3439C4u, 0x3439CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3439CCu;
label_3439cc:
    // 0x3439cc: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x3439ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3439d0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x3439d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3439d4: 0x96102a  slt         $v0, $a0, $s6
    ctx->pc = 0x3439d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x3439d8: 0x3c031c00  lui         $v1, 0x1C00
    ctx->pc = 0x3439d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7168 << 16));
    // 0x3439dc: 0x2c2280b  movn        $a1, $s6, $v0
    ctx->pc = 0x3439dcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 22));
    // 0x3439e0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x3439e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x3439e4: 0x51183  sra         $v0, $a1, 6
    ctx->pc = 0x3439e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 6));
    // 0x3439e8: 0x8fb40018  lw          $s4, 0x18($sp)
    ctx->pc = 0x3439e8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3439ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3439ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3439f0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x3439f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3439f4: 0x522825  or          $a1, $v0, $s2
    ctx->pc = 0x3439f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x3439f8: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x3439F8u;
    SET_GPR_U32(ctx, 31, 0x343A00u);
    ctx->pc = 0x3439FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3439F8u;
    // 0x3439fc: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x3439F8u, 0x343A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343A00u;
label_343a00:
    // 0x343a00: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x343a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x343a04: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x343A04u;
    SET_GPR_U32(ctx, 31, 0x343A0Cu);
    ctx->pc = 0x343A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343A04u;
    // 0x343a08: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x343A04u, 0x343A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343A0Cu;
label_343a0c:
    // 0x343a0c: 0x3405fe00  ori         $a1, $zero, 0xFE00
    ctx->pc = 0x343a0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x343a10: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x343a10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x343a14: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x343A14u;
    SET_GPR_U32(ctx, 31, 0x343A1Cu);
    ctx->pc = 0x343A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343A14u;
    // 0x343a18: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x343A14u, 0x343A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343A1Cu;
label_343a1c:
    // 0x343a1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x343a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343a20: 0xc0d0cc6  jal         func_343318
    ctx->pc = 0x343A20u;
    SET_GPR_U32(ctx, 31, 0x343A28u);
    ctx->pc = 0x343A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343A20u;
    // 0x343a24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343318u, 0x343A20u, 0x343A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343A28u;
label_343a28:
    // 0x343a28: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x343a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x343a2c: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x343a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x343a30: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x343a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x343a34: 0x2063025  or          $a2, $s0, $a2
    ctx->pc = 0x343a34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | GPR_U64(ctx, 6));
    // 0x343a38: 0x8ea3f910  lw          $v1, -0x6F0($s5)
    ctx->pc = 0x343a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294965520)));
    // 0x343a3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x343a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343a40: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x343a40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343a44: 0x3405fe00  ori         $a1, $zero, 0xFE00
    ctx->pc = 0x343a44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x343a48: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x343a48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x343a4c: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x343a4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x343a50: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x343a50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x343a54: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x343a54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x343a58: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x343a58u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x343a5c: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x343a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
    // 0x343a60: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x343a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x343a64: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x343a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x343a68: 0x24660010  addiu       $a2, $v1, 0x10
    ctx->pc = 0x343a68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x343a6c: 0xaea3f910  sw          $v1, -0x6F0($s5)
    ctx->pc = 0x343a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294965520), GPR_U32(ctx, 3));
    // 0x343a70: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x343a70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343a74: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x343a74u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x343a78: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x343A78u;
    SET_GPR_U32(ctx, 31, 0x343A80u);
    ctx->pc = 0x343A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343A78u;
    // 0x343a7c: 0xaea6f910  sw          $a2, -0x6F0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294965520), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x343A78u, 0x343A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343A80u;
label_343a80:
    // 0x343a80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x343a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343a84: 0xc0d0cc6  jal         func_343318
    ctx->pc = 0x343A84u;
    SET_GPR_U32(ctx, 31, 0x343A8Cu);
    ctx->pc = 0x343A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343A84u;
    // 0x343a88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343318u, 0x343A84u, 0x343A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343A8Cu;
label_343a8c:
    // 0x343a8c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x343a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x343a90: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x343a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x343a94: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x343a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x343a98: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x343a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x343a9c: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x343a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x343aa0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x343aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x343aa4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x343aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x343aa8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x343aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x343aac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x343aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x343ab0: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x343ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x343ab4: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x343ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x343ab8: 0x2e52021  addu        $a0, $s7, $a1
    ctx->pc = 0x343ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
    // 0x343abc: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x343abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x343ac0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x343ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x343ac4: 0x8ea6f910  lw          $a2, -0x6F0($s5)
    ctx->pc = 0x343ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294965520)));
    // 0x343ac8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x343ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x343acc: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x343accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x343ad0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x343ad0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x343ad4: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x343ad4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343ad8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x343ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x343adc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x343adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x343ae0: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x343ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x343ae4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x343ae4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x343ae8: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x343ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x343aec: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x343aecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x343af0: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x343af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x343af4: 0x24c50010  addiu       $a1, $a2, 0x10
    ctx->pc = 0x343af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x343af8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x343af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x343afc: 0x24c80020  addiu       $t0, $a2, 0x20
    ctx->pc = 0x343afcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x343b00: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x343b00u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343b04: 0x24c70030  addiu       $a3, $a2, 0x30
    ctx->pc = 0x343b04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x343b08: 0x508025  or          $s0, $v0, $s0
    ctx->pc = 0x343b08u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x343b0c: 0xaea6f910  sw          $a2, -0x6F0($s5)
    ctx->pc = 0x343b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294965520), GPR_U32(ctx, 6));
    // 0x343b10: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x343b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x343b14: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x343b14u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x343b18: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x343b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x343b1c: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x343b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x343b20: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x343b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x343b24: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x343b24u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343b28: 0x71100b  movn        $v0, $v1, $s1
    ctx->pc = 0x343b28u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x343b2c: 0xaea5f910  sw          $a1, -0x6F0($s5)
    ctx->pc = 0x343b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294965520), GPR_U32(ctx, 5));
    // 0x343b30: 0x3c031800  lui         $v1, 0x1800
    ctx->pc = 0x343b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)6144 << 16));
    // 0x343b34: 0x7cc40010  sq          $a0, 0x10($a2)
    ctx->pc = 0x343b34u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 4));
    // 0x343b38: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x343b38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x343b3c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x343b3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x343b40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x343b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x343b44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x343b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x343b48: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x343b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x343b4c: 0x522825  or          $a1, $v0, $s2
    ctx->pc = 0x343b4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x343b50: 0xaea8f910  sw          $t0, -0x6F0($s5)
    ctx->pc = 0x343b50u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294965520), GPR_U32(ctx, 8));
    // 0x343b54: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x343b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x343b58: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x343b58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343b5c: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x343b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x343b60: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x343B60u;
    SET_GPR_U32(ctx, 31, 0x343B68u);
    ctx->pc = 0x343B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343B60u;
    // 0x343b64: 0xaea7f910  sw          $a3, -0x6F0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294965520), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x343B60u, 0x343B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343B68u;
label_343b68:
    // 0x343b68: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x343b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x343b6c: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x343B6Cu;
    SET_GPR_U32(ctx, 31, 0x343B74u);
    ctx->pc = 0x343B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343B6Cu;
    // 0x343b70: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x343B6Cu, 0x343B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343B74u;
label_343b74:
    // 0x343b74: 0x1260003e  beqz        $s3, . + 4 + (0x3E << 2)
    ctx->pc = 0x343B74u;
    {
        const bool branch_taken_0x343b74 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x343B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343B74u;
        // 0x343b78: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343b74) {
            ctx->pc = 0x343C70u;
            goto label_343c70;
        }
    }
    ctx->pc = 0x343B7Cu;
    // 0x343b7c: 0x1280003c  beqz        $s4, . + 4 + (0x3C << 2)
    ctx->pc = 0x343B7Cu;
    {
        const bool branch_taken_0x343b7c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x343B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343B7Cu;
        // 0x343b80: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343b7c) {
            ctx->pc = 0x343C70u;
            goto label_343c70;
        }
    }
    ctx->pc = 0x343B84u;
    // 0x343b84: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x343b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_343b88:
    // 0x343b88: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x343B88u;
    SET_GPR_U32(ctx, 31, 0x343B90u);
    ctx->pc = 0x343B8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343B88u;
    // 0x343b8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x343B88u, 0x343B90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343B90u;
label_343b90:
    // 0x343b90: 0x2d38021  addu        $s0, $s6, $s3
    ctx->pc = 0x343b90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
    // 0x343b94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x343b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343b98: 0xc0d0cc6  jal         func_343318
    ctx->pc = 0x343B98u;
    SET_GPR_U32(ctx, 31, 0x343BA0u);
    ctx->pc = 0x343B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343B98u;
    // 0x343b9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343318u, 0x343B98u, 0x343BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343BA0u;
label_343ba0:
    // 0x343ba0: 0x161100  sll         $v0, $s6, 4
    ctx->pc = 0x343ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x343ba4: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x343ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x343ba8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x343ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x343bac: 0x8e25f910  lw          $a1, -0x6F0($s1)
    ctx->pc = 0x343bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294965520)));
    // 0x343bb0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x343bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x343bb4: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x343bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x343bb8: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x343bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x343bbc: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x343bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x343bc0: 0x143100  sll         $a2, $s4, 4
    ctx->pc = 0x343bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x343bc4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x343bc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x343bc8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x343bc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343bcc: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x343bccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x343bd0: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x343bd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x343bd4: 0x133fc2  srl         $a3, $s3, 31
    ctx->pc = 0x343bd4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 19), 31));
    // 0x343bd8: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x343bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x343bdc: 0x141fc2  srl         $v1, $s4, 31
    ctx->pc = 0x343bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 31));
    // 0x343be0: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x343be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x343be4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x343be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x343be8: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x343be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x343bec: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x343becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x343bf0: 0xae25f910  sw          $a1, -0x6F0($s1)
    ctx->pc = 0x343bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294965520), GPR_U32(ctx, 5));
    // 0x343bf4: 0x2673821  addu        $a3, $s3, $a3
    ctx->pc = 0x343bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 7)));
    // 0x343bf8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x343bf8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343bfc: 0x34843  sra         $t1, $v1, 1
    ctx->pc = 0x343bfcu;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), 1));
    // 0x343c00: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x343c00u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
    // 0x343c04: 0x24a80010  addiu       $t0, $a1, 0x10
    ctx->pc = 0x343c04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x343c08: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x343c08u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x343c0c: 0x2072021  addu        $a0, $s0, $a3
    ctx->pc = 0x343c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x343c10: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x343c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
    // 0x343c14: 0x91900  sll         $v1, $t1, 4
    ctx->pc = 0x343c14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x343c18: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x343c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x343c1c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x343c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x343c20: 0xae28f910  sw          $t0, -0x6F0($s1)
    ctx->pc = 0x343c20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294965520), GPR_U32(ctx, 8));
    // 0x343c24: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x343c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x343c28: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x343c28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343c2c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x343c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x343c30: 0x24a60020  addiu       $a2, $a1, 0x20
    ctx->pc = 0x343c30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x343c34: 0x24a40030  addiu       $a0, $a1, 0x30
    ctx->pc = 0x343c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x343c38: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x343c38u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x343c3c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x343c3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343c40: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x343c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
    // 0x343c44: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x343c44u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343c48: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x343c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x343c4c: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x343c4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343c50: 0xae26f910  sw          $a2, -0x6F0($s1)
    ctx->pc = 0x343c50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294965520), GPR_U32(ctx, 6));
    // 0x343c54: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x343c54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343c58: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x343c58u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
    // 0x343c5c: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x343C5Cu;
    {
        const bool branch_taken_0x343c5c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x343C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343C5Cu;
        // 0x343c60: 0xae24f910  sw          $a0, -0x6F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294965520), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343c5c) {
            ctx->pc = 0x343C6Cu;
            goto label_343c6c;
        }
    }
    ctx->pc = 0x343C64u;
    // 0x343c64: 0x5520ffc8  bnel        $t1, $zero, . + 4 + (-0x38 << 2)
    ctx->pc = 0x343C64u;
    {
        const bool branch_taken_0x343c64 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x343c64) {
            ctx->pc = 0x343C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x343C64u;
            // 0x343c68: 0x2404003f  addiu       $a0, $zero, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
            ctx->in_delay_slot = false;
            ctx->pc = 0x343B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_343b88;
        }
    }
    ctx->pc = 0x343C6Cu;
label_343c6c:
    // 0x343c6c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x343c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_343c70:
    // 0x343c70: 0x9043c5ec  lbu         $v1, -0x3A14($v0)
    ctx->pc = 0x343c70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294952428)));
    // 0x343c74: 0x1060004d  beqz        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x343C74u;
    {
        const bool branch_taken_0x343c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x343C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343C74u;
        // 0x343c78: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343c74) {
            ctx->pc = 0x343DACu;
            goto label_343dac;
        }
    }
    ctx->pc = 0x343C7Cu;
    // 0x343c7c: 0xc0dcc22  jal         func_373088
    ctx->pc = 0x343C7Cu;
    SET_GPR_U32(ctx, 31, 0x343C84u);
    ctx->pc = 0x373088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373088u, 0x343C7Cu, 0x343C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343C84u;
label_343c84:
    // 0x343c84: 0x3c03000a  lui         $v1, 0xA
    ctx->pc = 0x343c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10 << 16));
    // 0x343c88: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x343c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x343c8c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x343c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x343c90: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x343C90u;
    SET_GPR_U32(ctx, 31, 0x343C98u);
    ctx->pc = 0x343C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343C90u;
    // 0x343c94: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x343C90u, 0x343C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343C98u;
label_343c98:
    // 0x343c98: 0x3405fe00  ori         $a1, $zero, 0xFE00
    ctx->pc = 0x343c98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x343c9c: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x343c9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x343ca0: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x343ca0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x343ca4: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x343ca4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x343ca8: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x343ca8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x343cac: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x343CACu;
    SET_GPR_U32(ctx, 31, 0x343CB4u);
    ctx->pc = 0x343CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343CACu;
    // 0x343cb0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x343CACu, 0x343CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343CB4u;
label_343cb4:
    // 0x343cb4: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x343cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x343cb8: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x343CB8u;
    SET_GPR_U32(ctx, 31, 0x343CC0u);
    ctx->pc = 0x343CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343CB8u;
    // 0x343cbc: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x343CB8u, 0x343CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343CC0u;
label_343cc0:
    // 0x343cc0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x343cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x343cc4: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x343CC4u;
    SET_GPR_U32(ctx, 31, 0x343CCCu);
    ctx->pc = 0x343CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343CC4u;
    // 0x343cc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x343CC4u, 0x343CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343CCCu;
label_343ccc:
    // 0x343ccc: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x343cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x343cd0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x343cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x343cd4: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x343cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x343cd8: 0x3c031c00  lui         $v1, 0x1C00
    ctx->pc = 0x343cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7168 << 16));
    // 0x343cdc: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x343cdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x343ce0: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x343ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x343ce4: 0x82280b  movn        $a1, $a0, $v0
    ctx->pc = 0x343ce4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
    // 0x343ce8: 0xafa50064  sw          $a1, 0x64($sp)
    ctx->pc = 0x343ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 5));
    // 0x343cec: 0x3405a800  ori         $a1, $zero, 0xA800
    ctx->pc = 0x343cecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43008);
    // 0x343cf0: 0x52cf8  dsll        $a1, $a1, 19
    ctx->pc = 0x343cf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 19);
    // 0x343cf4: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x343cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x343cf8: 0x41183  sra         $v0, $a0, 6
    ctx->pc = 0x343cf8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 6));
    // 0x343cfc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x343cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x343d00: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x343d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x343d04: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x343D04u;
    SET_GPR_U32(ctx, 31, 0x343D0Cu);
    ctx->pc = 0x343D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343D04u;
    // 0x343d08: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x343D04u, 0x343D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343D0Cu;
label_343d0c:
    // 0x343d0c: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x343d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x343d10: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x343D10u;
    SET_GPR_U32(ctx, 31, 0x343D18u);
    ctx->pc = 0x343D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343D10u;
    // 0x343d14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x343D10u, 0x343D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343D18u;
label_343d18:
    // 0x343d18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x343d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343d1c: 0xc0d0cc6  jal         func_343318
    ctx->pc = 0x343D1Cu;
    SET_GPR_U32(ctx, 31, 0x343D24u);
    ctx->pc = 0x343D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343D1Cu;
    // 0x343d20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343318u, 0x343D1Cu, 0x343D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343D24u;
label_343d24:
    // 0x343d24: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x343d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x343d28: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x343d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x343d2c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x343d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x343d30: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x343d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x343d34: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x343d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x343d38: 0x34078200  ori         $a3, $zero, 0x8200
    ctx->pc = 0x343d38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33280);
    // 0x343d3c: 0x73eb8  dsll        $a3, $a3, 26
    ctx->pc = 0x343d3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 26);
    // 0x343d40: 0x34e70408  ori         $a3, $a3, 0x408
    ctx->pc = 0x343d40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1032);
    // 0x343d44: 0x8ea3f910  lw          $v1, -0x6F0($s5)
    ctx->pc = 0x343d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294965520)));
    // 0x343d48: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x343d48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x343d4c: 0x846b8  dsll        $t0, $t0, 26
    ctx->pc = 0x343d4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 26);
    // 0x343d50: 0x35080400  ori         $t0, $t0, 0x400
    ctx->pc = 0x343d50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1024);
    // 0x343d54: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x343d54u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343d58: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x343d58u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x343d5c: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x343d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x343d60: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x343d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x343d64: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x343d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x343d68: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x343d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x343d6c: 0xaea3f910  sw          $v1, -0x6F0($s5)
    ctx->pc = 0x343d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294965520), GPR_U32(ctx, 3));
    // 0x343d70: 0x24650020  addiu       $a1, $v1, 0x20
    ctx->pc = 0x343d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x343d74: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x343d74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343d78: 0x24660030  addiu       $a2, $v1, 0x30
    ctx->pc = 0x343d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x343d7c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x343d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x343d80: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x343d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    // 0x343d84: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x343d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x343d88: 0xaea4f910  sw          $a0, -0x6F0($s5)
    ctx->pc = 0x343d88u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294965520), GPR_U32(ctx, 4));
    // 0x343d8c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x343d8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343d90: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x343d90u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x343d94: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x343d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x343d98: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x343d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x343d9c: 0xaea5f910  sw          $a1, -0x6F0($s5)
    ctx->pc = 0x343d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294965520), GPR_U32(ctx, 5));
    // 0x343da0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x343da0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343da4: 0x7c620020  sq          $v0, 0x20($v1)
    ctx->pc = 0x343da4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 2));
    // 0x343da8: 0xaea6f910  sw          $a2, -0x6F0($s5)
    ctx->pc = 0x343da8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294965520), GPR_U32(ctx, 6));
label_343dac:
    // 0x343dac: 0xc0dcc22  jal         func_373088
    ctx->pc = 0x343DACu;
    SET_GPR_U32(ctx, 31, 0x343DB4u);
    ctx->pc = 0x343DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343DACu;
    // 0x343db0: 0x3c11000a  lui         $s1, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)10 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373088u, 0x343DACu, 0x343DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343DB4u;
label_343db4:
    // 0x343db4: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x343db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x343db8: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x343db8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x343dbc: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x343dbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x343dc0: 0x34a5ff00  ori         $a1, $a1, 0xFF00
    ctx->pc = 0x343dc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65280);
    // 0x343dc4: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x343dc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x343dc8: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x343dc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x343dcc: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x343DCCu;
    SET_GPR_U32(ctx, 31, 0x343DD4u);
    ctx->pc = 0x343DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343DCCu;
    // 0x343dd0: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x343DCCu, 0x343DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343DD4u;
label_343dd4:
    // 0x343dd4: 0x3c014420  lui         $at, 0x4420
    ctx->pc = 0x343dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17440 << 16));
    // 0x343dd8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x343dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x343ddc: 0x3405e000  ori         $a1, $zero, 0xE000
    ctx->pc = 0x343ddcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x343de0: 0x52ff8  dsll        $a1, $a1, 31
    ctx->pc = 0x343de0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 31);
    // 0x343de4: 0x34a56c00  ori         $a1, $a1, 0x6C00
    ctx->pc = 0x343de4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27648);
    // 0x343de8: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x343DE8u;
    SET_GPR_U32(ctx, 31, 0x343DF0u);
    ctx->pc = 0x343DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343DE8u;
    // 0x343dec: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x343DE8u, 0x343DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343DF0u;
label_343df0:
    // 0x343df0: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x343df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
    // 0x343df4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x343df4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x343df8: 0x3405fe00  ori         $a1, $zero, 0xFE00
    ctx->pc = 0x343df8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x343dfc: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x343dfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x343e00: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x343e00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x343e04: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x343e04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x343e08: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x343e08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x343e0c: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x343E0Cu;
    SET_GPR_U32(ctx, 31, 0x343E14u);
    ctx->pc = 0x343E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343E0Cu;
    // 0x343e10: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x343E0Cu, 0x343E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343E14u;
label_343e14:
    // 0x343e14: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x343e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x343e18: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x343E18u;
    SET_GPR_U32(ctx, 31, 0x343E20u);
    ctx->pc = 0x343E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343E18u;
    // 0x343e1c: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x343E18u, 0x343E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343E20u;
label_343e20:
    // 0x343e20: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x343e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x343e24: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x343E24u;
    SET_GPR_U32(ctx, 31, 0x343E2Cu);
    ctx->pc = 0x343E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343E24u;
    // 0x343e28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x343E24u, 0x343E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343E2Cu;
label_343e2c:
    // 0x343e2c: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x343e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x343e30: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x343E30u;
    SET_GPR_U32(ctx, 31, 0x343E38u);
    ctx->pc = 0x343E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343E30u;
    // 0x343e34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x343E30u, 0x343E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343E38u;
label_343e38:
    // 0x343e38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x343e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343e3c: 0xc0d0cc6  jal         func_343318
    ctx->pc = 0x343E3Cu;
    SET_GPR_U32(ctx, 31, 0x343E44u);
    ctx->pc = 0x343E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343E3Cu;
    // 0x343e40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343318u, 0x343E3Cu, 0x343E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343E44u;
label_343e44:
    // 0x343e44: 0x168100  sll         $s0, $s6, 4
    ctx->pc = 0x343e44u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x343e48: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x343e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x343e4c: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x343e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x343e50: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x343e50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x343e54: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x343e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x343e58: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x343e58u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x343e5c: 0x8ea3f910  lw          $v1, -0x6F0($s5)
    ctx->pc = 0x343e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294965520)));
    // 0x343e60: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x343e60u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x343e64: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x343e64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x343e68: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x343e68u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x343e6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x343e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x343e70: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x343e70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343e74: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x343e74u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x343e78: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x343e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x343e7c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x343e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x343e80: 0xaea3f910  sw          $v1, -0x6F0($s5)
    ctx->pc = 0x343e80u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294965520), GPR_U32(ctx, 3));
    // 0x343e84: 0x8ca20064  lw          $v0, 0x64($a1)
    ctx->pc = 0x343e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 100)));
    // 0x343e88: 0xc44d005c  lwc1        $f13, 0x5C($v0)
    ctx->pc = 0x343e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x343e8c: 0xc44c0058  lwc1        $f12, 0x58($v0)
    ctx->pc = 0x343e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x343e90: 0x46146b42  mul.s       $f13, $f13, $f20
    ctx->pc = 0x343e90u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[20]);
    // 0x343e94: 0xc0dc42e  jal         func_3710B8
    ctx->pc = 0x343E94u;
    SET_GPR_U32(ctx, 31, 0x343E9Cu);
    ctx->pc = 0x343E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343E94u;
    // 0x343e98: 0x46156302  mul.s       $f12, $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3710B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3710B8u, 0x343E94u, 0x343E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343E9Cu;
label_343e9c:
    // 0x343e9c: 0x8ea3f910  lw          $v1, -0x6F0($s5)
    ctx->pc = 0x343e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294965520)));
    // 0x343ea0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x343ea0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x343ea4: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x343ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x343ea8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x343ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x343eac: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x343eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x343eb0: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x343eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
    // 0x343eb4: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x343eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x343eb8: 0xaea3f910  sw          $v1, -0x6F0($s5)
    ctx->pc = 0x343eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294965520), GPR_U32(ctx, 3));
    // 0x343ebc: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x343ebcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x343ec0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x343ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x343ec4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x343ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x343ec8: 0xaea4f910  sw          $a0, -0x6F0($s5)
    ctx->pc = 0x343ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294965520), GPR_U32(ctx, 4));
    // 0x343ecc: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x343eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x343ed0: 0xc4410064  lwc1        $f1, 0x64($v0)
    ctx->pc = 0x343ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x343ed4: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x343ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x343ed8: 0xc44c0058  lwc1        $f12, 0x58($v0)
    ctx->pc = 0x343ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x343edc: 0xc44d005c  lwc1        $f13, 0x5C($v0)
    ctx->pc = 0x343edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x343ee0: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x343ee0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x343ee4: 0x46016b40  add.s       $f13, $f13, $f1
    ctx->pc = 0x343ee4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
    // 0x343ee8: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x343ee8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x343eec: 0xc0dc42e  jal         func_3710B8
    ctx->pc = 0x343EECu;
    SET_GPR_U32(ctx, 31, 0x343EF4u);
    ctx->pc = 0x343EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343EECu;
    // 0x343ef0: 0x46146b42  mul.s       $f13, $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3710B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3710B8u, 0x343EECu, 0x343EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343EF4u;
label_343ef4:
    // 0x343ef4: 0x8ea3f910  lw          $v1, -0x6F0($s5)
    ctx->pc = 0x343ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294965520)));
    // 0x343ef8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x343ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x343efc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x343efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x343f00: 0xc0dcc22  jal         func_373088
    ctx->pc = 0x343F00u;
    SET_GPR_U32(ctx, 31, 0x343F08u);
    ctx->pc = 0x343F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343F00u;
    // 0x343f04: 0xaea3f910  sw          $v1, -0x6F0($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294965520), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373088u, 0x343F00u, 0x343F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343F08u;
label_343f08:
    // 0x343f08: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x343f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x343f0c: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x343f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x343f10: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x343F10u;
    SET_GPR_U32(ctx, 31, 0x343F18u);
    ctx->pc = 0x343F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343F10u;
    // 0x343f14: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x343F10u, 0x343F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343F18u;
label_343f18:
    // 0x343f18: 0x3405e000  ori         $a1, $zero, 0xE000
    ctx->pc = 0x343f18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
    // 0x343f1c: 0x52ff8  dsll        $a1, $a1, 31
    ctx->pc = 0x343f1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 31);
    // 0x343f20: 0x34a56c00  ori         $a1, $a1, 0x6C00
    ctx->pc = 0x343f20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27648);
    // 0x343f24: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x343F24u;
    SET_GPR_U32(ctx, 31, 0x343F2Cu);
    ctx->pc = 0x343F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343F24u;
    // 0x343f28: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x343F24u, 0x343F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343F2Cu;
label_343f2c:
    // 0x343f2c: 0xc0dcc34  jal         func_3730D0
    ctx->pc = 0x343F2Cu;
    SET_GPR_U32(ctx, 31, 0x343F34u);
    ctx->pc = 0x3730D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3730D0u, 0x343F2Cu, 0x343F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343F34u;
label_343f34:
    // 0x343f34: 0x3c033100  lui         $v1, 0x3100
    ctx->pc = 0x343f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12544 << 16));
    // 0x343f38: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x343f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x343f3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x343f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x343f40: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x343F40u;
    SET_GPR_U32(ctx, 31, 0x343F48u);
    ctx->pc = 0x343F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343F40u;
    // 0x343f44: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x343F40u, 0x343F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343F48u;
label_343f48:
    // 0x343f48: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x343f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x343f4c: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x343F4Cu;
    SET_GPR_U32(ctx, 31, 0x343F54u);
    ctx->pc = 0x343F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343F4Cu;
    // 0x343f50: 0x3c050005  lui         $a1, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x343F4Cu, 0x343F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343F54u;
label_343f54:
    // 0x343f54: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x343f54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x343f58: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x343f58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x343f5c: 0x34a50261  ori         $a1, $a1, 0x261
    ctx->pc = 0x343f5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)609);
    // 0x343f60: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x343F60u;
    SET_GPR_U32(ctx, 31, 0x343F68u);
    ctx->pc = 0x343F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343F60u;
    // 0x343f64: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x343F60u, 0x343F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343F68u;
label_343f68:
    // 0x343f68: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x343f68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x343f6c: 0xc0dc292  jal         func_370A48
    ctx->pc = 0x343F6Cu;
    SET_GPR_U32(ctx, 31, 0x343F74u);
    ctx->pc = 0x343F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343F6Cu;
    // 0x343f70: 0x2484f8c8  addiu       $a0, $a0, -0x738 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370A48u, 0x343F6Cu, 0x343F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343F74u;
label_343f74:
    // 0x343f74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x343f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_343f78:
    // 0x343f78: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x343f78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x343f7c: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x343f7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x343f80: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x343f80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x343f84: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x343f84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x343f88: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x343f88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x343f8c: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x343f8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x343f90: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x343f90u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x343f94: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x343f94u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x343f98: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x343f98u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x343f9c: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x343f9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x343fa0: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x343fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x343fa4: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x343fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x343fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x343FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343FA8u;
        // 0x343fac: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343FB0u;
}
