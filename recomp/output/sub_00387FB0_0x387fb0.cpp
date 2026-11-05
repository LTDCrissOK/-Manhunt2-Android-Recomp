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

// Function: sub_00387FB0
// Address: 0x387fb0 - 0x389d58
void sub_00387FB0_0x387fb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00387FB0_0x387fb0");
#endif

    switch (ctx->pc) {
        case 0x388028u: goto label_388028;
        case 0x3880b8u: goto label_3880b8;
        case 0x388150u: goto label_388150;
        case 0x388270u: goto label_388270;
        case 0x388300u: goto label_388300;
        case 0x388390u: goto label_388390;
        case 0x388420u: goto label_388420;
        case 0x3884b0u: goto label_3884b0;
        case 0x388540u: goto label_388540;
        case 0x3885d0u: goto label_3885d0;
        case 0x388660u: goto label_388660;
        case 0x3886f8u: goto label_3886f8;
        case 0x388704u: goto label_388704;
        case 0x388790u: goto label_388790;
        case 0x388820u: goto label_388820;
        case 0x3888b0u: goto label_3888b0;
        case 0x388940u: goto label_388940;
        case 0x3889ccu: goto label_3889cc;
        case 0x3889d0u: goto label_3889d0;
        case 0x388a58u: goto label_388a58;
        case 0x388ae4u: goto label_388ae4;
        case 0x388b08u: goto label_388b08;
        case 0x388ba0u: goto label_388ba0;
        case 0x388c30u: goto label_388c30;
        case 0x388c94u: goto label_388c94;
        case 0x388cc0u: goto label_388cc0;
        case 0x388d50u: goto label_388d50;
        case 0x388de0u: goto label_388de0;
        case 0x388e68u: goto label_388e68;
        case 0x388f18u: goto label_388f18;
        case 0x388fb0u: goto label_388fb0;
        case 0x389050u: goto label_389050;
        case 0x3890e0u: goto label_3890e0;
        case 0x389170u: goto label_389170;
        case 0x389200u: goto label_389200;
        case 0x389288u: goto label_389288;
        case 0x389318u: goto label_389318;
        case 0x3893a8u: goto label_3893a8;
        case 0x389430u: goto label_389430;
        case 0x3894b8u: goto label_3894b8;
        case 0x389530u: goto label_389530;
        case 0x389570u: goto label_389570;
        case 0x3895a4u: goto label_3895a4;
        case 0x389604u: goto label_389604;
        case 0x389608u: goto label_389608;
        case 0x3896a0u: goto label_3896a0;
        case 0x389730u: goto label_389730;
        case 0x3897a0u: goto label_3897a0;
        case 0x3897bcu: goto label_3897bc;
        case 0x3897d0u: goto label_3897d0;
        case 0x3898b0u: goto label_3898b0;
        case 0x389968u: goto label_389968;
        case 0x3899fcu: goto label_3899fc;
        case 0x389a40u: goto label_389a40;
        case 0x389a5cu: goto label_389a5c;
        case 0x389b48u: goto label_389b48;
        case 0x389c14u: goto label_389c14;
        case 0x389c20u: goto label_389c20;
        case 0x389ce0u: goto label_389ce0;
        default: break;
    }

    ctx->pc = 0x387fb0u;

    // 0x387fb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x387fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x387fb4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x387fb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387fb8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x387fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x387fbc: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x387fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x387fc0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x387fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x387fc4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x387fc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387fc8: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x387fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x387fcc: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x387fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x387fd0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x387fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x387fd4: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x387fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x387fd8: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x387fd8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x387fdc: 0xacc20028  sw          $v0, 0x28($a2)
    ctx->pc = 0x387fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 2));
    // 0x387fe0: 0x24a993e0  addiu       $t1, $a1, -0x6C20
    ctx->pc = 0x387fe0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939616));
    // 0x387fe4: 0x69220007  ldl         $v0, 0x7($t1)
    ctx->pc = 0x387fe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x387fe8: 0x6d220000  ldr         $v0, 0x0($t1)
    ctx->pc = 0x387fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x387fec: 0x6924000f  ldl         $a0, 0xF($t1)
    ctx->pc = 0x387fecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x387ff0: 0x6d240008  ldr         $a0, 0x8($t1)
    ctx->pc = 0x387ff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x387ff4: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x387ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x387ff8: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x387ff8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x387ffc: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x387ffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x388000: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x388000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x388004: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x388004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x388008: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x388008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x38800c: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x38800cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x388010: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x388010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x388014: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x388014u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x388018: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x388018u;
    {
        const bool branch_taken_0x388018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388018u;
        // 0x38801c: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388018) {
            ctx->pc = 0x38807Cu;
            goto label_38807c;
        }
    }
    ctx->pc = 0x388020u;
    // 0x388020: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x388020u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x388024: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x388024u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
label_388028:
    // 0x388028: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x388028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x38802c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x38802cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x388030: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x388030u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x388034: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x388034u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x388038: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x388038u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x38803c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x38803cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x388040: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x388040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x388044: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x388044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x388048: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x388048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x38804c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x38804cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x388050: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x388050u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x388054: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x388054u;
    {
        const bool branch_taken_0x388054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x388058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388054u;
        // 0x388058: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388054) {
            ctx->pc = 0x388064u;
            goto label_388064;
        }
    }
    ctx->pc = 0x38805Cu;
    // 0x38805c: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x38805cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x388060: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x388060u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_388064:
    // 0x388064: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x388064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x388068: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x388068u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x38806c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x38806Cu;
    {
        const bool branch_taken_0x38806c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x388070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38806Cu;
        // 0x388070: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38806c) {
            ctx->pc = 0x388028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_388028;
        }
    }
    ctx->pc = 0x388074u;
    // 0x388074: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x388074u;
    {
        const bool branch_taken_0x388074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388074u;
        // 0x388078: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388074) {
            ctx->pc = 0x388084u;
            goto label_388084;
        }
    }
    ctx->pc = 0x38807Cu;
label_38807c:
    // 0x38807c: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x38807cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x388080: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x388080u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_388084:
    // 0x388084: 0x65450018  daddiu      $a1, $t2, 0x18
    ctx->pc = 0x388084u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)24);
    // 0x388088: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x388088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x38808c: 0x2463e  dsrl32      $t0, $v0, 24
    ctx->pc = 0x38808cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) >> (32 + 24));
    // 0x388090: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x388090u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x388094: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x388094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x388098: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x388098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x38809c: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x38809cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x3880a0: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x3880a0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x3880a4: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3880A4u;
    {
        const bool branch_taken_0x3880a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3880A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3880A4u;
        // 0x3880a8: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3880a4) {
            ctx->pc = 0x38810Cu;
            goto label_38810c;
        }
    }
    ctx->pc = 0x3880ACu;
    // 0x3880ac: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x3880acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x3880b0: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3880b0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3880b4: 0x8583c  dsll32      $t3, $t0, 0
    ctx->pc = 0x3880b4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) << (32 + 0));
label_3880b8:
    // 0x3880b8: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x3880b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x3880bc: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x3880bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x3880c0: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x3880c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x3880c4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3880c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3880c8: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x3880c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3880cc: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x3880ccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3880d0: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x3880d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x3880d4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3880d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3880d8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3880d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3880dc: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x3880dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3880e0: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x3880e0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x3880e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3880E4u;
    {
        const bool branch_taken_0x3880e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3880E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3880E4u;
        // 0x3880e8: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3880e4) {
            ctx->pc = 0x3880F4u;
            goto label_3880f4;
        }
    }
    ctx->pc = 0x3880ECu;
    // 0x3880ec: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x3880ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x3880f0: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x3880f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_3880f4:
    // 0x3880f4: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x3880f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x3880f8: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x3880f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x3880fc: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3880FCu;
    {
        const bool branch_taken_0x3880fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x388100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3880FCu;
        // 0x388100: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3880fc) {
            ctx->pc = 0x3880B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3880b8;
        }
    }
    ctx->pc = 0x388104u;
    // 0x388104: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x388104u;
    {
        const bool branch_taken_0x388104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388104u;
        // 0x388108: 0x65420008  daddiu      $v0, $t2, 0x8 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x388104) {
            ctx->pc = 0x388118u;
            goto label_388118;
        }
    }
    ctx->pc = 0x38810Cu;
label_38810c:
    // 0x38810c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x38810cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388110: 0x8583c  dsll32      $t3, $t0, 0
    ctx->pc = 0x388110u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 8) << (32 + 0));
    // 0x388114: 0x65420008  daddiu      $v0, $t2, 0x8
    ctx->pc = 0x388114u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8);
label_388118:
    // 0x388118: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x388118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x38811c: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x38811cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x388120: 0xfccb0000  sd          $t3, 0x0($a2)
    ctx->pc = 0x388120u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 11));
    // 0x388124: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x388124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x388128: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x388128u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x38812c: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x38812cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
    // 0x388130: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x388130u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x388134: 0x25c3e  dsrl32      $t3, $v0, 16
    ctx->pc = 0x388134u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) >> (32 + 16));
    // 0x388138: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x388138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x38813c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x38813Cu;
    {
        const bool branch_taken_0x38813c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x388140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38813Cu;
        // 0x388140: 0xfce20000  sd          $v0, 0x0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38813c) {
            ctx->pc = 0x3881A4u;
            goto label_3881a4;
        }
    }
    ctx->pc = 0x388144u;
    // 0x388144: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x388144u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x388148: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x388148u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x38814c: 0x0  nop
    ctx->pc = 0x38814cu;
    // NOP
label_388150:
    // 0x388150: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x388150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x388154: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x388154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x388158: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x388158u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x38815c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x38815cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x388160: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x388160u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x388164: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x388164u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x388168: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x388168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x38816c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x38816cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x388170: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x388170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x388174: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x388174u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x388178: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x388178u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x38817c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38817Cu;
    {
        const bool branch_taken_0x38817c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x388180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38817Cu;
        // 0x388180: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38817c) {
            ctx->pc = 0x38818Cu;
            goto label_38818c;
        }
    }
    ctx->pc = 0x388184u;
    // 0x388184: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x388184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x388188: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x388188u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_38818c:
    // 0x38818c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x38818cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x388190: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x388190u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x388194: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x388194u;
    {
        const bool branch_taken_0x388194 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x388198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388194u;
        // 0x388198: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388194) {
            ctx->pc = 0x388150u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_388150;
        }
    }
    ctx->pc = 0x38819Cu;
    // 0x38819c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x38819Cu;
    {
        const bool branch_taken_0x38819c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3881A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38819Cu;
        // 0x3881a0: 0x65420010  daddiu      $v0, $t2, 0x10 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38819c) {
            ctx->pc = 0x3881ACu;
            goto label_3881ac;
        }
    }
    ctx->pc = 0x3881A4u;
label_3881a4:
    // 0x3881a4: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x3881a4u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x3881a8: 0x65420010  daddiu      $v0, $t2, 0x10
    ctx->pc = 0x3881a8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)16);
label_3881ac:
    // 0x3881ac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3881acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3881b0: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x3881b0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x3881b4: 0x3404bc00  ori         $a0, $zero, 0xBC00
    ctx->pc = 0x3881b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48128);
    // 0x3881b8: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x3881b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x3881bc: 0xaccb0008  sw          $t3, 0x8($a2)
    ctx->pc = 0x3881bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 11));
    // 0x3881c0: 0xdcc50000  ld          $a1, 0x0($a2)
    ctx->pc = 0x3881c0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3881c4: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x3881c4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
    // 0x3881c8: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x3881c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3881cc: 0x10a4064d  beq         $a1, $a0, . + 4 + (0x64D << 2)
    ctx->pc = 0x3881CCu;
    {
        const bool branch_taken_0x3881cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x3881D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3881CCu;
        // 0x3881d0: 0xfcc30018  sd          $v1, 0x18($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3881cc) {
            ctx->pc = 0x389B04u;
            goto label_389b04;
        }
    }
    ctx->pc = 0x3881D4u;
    // 0x3881d4: 0x3402be00  ori         $v0, $zero, 0xBE00
    ctx->pc = 0x3881d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48640);
    // 0x3881d8: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x3881d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x3881dc: 0x10a2062d  beq         $a1, $v0, . + 4 + (0x62D << 2)
    ctx->pc = 0x3881DCu;
    {
        const bool branch_taken_0x3881dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x3881dc) {
            ctx->pc = 0x389A94u;
            goto label_389a94;
        }
    }
    ctx->pc = 0x3881E4u;
    // 0x3881e4: 0x3402bf00  ori         $v0, $zero, 0xBF00
    ctx->pc = 0x3881e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48896);
    // 0x3881e8: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x3881e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x3881ec: 0x10a20629  beq         $a1, $v0, . + 4 + (0x629 << 2)
    ctx->pc = 0x3881ECu;
    {
        const bool branch_taken_0x3881ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x3881ec) {
            ctx->pc = 0x389A94u;
            goto label_389a94;
        }
    }
    ctx->pc = 0x3881F4u;
    // 0x3881f4: 0x3402f000  ori         $v0, $zero, 0xF000
    ctx->pc = 0x3881f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x3881f8: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x3881f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x3881fc: 0x10a20625  beq         $a1, $v0, . + 4 + (0x625 << 2)
    ctx->pc = 0x3881FCu;
    {
        const bool branch_taken_0x3881fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x3881fc) {
            ctx->pc = 0x389A94u;
            goto label_389a94;
        }
    }
    ctx->pc = 0x388204u;
    // 0x388204: 0x3402f100  ori         $v0, $zero, 0xF100
    ctx->pc = 0x388204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61696);
    // 0x388208: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x388208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x38820c: 0x10a20621  beq         $a1, $v0, . + 4 + (0x621 << 2)
    ctx->pc = 0x38820Cu;
    {
        const bool branch_taken_0x38820c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x38820c) {
            ctx->pc = 0x389A94u;
            goto label_389a94;
        }
    }
    ctx->pc = 0x388214u;
    // 0x388214: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x388214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x388218: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x388218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x38821c: 0x10a2061d  beq         $a1, $v0, . + 4 + (0x61D << 2)
    ctx->pc = 0x38821Cu;
    {
        const bool branch_taken_0x38821c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x38821c) {
            ctx->pc = 0x389A94u;
            goto label_389a94;
        }
    }
    ctx->pc = 0x388224u;
    // 0x388224: 0x3402f200  ori         $v0, $zero, 0xF200
    ctx->pc = 0x388224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61952);
    // 0x388228: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x388228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x38822c: 0x10a20619  beq         $a1, $v0, . + 4 + (0x619 << 2)
    ctx->pc = 0x38822Cu;
    {
        const bool branch_taken_0x38822c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x38822c) {
            ctx->pc = 0x389A94u;
            goto label_389a94;
        }
    }
    ctx->pc = 0x388234u;
    // 0x388234: 0x3402f800  ori         $v0, $zero, 0xF800
    ctx->pc = 0x388234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63488);
    // 0x388238: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x388238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x38823c: 0x10a20615  beq         $a1, $v0, . + 4 + (0x615 << 2)
    ctx->pc = 0x38823Cu;
    {
        const bool branch_taken_0x38823c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x38823c) {
            ctx->pc = 0x389A94u;
            goto label_389a94;
        }
    }
    ctx->pc = 0x388244u;
    // 0x388244: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x388244u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x388248: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x388248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x38824c: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x38824cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x388250: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x388250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x388254: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x388254u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x388258: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x388258u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x38825c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x38825Cu;
    {
        const bool branch_taken_0x38825c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x388260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38825Cu;
        // 0x388260: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38825c) {
            ctx->pc = 0x3882C4u;
            goto label_3882c4;
        }
    }
    ctx->pc = 0x388264u;
    // 0x388264: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x388264u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x388268: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x388268u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x38826c: 0x0  nop
    ctx->pc = 0x38826cu;
    // NOP
label_388270:
    // 0x388270: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x388270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x388274: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x388274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x388278: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x388278u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x38827c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x38827cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x388280: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x388280u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x388284: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x388284u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x388288: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x388288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x38828c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x38828cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x388290: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x388290u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x388294: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x388294u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x388298: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x388298u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x38829c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38829Cu;
    {
        const bool branch_taken_0x38829c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3882A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38829Cu;
        // 0x3882a0: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38829c) {
            ctx->pc = 0x3882ACu;
            goto label_3882ac;
        }
    }
    ctx->pc = 0x3882A4u;
    // 0x3882a4: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x3882a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x3882a8: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x3882a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_3882ac:
    // 0x3882ac: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x3882acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x3882b0: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x3882b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x3882b4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3882B4u;
    {
        const bool branch_taken_0x3882b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3882B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3882B4u;
        // 0x3882b8: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3882b4) {
            ctx->pc = 0x388270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_388270;
        }
    }
    ctx->pc = 0x3882BCu;
    // 0x3882bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3882BCu;
    {
        const bool branch_taken_0x3882bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3882C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3882BCu;
        // 0x3882c0: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3882bc) {
            ctx->pc = 0x3882CCu;
            goto label_3882cc;
        }
    }
    ctx->pc = 0x3882C4u;
label_3882c4:
    // 0x3882c4: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x3882c4u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x3882c8: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x3882c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_3882cc:
    // 0x3882cc: 0x65450002  daddiu      $a1, $t2, 0x2
    ctx->pc = 0x3882ccu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)2);
    // 0x3882d0: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x3882d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x3882d4: 0x25fbe  dsrl32      $t3, $v0, 30
    ctx->pc = 0x3882d4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) >> (32 + 30));
    // 0x3882d8: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x3882d8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x3882dc: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x3882dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x3882e0: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x3882e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x3882e4: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x3882e4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x3882e8: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x3882e8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x3882ec: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3882ECu;
    {
        const bool branch_taken_0x3882ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3882F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3882ECu;
        // 0x3882f0: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3882ec) {
            ctx->pc = 0x388354u;
            goto label_388354;
        }
    }
    ctx->pc = 0x3882F4u;
    // 0x3882f4: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x3882f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x3882f8: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3882f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3882fc: 0x0  nop
    ctx->pc = 0x3882fcu;
    // NOP
label_388300:
    // 0x388300: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x388300u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x388304: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x388304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x388308: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x388308u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x38830c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x38830cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x388310: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x388310u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x388314: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x388314u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x388318: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x388318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x38831c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x38831cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x388320: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x388320u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x388324: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x388324u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x388328: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x388328u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x38832c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38832Cu;
    {
        const bool branch_taken_0x38832c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x388330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38832Cu;
        // 0x388330: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38832c) {
            ctx->pc = 0x38833Cu;
            goto label_38833c;
        }
    }
    ctx->pc = 0x388334u;
    // 0x388334: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x388334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x388338: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x388338u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_38833c:
    // 0x38833c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x38833cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x388340: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x388340u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x388344: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x388344u;
    {
        const bool branch_taken_0x388344 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x388348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388344u;
        // 0x388348: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388344) {
            ctx->pc = 0x388300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_388300;
        }
    }
    ctx->pc = 0x38834Cu;
    // 0x38834c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x38834Cu;
    {
        const bool branch_taken_0x38834c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38834Cu;
        // 0x388350: 0xaccb000c  sw          $t3, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38834c) {
            ctx->pc = 0x38835Cu;
            goto label_38835c;
        }
    }
    ctx->pc = 0x388354u;
label_388354:
    // 0x388354: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x388354u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388358: 0xaccb000c  sw          $t3, 0xC($a2)
    ctx->pc = 0x388358u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 11));
label_38835c:
    // 0x38835c: 0x65450002  daddiu      $a1, $t2, 0x2
    ctx->pc = 0x38835cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)2);
    // 0x388360: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x388360u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x388364: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x388364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x388368: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x388368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x38836c: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x38836cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x388370: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x388370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x388374: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x388374u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x388378: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x388378u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x38837c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x38837Cu;
    {
        const bool branch_taken_0x38837c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x388380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38837Cu;
        // 0x388380: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38837c) {
            ctx->pc = 0x3883E4u;
            goto label_3883e4;
        }
    }
    ctx->pc = 0x388384u;
    // 0x388384: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x388384u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x388388: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x388388u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38838c: 0x0  nop
    ctx->pc = 0x38838cu;
    // NOP
label_388390:
    // 0x388390: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x388390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x388394: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x388394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x388398: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x388398u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x38839c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x38839cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3883a0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x3883a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3883a4: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x3883a4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3883a8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x3883a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x3883ac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3883acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3883b0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3883b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3883b4: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x3883b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3883b8: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x3883b8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x3883bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3883BCu;
    {
        const bool branch_taken_0x3883bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3883C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3883BCu;
        // 0x3883c0: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3883bc) {
            ctx->pc = 0x3883CCu;
            goto label_3883cc;
        }
    }
    ctx->pc = 0x3883C4u;
    // 0x3883c4: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x3883c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x3883c8: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x3883c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_3883cc:
    // 0x3883cc: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x3883ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x3883d0: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x3883d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x3883d4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3883D4u;
    {
        const bool branch_taken_0x3883d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3883D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3883D4u;
        // 0x3883d8: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3883d4) {
            ctx->pc = 0x388390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_388390;
        }
    }
    ctx->pc = 0x3883DCu;
    // 0x3883dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3883DCu;
    {
        const bool branch_taken_0x3883dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3883E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3883DCu;
        // 0x3883e0: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3883dc) {
            ctx->pc = 0x3883ECu;
            goto label_3883ec;
        }
    }
    ctx->pc = 0x3883E4u;
label_3883e4:
    // 0x3883e4: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3883e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3883e8: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x3883e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_3883ec:
    // 0x3883ec: 0x65450004  daddiu      $a1, $t2, 0x4
    ctx->pc = 0x3883ecu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)4);
    // 0x3883f0: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x3883f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x3883f4: 0x27fbe  dsrl32      $t7, $v0, 30
    ctx->pc = 0x3883f4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 30));
    // 0x3883f8: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x3883f8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x3883fc: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x3883fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x388400: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x388400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
    // 0x388404: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x388404u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x388408: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x388408u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x38840c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x38840Cu;
    {
        const bool branch_taken_0x38840c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x388410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38840Cu;
        // 0x388410: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38840c) {
            ctx->pc = 0x388474u;
            goto label_388474;
        }
    }
    ctx->pc = 0x388414u;
    // 0x388414: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x388414u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x388418: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x388418u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38841c: 0x31eb0002  andi        $t3, $t7, 0x2
    ctx->pc = 0x38841cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)2);
label_388420:
    // 0x388420: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x388420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x388424: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x388424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x388428: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x388428u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x38842c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x38842cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x388430: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x388430u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x388434: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x388434u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x388438: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x388438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x38843c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x38843cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x388440: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x388440u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x388444: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x388444u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x388448: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x388448u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x38844c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38844Cu;
    {
        const bool branch_taken_0x38844c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x388450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38844Cu;
        // 0x388450: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38844c) {
            ctx->pc = 0x38845Cu;
            goto label_38845c;
        }
    }
    ctx->pc = 0x388454u;
    // 0x388454: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x388454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x388458: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x388458u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_38845c:
    // 0x38845c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x38845cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x388460: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x388460u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x388464: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x388464u;
    {
        const bool branch_taken_0x388464 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x388468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388464u;
        // 0x388468: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388464) {
            ctx->pc = 0x388420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_388420;
        }
    }
    ctx->pc = 0x38846Cu;
    // 0x38846c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x38846Cu;
    {
        const bool branch_taken_0x38846c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38846Cu;
        // 0x388470: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38846c) {
            ctx->pc = 0x388480u;
            goto label_388480;
        }
    }
    ctx->pc = 0x388474u;
label_388474:
    // 0x388474: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x388474u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388478: 0x31eb0002  andi        $t3, $t7, 0x2
    ctx->pc = 0x388478u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)2);
    // 0x38847c: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x38847cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_388480:
    // 0x388480: 0x65450002  daddiu      $a1, $t2, 0x2
    ctx->pc = 0x388480u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)2);
    // 0x388484: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x388484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x388488: 0x287fe  dsrl32      $s0, $v0, 31
    ctx->pc = 0x388488u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x38848c: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x38848cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x388490: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x388490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x388494: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x388494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x388498: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x388498u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x38849c: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x38849cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x3884a0: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3884A0u;
    {
        const bool branch_taken_0x3884a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3884A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3884A0u;
        // 0x3884a4: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3884a0) {
            ctx->pc = 0x388504u;
            goto label_388504;
        }
    }
    ctx->pc = 0x3884A8u;
    // 0x3884a8: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x3884a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x3884ac: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3884acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3884b0:
    // 0x3884b0: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x3884b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x3884b4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x3884b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x3884b8: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x3884b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x3884bc: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3884bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3884c0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x3884c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3884c4: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x3884c4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3884c8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x3884c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x3884cc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3884ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3884d0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3884d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3884d4: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x3884d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3884d8: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x3884d8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x3884dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3884DCu;
    {
        const bool branch_taken_0x3884dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3884E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3884DCu;
        // 0x3884e0: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3884dc) {
            ctx->pc = 0x3884ECu;
            goto label_3884ec;
        }
    }
    ctx->pc = 0x3884E4u;
    // 0x3884e4: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x3884e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x3884e8: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x3884e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_3884ec:
    // 0x3884ec: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x3884ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x3884f0: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x3884f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x3884f4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3884F4u;
    {
        const bool branch_taken_0x3884f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3884F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3884F4u;
        // 0x3884f8: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3884f4) {
            ctx->pc = 0x3884B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3884b0;
        }
    }
    ctx->pc = 0x3884FCu;
    // 0x3884fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3884FCu;
    {
        const bool branch_taken_0x3884fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3884FCu;
        // 0x388500: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3884fc) {
            ctx->pc = 0x38850Cu;
            goto label_38850c;
        }
    }
    ctx->pc = 0x388504u;
label_388504:
    // 0x388504: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x388504u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388508: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x388508u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_38850c:
    // 0x38850c: 0x65450001  daddiu      $a1, $t2, 0x1
    ctx->pc = 0x38850cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x388510: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x388510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x388514: 0x2cf3e  dsrl32      $t9, $v0, 28
    ctx->pc = 0x388514u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x388518: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x388518u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x38851c: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x38851cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x388520: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x388520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x388524: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x388524u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x388528: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x388528u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x38852c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x38852Cu;
    {
        const bool branch_taken_0x38852c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x388530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38852Cu;
        // 0x388530: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38852c) {
            ctx->pc = 0x388594u;
            goto label_388594;
        }
    }
    ctx->pc = 0x388534u;
    // 0x388534: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x388534u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x388538: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x388538u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38853c: 0x0  nop
    ctx->pc = 0x38853cu;
    // NOP
label_388540:
    // 0x388540: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x388540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x388544: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x388544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x388548: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x388548u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x38854c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x38854cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x388550: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x388550u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x388554: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x388554u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x388558: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x388558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x38855c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x38855cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x388560: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x388560u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x388564: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x388564u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x388568: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x388568u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x38856c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38856Cu;
    {
        const bool branch_taken_0x38856c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x388570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38856Cu;
        // 0x388570: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38856c) {
            ctx->pc = 0x38857Cu;
            goto label_38857c;
        }
    }
    ctx->pc = 0x388574u;
    // 0x388574: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x388574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x388578: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x388578u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_38857c:
    // 0x38857c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x38857cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x388580: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x388580u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x388584: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x388584u;
    {
        const bool branch_taken_0x388584 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x388588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388584u;
        // 0x388588: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388584) {
            ctx->pc = 0x388540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_388540;
        }
    }
    ctx->pc = 0x38858Cu;
    // 0x38858c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x38858Cu;
    {
        const bool branch_taken_0x38858c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38858Cu;
        // 0x388590: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38858c) {
            ctx->pc = 0x38859Cu;
            goto label_38859c;
        }
    }
    ctx->pc = 0x388594u;
label_388594:
    // 0x388594: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x388594u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388598: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x388598u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_38859c:
    // 0x38859c: 0x65450004  daddiu      $a1, $t2, 0x4
    ctx->pc = 0x38859cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)4);
    // 0x3885a0: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x3885a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x3885a4: 0x28ffe  dsrl32      $s1, $v0, 31
    ctx->pc = 0x3885a4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x3885a8: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x3885a8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x3885ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3885acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3885b0: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x3885b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x3885b4: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x3885b4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x3885b8: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x3885b8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x3885bc: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3885BCu;
    {
        const bool branch_taken_0x3885bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3885C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3885BCu;
        // 0x3885c0: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3885bc) {
            ctx->pc = 0x388624u;
            goto label_388624;
        }
    }
    ctx->pc = 0x3885C4u;
    // 0x3885c4: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x3885c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x3885c8: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3885c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3885cc: 0x0  nop
    ctx->pc = 0x3885ccu;
    // NOP
label_3885d0:
    // 0x3885d0: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x3885d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x3885d4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x3885d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x3885d8: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x3885d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x3885dc: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3885dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3885e0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x3885e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3885e4: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x3885e4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3885e8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x3885e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x3885ec: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3885ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3885f0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3885f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3885f4: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x3885f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3885f8: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x3885f8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x3885fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3885FCu;
    {
        const bool branch_taken_0x3885fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x388600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3885FCu;
        // 0x388600: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3885fc) {
            ctx->pc = 0x38860Cu;
            goto label_38860c;
        }
    }
    ctx->pc = 0x388604u;
    // 0x388604: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x388604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x388608: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x388608u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_38860c:
    // 0x38860c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x38860cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x388610: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x388610u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x388614: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x388614u;
    {
        const bool branch_taken_0x388614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x388618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388614u;
        // 0x388618: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388614) {
            ctx->pc = 0x3885D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3885d0;
        }
    }
    ctx->pc = 0x38861Cu;
    // 0x38861c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x38861Cu;
    {
        const bool branch_taken_0x38861c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38861Cu;
        // 0x388620: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38861c) {
            ctx->pc = 0x38862Cu;
            goto label_38862c;
        }
    }
    ctx->pc = 0x388624u;
label_388624:
    // 0x388624: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x388624u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388628: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x388628u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_38862c:
    // 0x38862c: 0x65450001  daddiu      $a1, $t2, 0x1
    ctx->pc = 0x38862cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x388630: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x388630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x388634: 0x2963e  dsrl32      $s2, $v0, 24
    ctx->pc = 0x388634u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) >> (32 + 24));
    // 0x388638: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x388638u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x38863c: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x38863cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x388640: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x388640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x388644: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x388644u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x388648: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x388648u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x38864c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x38864Cu;
    {
        const bool branch_taken_0x38864c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x388650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38864Cu;
        // 0x388650: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38864c) {
            ctx->pc = 0x3886B4u;
            goto label_3886b4;
        }
    }
    ctx->pc = 0x388654u;
    // 0x388654: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x388654u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x388658: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x388658u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38865c: 0x0  nop
    ctx->pc = 0x38865cu;
    // NOP
label_388660:
    // 0x388660: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x388660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x388664: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x388664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x388668: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x388668u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x38866c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x38866cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x388670: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x388670u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x388674: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x388674u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x388678: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x388678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x38867c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x38867cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x388680: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x388680u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x388684: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x388684u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x388688: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x388688u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x38868c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38868Cu;
    {
        const bool branch_taken_0x38868c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x388690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38868Cu;
        // 0x388690: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38868c) {
            ctx->pc = 0x38869Cu;
            goto label_38869c;
        }
    }
    ctx->pc = 0x388694u;
    // 0x388694: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x388694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x388698: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x388698u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_38869c:
    // 0x38869c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x38869cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x3886a0: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x3886a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x3886a4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3886A4u;
    {
        const bool branch_taken_0x3886a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3886A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3886A4u;
        // 0x3886a8: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3886a4) {
            ctx->pc = 0x388660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_388660;
        }
    }
    ctx->pc = 0x3886ACu;
    // 0x3886ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3886ACu;
    {
        const bool branch_taken_0x3886ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3886B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3886ACu;
        // 0x3886b0: 0x65450008  daddiu      $a1, $t2, 0x8 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3886ac) {
            ctx->pc = 0x3886BCu;
            goto label_3886bc;
        }
    }
    ctx->pc = 0x3886B4u;
label_3886b4:
    // 0x3886b4: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3886b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3886b8: 0x65450008  daddiu      $a1, $t2, 0x8
    ctx->pc = 0x3886b8u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8);
label_3886bc:
    // 0x3886bc: 0x5c03c  dsll32      $t8, $a1, 0
    ctx->pc = 0x3886bcu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3886c0: 0x18c03f  dsra32      $t8, $t8, 0
    ctx->pc = 0x3886c0u;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 24) >> (32 + 0));
    // 0x3886c4: 0x11600103  beqz        $t3, . + 4 + (0x103 << 2)
    ctx->pc = 0x3886C4u;
    {
        const bool branch_taken_0x3886c4 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3886C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3886C4u;
        // 0x3886c8: 0xfce50008  sd          $a1, 0x8($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3886c4) {
            ctx->pc = 0x388AD4u;
            goto label_388ad4;
        }
    }
    ctx->pc = 0x3886CCu;
    // 0x3886cc: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x3886ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3886d0: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x3886d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x3886d4: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x3886d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x3886d8: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x3886d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x3886dc: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x3886dcu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x3886e0: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x3886e0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x3886e4: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3886E4u;
    {
        const bool branch_taken_0x3886e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3886E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3886E4u;
        // 0x3886e8: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3886e4) {
            ctx->pc = 0x38874Cu;
            goto label_38874c;
        }
    }
    ctx->pc = 0x3886ECu;
    // 0x3886ec: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x3886ecu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x3886f0: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3886f0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3886f4: 0x0  nop
    ctx->pc = 0x3886f4u;
    // NOP
label_3886f8:
    // 0x3886f8: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x3886f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x3886fc: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x3886fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x388700: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x388700u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_388704:
    // 0x388704: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x388704u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x388708: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x388708u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x38870c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x38870cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x388710: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x388710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x388714: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x388714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x388718: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x388718u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x38871c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x38871cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x388720: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x388720u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x388724: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x388724u;
    {
        const bool branch_taken_0x388724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x388728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388724u;
        // 0x388728: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388724) {
            ctx->pc = 0x388734u;
            goto label_388734;
        }
    }
    ctx->pc = 0x38872Cu;
    // 0x38872c: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x38872cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x388730: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x388730u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_388734:
    // 0x388734: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x388734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x388738: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x388738u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x38873c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x38873Cu;
    {
        const bool branch_taken_0x38873c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x388740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38873Cu;
        // 0x388740: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38873c) {
            ctx->pc = 0x3886F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3886f8;
        }
    }
    ctx->pc = 0x388744u;
    // 0x388744: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x388744u;
    {
        const bool branch_taken_0x388744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388744u;
        // 0x388748: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388744) {
            ctx->pc = 0x388754u;
            goto label_388754;
        }
    }
    ctx->pc = 0x38874Cu;
label_38874c:
    // 0x38874c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x38874cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388750: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x388750u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_388754:
    // 0x388754: 0x65480004  daddiu      $t0, $t2, 0x4
    ctx->pc = 0x388754u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)4);
    // 0x388758: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x388758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x38875c: 0x22f7e  dsrl32      $a1, $v0, 29
    ctx->pc = 0x38875cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 29));
    // 0x388760: 0xfce80008  sd          $t0, 0x8($a3)
    ctx->pc = 0x388760u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 8));
    // 0x388764: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x388764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x388768: 0x210f8  dsll        $v0, $v0, 3
    ctx->pc = 0x388768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 3);
    // 0x38876c: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x38876cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x388770: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x388770u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x388774: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x388774u;
    {
        const bool branch_taken_0x388774 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x388778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388774u;
        // 0x388778: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388774) {
            ctx->pc = 0x3887E4u;
            goto label_3887e4;
        }
    }
    ctx->pc = 0x38877Cu;
    // 0x38877c: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x38877cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x388780: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x388780u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388784: 0x56882  srl         $t5, $a1, 2
    ctx->pc = 0x388784u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x388788: 0x56780  sll         $t4, $a1, 30
    ctx->pc = 0x388788u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 5), 30));
    // 0x38878c: 0x0  nop
    ctx->pc = 0x38878cu;
    // NOP
label_388790:
    // 0x388790: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x388790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x388794: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x388794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x388798: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x388798u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x38879c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x38879cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3887a0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x3887a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3887a4: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x3887a4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3887a8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x3887a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x3887ac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3887acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3887b0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3887b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3887b4: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x3887b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3887b8: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x3887b8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x3887bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3887BCu;
    {
        const bool branch_taken_0x3887bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3887C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3887BCu;
        // 0x3887c0: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3887bc) {
            ctx->pc = 0x3887CCu;
            goto label_3887cc;
        }
    }
    ctx->pc = 0x3887C4u;
    // 0x3887c4: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x3887c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x3887c8: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x3887c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_3887cc:
    // 0x3887cc: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x3887ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x3887d0: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x3887d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x3887d4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3887D4u;
    {
        const bool branch_taken_0x3887d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3887D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3887D4u;
        // 0x3887d8: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3887d4) {
            ctx->pc = 0x388790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_388790;
        }
    }
    ctx->pc = 0x3887DCu;
    // 0x3887dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3887DCu;
    {
        const bool branch_taken_0x3887dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3887E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3887DCu;
        // 0x3887e0: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3887dc) {
            ctx->pc = 0x3887F4u;
            goto label_3887f4;
        }
    }
    ctx->pc = 0x3887E4u;
label_3887e4:
    // 0x3887e4: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x3887e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3887e8: 0x56882  srl         $t5, $a1, 2
    ctx->pc = 0x3887e8u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x3887ec: 0x56780  sll         $t4, $a1, 30
    ctx->pc = 0x3887ecu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 5), 30));
    // 0x3887f0: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x3887f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_3887f4:
    // 0x3887f4: 0x65450003  daddiu      $a1, $t2, 0x3
    ctx->pc = 0x3887f4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)3);
    // 0x3887f8: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x3887f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x3887fc: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x3887fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x388800: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x388800u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x388804: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x388804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x388808: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x388808u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x38880c: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x38880cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x388810: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x388810u;
    {
        const bool branch_taken_0x388810 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x388814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388810u;
        // 0x388814: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388810) {
            ctx->pc = 0x388874u;
            goto label_388874;
        }
    }
    ctx->pc = 0x388818u;
    // 0x388818: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x388818u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x38881c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x38881cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_388820:
    // 0x388820: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x388820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x388824: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x388824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x388828: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x388828u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x38882c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x38882cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x388830: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x388830u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x388834: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x388834u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x388838: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x388838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x38883c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x38883cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x388840: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x388840u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x388844: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x388844u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x388848: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x388848u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x38884c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38884Cu;
    {
        const bool branch_taken_0x38884c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x388850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38884Cu;
        // 0x388850: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38884c) {
            ctx->pc = 0x38885Cu;
            goto label_38885c;
        }
    }
    ctx->pc = 0x388854u;
    // 0x388854: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x388854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x388858: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x388858u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_38885c:
    // 0x38885c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x38885cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x388860: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x388860u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x388864: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x388864u;
    {
        const bool branch_taken_0x388864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x388868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388864u;
        // 0x388868: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388864) {
            ctx->pc = 0x388820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_388820;
        }
    }
    ctx->pc = 0x38886Cu;
    // 0x38886c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x38886Cu;
    {
        const bool branch_taken_0x38886c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38886Cu;
        // 0x388870: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38886c) {
            ctx->pc = 0x38887Cu;
            goto label_38887c;
        }
    }
    ctx->pc = 0x388874u;
label_388874:
    // 0x388874: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x388874u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388878: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x388878u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_38887c:
    // 0x38887c: 0x65450001  daddiu      $a1, $t2, 0x1
    ctx->pc = 0x38887cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x388880: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x388880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x388884: 0x2447e  dsrl32      $t0, $v0, 17
    ctx->pc = 0x388884u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) >> (32 + 17));
    // 0x388888: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x388888u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x38888c: 0x2463fff1  addiu       $v1, $v1, -0xF
    ctx->pc = 0x38888cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967281));
    // 0x388890: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x388890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x388894: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x388894u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x388898: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x388898u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x38889c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x38889Cu;
    {
        const bool branch_taken_0x38889c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3888A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38889Cu;
        // 0x3888a0: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38889c) {
            ctx->pc = 0x388904u;
            goto label_388904;
        }
    }
    ctx->pc = 0x3888A4u;
    // 0x3888a4: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x3888a4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x3888a8: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3888a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3888ac: 0x85bc0  sll         $t3, $t0, 15
    ctx->pc = 0x3888acu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 8), 15));
label_3888b0:
    // 0x3888b0: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x3888b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x3888b4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x3888b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x3888b8: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x3888b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x3888bc: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3888bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3888c0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x3888c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3888c4: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x3888c4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3888c8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x3888c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x3888cc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3888ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3888d0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3888d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3888d4: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x3888d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3888d8: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x3888d8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x3888dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3888DCu;
    {
        const bool branch_taken_0x3888dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3888E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3888DCu;
        // 0x3888e0: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3888dc) {
            ctx->pc = 0x3888ECu;
            goto label_3888ec;
        }
    }
    ctx->pc = 0x3888E4u;
    // 0x3888e4: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x3888e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x3888e8: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x3888e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_3888ec:
    // 0x3888ec: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x3888ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x3888f0: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x3888f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x3888f4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3888F4u;
    {
        const bool branch_taken_0x3888f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3888F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3888F4u;
        // 0x3888f8: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3888f4) {
            ctx->pc = 0x3888B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3888b0;
        }
    }
    ctx->pc = 0x3888FCu;
    // 0x3888fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3888FCu;
    {
        const bool branch_taken_0x3888fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3888FCu;
        // 0x388900: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3888fc) {
            ctx->pc = 0x388910u;
            goto label_388910;
        }
    }
    ctx->pc = 0x388904u;
label_388904:
    // 0x388904: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x388904u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388908: 0x85bc0  sll         $t3, $t0, 15
    ctx->pc = 0x388908u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 8), 15));
    // 0x38890c: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x38890cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_388910:
    // 0x388910: 0x6545000f  daddiu      $a1, $t2, 0xF
    ctx->pc = 0x388910u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)15);
    // 0x388914: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x388914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x388918: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x388918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x38891c: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x38891cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x388920: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x388920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x388924: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x388924u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x388928: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x388928u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x38892c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x38892Cu;
    {
        const bool branch_taken_0x38892c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x388930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38892Cu;
        // 0x388930: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38892c) {
            ctx->pc = 0x388994u;
            goto label_388994;
        }
    }
    ctx->pc = 0x388934u;
    // 0x388934: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x388934u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x388938: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x388938u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38893c: 0x0  nop
    ctx->pc = 0x38893cu;
    // NOP
label_388940:
    // 0x388940: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x388940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x388944: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x388944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x388948: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x388948u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x38894c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x38894cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x388950: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x388950u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x388954: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x388954u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x388958: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x388958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x38895c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x38895cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x388960: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x388960u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x388964: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x388964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x388968: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x388968u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x38896c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38896Cu;
    {
        const bool branch_taken_0x38896c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x388970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38896Cu;
        // 0x388970: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38896c) {
            ctx->pc = 0x38897Cu;
            goto label_38897c;
        }
    }
    ctx->pc = 0x388974u;
    // 0x388974: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x388974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x388978: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x388978u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_38897c:
    // 0x38897c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x38897cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x388980: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x388980u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x388984: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x388984u;
    {
        const bool branch_taken_0x388984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x388988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388984u;
        // 0x388988: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388984) {
            ctx->pc = 0x388940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_388940;
        }
    }
    ctx->pc = 0x38898Cu;
    // 0x38898c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x38898Cu;
    {
        const bool branch_taken_0x38898c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38898Cu;
        // 0x388990: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38898c) {
            ctx->pc = 0x38899Cu;
            goto label_38899c;
        }
    }
    ctx->pc = 0x388994u;
label_388994:
    // 0x388994: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x388994u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388998: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x388998u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_38899c:
    // 0x38899c: 0x65450001  daddiu      $a1, $t2, 0x1
    ctx->pc = 0x38899cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x3889a0: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x3889a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x3889a4: 0x2747e  dsrl32      $t6, $v0, 17
    ctx->pc = 0x3889a4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) >> (32 + 17));
    // 0x3889a8: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x3889a8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x3889ac: 0x2463fff1  addiu       $v1, $v1, -0xF
    ctx->pc = 0x3889acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967281));
    // 0x3889b0: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x3889b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x3889b4: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x3889b4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x3889b8: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x3889b8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x3889bc: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3889BCu;
    {
        const bool branch_taken_0x3889bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3889C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3889BCu;
        // 0x3889c0: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3889bc) {
            ctx->pc = 0x388A24u;
            goto label_388a24;
        }
    }
    ctx->pc = 0x3889C4u;
    // 0x3889c4: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x3889c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x3889c8: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3889c8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3889cc:
    // 0x3889cc: 0x0  nop
    ctx->pc = 0x3889ccu;
    // NOP
label_3889d0:
    // 0x3889d0: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x3889d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x3889d4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x3889d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x3889d8: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x3889d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x3889dc: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3889dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3889e0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x3889e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3889e4: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x3889e4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3889e8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x3889e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x3889ec: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3889ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3889f0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3889f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3889f4: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x3889f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3889f8: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x3889f8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x3889fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3889FCu;
    {
        const bool branch_taken_0x3889fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x388A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3889FCu;
        // 0x388a00: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3889fc) {
            ctx->pc = 0x388A0Cu;
            goto label_388a0c;
        }
    }
    ctx->pc = 0x388A04u;
    // 0x388a04: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x388a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x388a08: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x388a08u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_388a0c:
    // 0x388a0c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x388a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x388a10: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x388a10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x388a14: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x388A14u;
    {
        const bool branch_taken_0x388a14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x388A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388A14u;
        // 0x388a18: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388a14) {
            ctx->pc = 0x3889D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3889d0;
        }
    }
    ctx->pc = 0x388A1Cu;
    // 0x388a1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x388A1Cu;
    {
        const bool branch_taken_0x388a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388A1Cu;
        // 0x388a20: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388a1c) {
            ctx->pc = 0x388A2Cu;
            goto label_388a2c;
        }
    }
    ctx->pc = 0x388A24u;
label_388a24:
    // 0x388a24: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x388a24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388a28: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x388a28u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_388a2c:
    // 0x388a2c: 0x6545000f  daddiu      $a1, $t2, 0xF
    ctx->pc = 0x388a2cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)15);
    // 0x388a30: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x388a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x388a34: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x388a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x388a38: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x388a38u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x388a3c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x388a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x388a40: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x388a40u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x388a44: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x388a44u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x388a48: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x388A48u;
    {
        const bool branch_taken_0x388a48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x388A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388A48u;
        // 0x388a4c: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388a48) {
            ctx->pc = 0x388AACu;
            goto label_388aac;
        }
    }
    ctx->pc = 0x388A50u;
    // 0x388a50: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x388a50u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x388a54: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x388a54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_388a58:
    // 0x388a58: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x388a58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x388a5c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x388a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x388a60: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x388a60u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x388a64: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x388a64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x388a68: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x388a68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x388a6c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x388a6cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x388a70: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x388a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x388a74: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x388a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x388a78: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x388a78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x388a7c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x388a7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x388a80: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x388a80u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x388a84: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x388A84u;
    {
        const bool branch_taken_0x388a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x388A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388A84u;
        // 0x388a88: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388a84) {
            ctx->pc = 0x388A94u;
            goto label_388a94;
        }
    }
    ctx->pc = 0x388A8Cu;
    // 0x388a8c: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x388a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x388a90: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x388a90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_388a94:
    // 0x388a94: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x388a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x388a98: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x388a98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x388a9c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x388A9Cu;
    {
        const bool branch_taken_0x388a9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x388AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388A9Cu;
        // 0x388aa0: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388a9c) {
            ctx->pc = 0x388A58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_388a58;
        }
    }
    ctx->pc = 0x388AA4u;
    // 0x388aa4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x388AA4u;
    {
        const bool branch_taken_0x388aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388AA4u;
        // 0x388aa8: 0x18b1025  or          $v0, $t4, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388aa4) {
            ctx->pc = 0x388AB4u;
            goto label_388ab4;
        }
    }
    ctx->pc = 0x388AACu;
label_388aac:
    // 0x388aac: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x388aacu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388ab0: 0x18b1025  or          $v0, $t4, $t3
    ctx->pc = 0x388ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
label_388ab4:
    // 0x388ab4: 0x65440001  daddiu      $a0, $t2, 0x1
    ctx->pc = 0x388ab4u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x388ab8: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x388ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x388abc: 0xd183c  dsll32      $v1, $t5, 0
    ctx->pc = 0x388abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) << (32 + 0));
    // 0x388ac0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x388ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x388ac4: 0xfce40008  sd          $a0, 0x8($a3)
    ctx->pc = 0x388ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 4));
    // 0x388ac8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x388ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x388acc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x388accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x388ad0: 0xfcc30010  sd          $v1, 0x10($a2)
    ctx->pc = 0x388ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 3));
label_388ad4:
    // 0x388ad4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x388ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x388ad8: 0x15e20103  bne         $t7, $v0, . + 4 + (0x103 << 2)
    ctx->pc = 0x388AD8u;
    {
        const bool branch_taken_0x388ad8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 2));
        ctx->pc = 0x388ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388AD8u;
        // 0x388adc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388ad8) {
            ctx->pc = 0x388EE8u;
            goto label_388ee8;
        }
    }
    ctx->pc = 0x388AE0u;
    // 0x388ae0: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x388ae0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_388ae4:
    // 0x388ae4: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x388ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x388ae8: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x388ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x388aec: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x388aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x388af0: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x388af0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x388af4: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x388af4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x388af8: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x388AF8u;
    {
        const bool branch_taken_0x388af8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x388AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388AF8u;
        // 0x388afc: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388af8) {
            ctx->pc = 0x388B5Cu;
            goto label_388b5c;
        }
    }
    ctx->pc = 0x388B00u;
    // 0x388b00: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x388b00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x388b04: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x388b04u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
label_388b08:
    // 0x388b08: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x388b08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x388b0c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x388b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x388b10: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x388b10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x388b14: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x388b14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x388b18: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x388b18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x388b1c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x388b1cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x388b20: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x388b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x388b24: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x388b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x388b28: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x388b28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x388b2c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x388b2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x388b30: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x388b30u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x388b34: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x388B34u;
    {
        const bool branch_taken_0x388b34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x388B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388B34u;
        // 0x388b38: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388b34) {
            ctx->pc = 0x388B44u;
            goto label_388b44;
        }
    }
    ctx->pc = 0x388B3Cu;
    // 0x388b3c: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x388b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x388b40: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x388b40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_388b44:
    // 0x388b44: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x388b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x388b48: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x388b48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x388b4c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x388B4Cu;
    {
        const bool branch_taken_0x388b4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x388B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388B4Cu;
        // 0x388b50: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388b4c) {
            ctx->pc = 0x388B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_388b08;
        }
    }
    ctx->pc = 0x388B54u;
    // 0x388b54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x388B54u;
    {
        const bool branch_taken_0x388b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388B54u;
        // 0x388b58: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388b54) {
            ctx->pc = 0x388B64u;
            goto label_388b64;
        }
    }
    ctx->pc = 0x388B5Cu;
label_388b5c:
    // 0x388b5c: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x388b5cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x388b60: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x388b60u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_388b64:
    // 0x388b64: 0x65480004  daddiu      $t0, $t2, 0x4
    ctx->pc = 0x388b64u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)4);
    // 0x388b68: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x388b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x388b6c: 0x22f7e  dsrl32      $a1, $v0, 29
    ctx->pc = 0x388b6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 29));
    // 0x388b70: 0xfce80008  sd          $t0, 0x8($a3)
    ctx->pc = 0x388b70u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 8));
    // 0x388b74: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x388b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x388b78: 0x210f8  dsll        $v0, $v0, 3
    ctx->pc = 0x388b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 3);
    // 0x388b7c: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x388b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x388b80: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x388b80u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x388b84: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x388B84u;
    {
        const bool branch_taken_0x388b84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x388B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388B84u;
        // 0x388b88: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388b84) {
            ctx->pc = 0x388BF4u;
            goto label_388bf4;
        }
    }
    ctx->pc = 0x388B8Cu;
    // 0x388b8c: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x388b8cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x388b90: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x388b90u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388b94: 0x56882  srl         $t5, $a1, 2
    ctx->pc = 0x388b94u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x388b98: 0x56780  sll         $t4, $a1, 30
    ctx->pc = 0x388b98u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 5), 30));
    // 0x388b9c: 0x0  nop
    ctx->pc = 0x388b9cu;
    // NOP
label_388ba0:
    // 0x388ba0: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x388ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x388ba4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x388ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x388ba8: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x388ba8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x388bac: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x388bacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x388bb0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x388bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x388bb4: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x388bb4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x388bb8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x388bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x388bbc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x388bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x388bc0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x388bc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x388bc4: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x388bc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x388bc8: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x388bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x388bcc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x388BCCu;
    {
        const bool branch_taken_0x388bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x388BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388BCCu;
        // 0x388bd0: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388bcc) {
            ctx->pc = 0x388BDCu;
            goto label_388bdc;
        }
    }
    ctx->pc = 0x388BD4u;
    // 0x388bd4: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x388bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x388bd8: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x388bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_388bdc:
    // 0x388bdc: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x388bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x388be0: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x388be0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x388be4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x388BE4u;
    {
        const bool branch_taken_0x388be4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x388BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388BE4u;
        // 0x388be8: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388be4) {
            ctx->pc = 0x388BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_388ba0;
        }
    }
    ctx->pc = 0x388BECu;
    // 0x388bec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x388BECu;
    {
        const bool branch_taken_0x388bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388BECu;
        // 0x388bf0: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388bec) {
            ctx->pc = 0x388C04u;
            goto label_388c04;
        }
    }
    ctx->pc = 0x388BF4u;
label_388bf4:
    // 0x388bf4: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x388bf4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388bf8: 0x56882  srl         $t5, $a1, 2
    ctx->pc = 0x388bf8u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x388bfc: 0x56780  sll         $t4, $a1, 30
    ctx->pc = 0x388bfcu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 5), 30));
    // 0x388c00: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x388c00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_388c04:
    // 0x388c04: 0x65450003  daddiu      $a1, $t2, 0x3
    ctx->pc = 0x388c04u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)3);
    // 0x388c08: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x388c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x388c0c: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x388c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x388c10: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x388c10u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x388c14: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x388c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x388c18: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x388c18u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x388c1c: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x388c1cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x388c20: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x388C20u;
    {
        const bool branch_taken_0x388c20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x388C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388C20u;
        // 0x388c24: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388c20) {
            ctx->pc = 0x388C84u;
            goto label_388c84;
        }
    }
    ctx->pc = 0x388C28u;
    // 0x388c28: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x388c28u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x388c2c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x388c2cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_388c30:
    // 0x388c30: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x388c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x388c34: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x388c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x388c38: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x388c38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x388c3c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x388c3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x388c40: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x388c40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x388c44: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x388c44u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x388c48: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x388c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x388c4c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x388c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x388c50: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x388c50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x388c54: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x388c54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x388c58: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x388c58u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x388c5c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x388C5Cu;
    {
        const bool branch_taken_0x388c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x388C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388C5Cu;
        // 0x388c60: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388c5c) {
            ctx->pc = 0x388C6Cu;
            goto label_388c6c;
        }
    }
    ctx->pc = 0x388C64u;
    // 0x388c64: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x388c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x388c68: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x388c68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_388c6c:
    // 0x388c6c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x388c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x388c70: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x388c70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x388c74: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x388C74u;
    {
        const bool branch_taken_0x388c74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x388C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388C74u;
        // 0x388c78: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388c74) {
            ctx->pc = 0x388C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_388c30;
        }
    }
    ctx->pc = 0x388C7Cu;
    // 0x388c7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x388C7Cu;
    {
        const bool branch_taken_0x388c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388C7Cu;
        // 0x388c80: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388c7c) {
            ctx->pc = 0x388C8Cu;
            goto label_388c8c;
        }
    }
    ctx->pc = 0x388C84u;
label_388c84:
    // 0x388c84: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x388c84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388c88: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x388c88u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_388c8c:
    // 0x388c8c: 0x65450001  daddiu      $a1, $t2, 0x1
    ctx->pc = 0x388c8cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x388c90: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x388c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_388c94:
    // 0x388c94: 0x2447e  dsrl32      $t0, $v0, 17
    ctx->pc = 0x388c94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) >> (32 + 17));
    // 0x388c98: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x388c98u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x388c9c: 0x2463fff1  addiu       $v1, $v1, -0xF
    ctx->pc = 0x388c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967281));
    // 0x388ca0: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x388ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x388ca4: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x388ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x388ca8: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x388ca8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x388cac: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x388CACu;
    {
        const bool branch_taken_0x388cac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x388CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388CACu;
        // 0x388cb0: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388cac) {
            ctx->pc = 0x388D14u;
            goto label_388d14;
        }
    }
    ctx->pc = 0x388CB4u;
    // 0x388cb4: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x388cb4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x388cb8: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x388cb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388cbc: 0x85bc0  sll         $t3, $t0, 15
    ctx->pc = 0x388cbcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 8), 15));
label_388cc0:
    // 0x388cc0: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x388cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x388cc4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x388cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x388cc8: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x388cc8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x388ccc: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x388cccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x388cd0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x388cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x388cd4: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x388cd4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x388cd8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x388cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x388cdc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x388cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x388ce0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x388ce0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x388ce4: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x388ce4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x388ce8: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x388ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x388cec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x388CECu;
    {
        const bool branch_taken_0x388cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x388CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388CECu;
        // 0x388cf0: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388cec) {
            ctx->pc = 0x388CFCu;
            goto label_388cfc;
        }
    }
    ctx->pc = 0x388CF4u;
    // 0x388cf4: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x388cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x388cf8: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x388cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_388cfc:
    // 0x388cfc: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x388cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x388d00: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x388d00u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x388d04: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x388D04u;
    {
        const bool branch_taken_0x388d04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x388D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D04u;
        // 0x388d08: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388d04) {
            ctx->pc = 0x388CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_388cc0;
        }
    }
    ctx->pc = 0x388D0Cu;
    // 0x388d0c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x388D0Cu;
    {
        const bool branch_taken_0x388d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D0Cu;
        // 0x388d10: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388d0c) {
            ctx->pc = 0x388D20u;
            goto label_388d20;
        }
    }
    ctx->pc = 0x388D14u;
label_388d14:
    // 0x388d14: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x388d14u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388d18: 0x85bc0  sll         $t3, $t0, 15
    ctx->pc = 0x388d18u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 8), 15));
    // 0x388d1c: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x388d1cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_388d20:
    // 0x388d20: 0x6545000f  daddiu      $a1, $t2, 0xF
    ctx->pc = 0x388d20u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)15);
    // 0x388d24: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x388d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x388d28: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x388d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x388d2c: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x388d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x388d30: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x388d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x388d34: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x388d34u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x388d38: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x388d38u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x388d3c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x388D3Cu;
    {
        const bool branch_taken_0x388d3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x388D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D3Cu;
        // 0x388d40: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388d3c) {
            ctx->pc = 0x388DA4u;
            goto label_388da4;
        }
    }
    ctx->pc = 0x388D44u;
    // 0x388d44: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x388d44u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x388d48: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x388d48u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388d4c: 0x0  nop
    ctx->pc = 0x388d4cu;
    // NOP
label_388d50:
    // 0x388d50: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x388d50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x388d54: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x388d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x388d58: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x388d58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x388d5c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x388d5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x388d60: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x388d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x388d64: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x388d64u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x388d68: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x388d68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x388d6c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x388d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x388d70: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x388d70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x388d74: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x388d74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x388d78: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x388d78u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x388d7c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x388D7Cu;
    {
        const bool branch_taken_0x388d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x388D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D7Cu;
        // 0x388d80: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388d7c) {
            ctx->pc = 0x388D8Cu;
            goto label_388d8c;
        }
    }
    ctx->pc = 0x388D84u;
    // 0x388d84: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x388d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x388d88: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x388d88u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_388d8c:
    // 0x388d8c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x388d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x388d90: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x388d90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x388d94: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x388D94u;
    {
        const bool branch_taken_0x388d94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x388D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D94u;
        // 0x388d98: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388d94) {
            ctx->pc = 0x388D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_388d50;
        }
    }
    ctx->pc = 0x388D9Cu;
    // 0x388d9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x388D9Cu;
    {
        const bool branch_taken_0x388d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388D9Cu;
        // 0x388da0: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388d9c) {
            ctx->pc = 0x388DACu;
            goto label_388dac;
        }
    }
    ctx->pc = 0x388DA4u;
label_388da4:
    // 0x388da4: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x388da4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388da8: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x388da8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_388dac:
    // 0x388dac: 0x65450001  daddiu      $a1, $t2, 0x1
    ctx->pc = 0x388dacu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x388db0: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x388db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x388db4: 0x2747e  dsrl32      $t6, $v0, 17
    ctx->pc = 0x388db4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) >> (32 + 17));
    // 0x388db8: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x388db8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x388dbc: 0x2463fff1  addiu       $v1, $v1, -0xF
    ctx->pc = 0x388dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967281));
    // 0x388dc0: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x388dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x388dc4: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x388dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x388dc8: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x388dc8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x388dcc: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x388DCCu;
    {
        const bool branch_taken_0x388dcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x388DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388DCCu;
        // 0x388dd0: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388dcc) {
            ctx->pc = 0x388E34u;
            goto label_388e34;
        }
    }
    ctx->pc = 0x388DD4u;
    // 0x388dd4: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x388dd4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x388dd8: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x388dd8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388ddc: 0x0  nop
    ctx->pc = 0x388ddcu;
    // NOP
label_388de0:
    // 0x388de0: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x388de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x388de4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x388de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x388de8: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x388de8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x388dec: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x388decu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x388df0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x388df0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x388df4: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x388df4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x388df8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x388df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x388dfc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x388dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x388e00: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x388e00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x388e04: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x388e04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x388e08: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x388e08u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x388e0c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x388E0Cu;
    {
        const bool branch_taken_0x388e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x388E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388E0Cu;
        // 0x388e10: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388e0c) {
            ctx->pc = 0x388E1Cu;
            goto label_388e1c;
        }
    }
    ctx->pc = 0x388E14u;
    // 0x388e14: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x388e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x388e18: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x388e18u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_388e1c:
    // 0x388e1c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x388e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x388e20: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x388e20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x388e24: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x388E24u;
    {
        const bool branch_taken_0x388e24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x388E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388E24u;
        // 0x388e28: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388e24) {
            ctx->pc = 0x388DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_388de0;
        }
    }
    ctx->pc = 0x388E2Cu;
    // 0x388e2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x388E2Cu;
    {
        const bool branch_taken_0x388e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388E2Cu;
        // 0x388e30: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388e2c) {
            ctx->pc = 0x388E3Cu;
            goto label_388e3c;
        }
    }
    ctx->pc = 0x388E34u;
label_388e34:
    // 0x388e34: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x388e34u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388e38: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x388e38u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_388e3c:
    // 0x388e3c: 0x6545000f  daddiu      $a1, $t2, 0xF
    ctx->pc = 0x388e3cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)15);
    // 0x388e40: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x388e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x388e44: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x388e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x388e48: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x388e48u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x388e4c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x388e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x388e50: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x388e50u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x388e54: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x388e54u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x388e58: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x388E58u;
    {
        const bool branch_taken_0x388e58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x388E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388E58u;
        // 0x388e5c: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388e58) {
            ctx->pc = 0x388EBCu;
            goto label_388ebc;
        }
    }
    ctx->pc = 0x388E60u;
    // 0x388e60: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x388e60u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x388e64: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x388e64u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_388e68:
    // 0x388e68: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x388e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x388e6c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x388e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x388e70: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x388e70u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x388e74: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x388e74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x388e78: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x388e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x388e7c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x388e7cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x388e80: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x388e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x388e84: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x388e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x388e88: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x388e88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x388e8c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x388e8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x388e90: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x388e90u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x388e94: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x388E94u;
    {
        const bool branch_taken_0x388e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x388E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388E94u;
        // 0x388e98: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388e94) {
            ctx->pc = 0x388EA4u;
            goto label_388ea4;
        }
    }
    ctx->pc = 0x388E9Cu;
    // 0x388e9c: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x388e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x388ea0: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x388ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_388ea4:
    // 0x388ea4: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x388ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x388ea8: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x388ea8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x388eac: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x388EACu;
    {
        const bool branch_taken_0x388eac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x388EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388EACu;
        // 0x388eb0: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388eac) {
            ctx->pc = 0x388E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_388e68;
        }
    }
    ctx->pc = 0x388EB4u;
    // 0x388eb4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x388EB4u;
    {
        const bool branch_taken_0x388eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388EB4u;
        // 0x388eb8: 0x18b1025  or          $v0, $t4, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388eb4) {
            ctx->pc = 0x388EC4u;
            goto label_388ec4;
        }
    }
    ctx->pc = 0x388EBCu;
label_388ebc:
    // 0x388ebc: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x388ebcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388ec0: 0x18b1025  or          $v0, $t4, $t3
    ctx->pc = 0x388ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | GPR_U64(ctx, 11));
label_388ec4:
    // 0x388ec4: 0x65440001  daddiu      $a0, $t2, 0x1
    ctx->pc = 0x388ec4u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x388ec8: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x388ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x388ecc: 0xd183c  dsll32      $v1, $t5, 0
    ctx->pc = 0x388eccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) << (32 + 0));
    // 0x388ed0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x388ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x388ed4: 0xfce40008  sd          $a0, 0x8($a3)
    ctx->pc = 0x388ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 4));
    // 0x388ed8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x388ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x388edc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x388edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x388ee0: 0xfcc30018  sd          $v1, 0x18($a2)
    ctx->pc = 0x388ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 3));
    // 0x388ee4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x388ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_388ee8:
    // 0x388ee8: 0x16020023  bne         $s0, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x388EE8u;
    {
        const bool branch_taken_0x388ee8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x388ee8) {
            ctx->pc = 0x388F78u;
            goto label_388f78;
        }
    }
    ctx->pc = 0x388EF0u;
    // 0x388ef0: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x388ef0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x388ef4: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x388ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x388ef8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x388ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x388efc: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x388efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x388f00: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x388f00u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x388f04: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x388f04u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x388f08: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x388F08u;
    {
        const bool branch_taken_0x388f08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x388F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F08u;
        // 0x388f0c: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388f08) {
            ctx->pc = 0x388F6Cu;
            goto label_388f6c;
        }
    }
    ctx->pc = 0x388F10u;
    // 0x388f10: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x388f10u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x388f14: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x388f14u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
label_388f18:
    // 0x388f18: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x388f18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x388f1c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x388f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x388f20: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x388f20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x388f24: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x388f24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x388f28: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x388f28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x388f2c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x388f2cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x388f30: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x388f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x388f34: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x388f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x388f38: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x388f38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x388f3c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x388f3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x388f40: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x388f40u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x388f44: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x388F44u;
    {
        const bool branch_taken_0x388f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x388F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F44u;
        // 0x388f48: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388f44) {
            ctx->pc = 0x388F54u;
            goto label_388f54;
        }
    }
    ctx->pc = 0x388F4Cu;
    // 0x388f4c: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x388f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x388f50: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x388f50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_388f54:
    // 0x388f54: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x388f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x388f58: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x388f58u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x388f5c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x388F5Cu;
    {
        const bool branch_taken_0x388f5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x388F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F5Cu;
        // 0x388f60: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388f5c) {
            ctx->pc = 0x388F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_388f18;
        }
    }
    ctx->pc = 0x388F64u;
    // 0x388f64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x388F64u;
    {
        const bool branch_taken_0x388f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F64u;
        // 0x388f68: 0x65420030  daddiu      $v0, $t2, 0x30 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)48);
        ctx->in_delay_slot = false;
        if (branch_taken_0x388f64) {
            ctx->pc = 0x388F74u;
            goto label_388f74;
        }
    }
    ctx->pc = 0x388F6Cu;
label_388f6c:
    // 0x388f6c: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x388f6cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x388f70: 0x65420030  daddiu      $v0, $t2, 0x30
    ctx->pc = 0x388f70u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)48);
label_388f74:
    // 0x388f74: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x388f74u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
label_388f78:
    // 0x388f78: 0x13200026  beqz        $t9, . + 4 + (0x26 << 2)
    ctx->pc = 0x388F78u;
    {
        const bool branch_taken_0x388f78 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x388F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F78u;
        // 0x388f7c: 0x3b92021  addu        $a0, $sp, $t9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 25)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388f78) {
            ctx->pc = 0x389014u;
            goto label_389014;
        }
    }
    ctx->pc = 0x388F80u;
    // 0x388f80: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x388f80u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x388f84: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x388f84u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x388f88: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x388f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x388f8c: 0xa31814  dsllv       $v1, $v1, $a1
    ctx->pc = 0x388f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x388f90: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x388f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x388f94: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x388f94u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x388f98: 0x28440039  slti        $a0, $v0, 0x39
    ctx->pc = 0x388f98u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x388f9c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x388F9Cu;
    {
        const bool branch_taken_0x388f9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x388FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388F9Cu;
        // 0x388fa0: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388f9c) {
            ctx->pc = 0x389004u;
            goto label_389004;
        }
    }
    ctx->pc = 0x388FA4u;
    // 0x388fa4: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x388fa4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x388fa8: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x388fa8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388fac: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x388facu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
label_388fb0:
    // 0x388fb0: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x388fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x388fb4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x388fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x388fb8: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x388fb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x388fbc: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x388fbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x388fc0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x388fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x388fc4: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x388fc4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x388fc8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x388fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x388fcc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x388fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x388fd0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x388fd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x388fd4: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x388fd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x388fd8: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x388fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x388fdc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x388FDCu;
    {
        const bool branch_taken_0x388fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x388FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388FDCu;
        // 0x388fe0: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388fdc) {
            ctx->pc = 0x388FECu;
            goto label_388fec;
        }
    }
    ctx->pc = 0x388FE4u;
    // 0x388fe4: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x388fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x388fe8: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x388fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_388fec:
    // 0x388fec: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x388fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x388ff0: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x388ff0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x388ff4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x388FF4u;
    {
        const bool branch_taken_0x388ff4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x388FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388FF4u;
        // 0x388ff8: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388ff4) {
            ctx->pc = 0x388FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_388fb0;
        }
    }
    ctx->pc = 0x388FFCu;
    // 0x388ffc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x388FFCu;
    {
        const bool branch_taken_0x388ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388FFCu;
        // 0x389000: 0x14b102d  daddu       $v0, $t2, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388ffc) {
            ctx->pc = 0x389010u;
            goto label_389010;
        }
    }
    ctx->pc = 0x389004u;
label_389004:
    // 0x389004: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x389004u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x389008: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x389008u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38900c: 0x14b102d  daddu       $v0, $t2, $t3
    ctx->pc = 0x38900cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 11));
label_389010:
    // 0x389010: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x389010u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
label_389014:
    // 0x389014: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x389014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x389018: 0x1622020a  bne         $s1, $v0, . + 4 + (0x20A << 2)
    ctx->pc = 0x389018u;
    {
        const bool branch_taken_0x389018 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x38901Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389018u;
        // 0x38901c: 0x300702d  daddu       $t6, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389018) {
            ctx->pc = 0x389844u;
            goto label_389844;
        }
    }
    ctx->pc = 0x389020u;
    // 0x389020: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x389020u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x389024: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x389024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x389028: 0x25ffe  dsrl32      $t3, $v0, 31
    ctx->pc = 0x389028u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x38902c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x38902cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x389030: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x389030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x389034: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x389034u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x389038: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x389038u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x38903c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x38903Cu;
    {
        const bool branch_taken_0x38903c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x389040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38903Cu;
        // 0x389040: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38903c) {
            ctx->pc = 0x3890A4u;
            goto label_3890a4;
        }
    }
    ctx->pc = 0x389044u;
    // 0x389044: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x389044u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x389048: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x389048u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x38904c: 0x0  nop
    ctx->pc = 0x38904cu;
    // NOP
label_389050:
    // 0x389050: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x389050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x389054: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x389054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x389058: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x389058u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x38905c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x38905cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x389060: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x389060u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x389064: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x389064u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x389068: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x389068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x38906c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x38906cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x389070: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x389070u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x389074: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x389074u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x389078: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x389078u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x38907c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38907Cu;
    {
        const bool branch_taken_0x38907c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x389080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38907Cu;
        // 0x389080: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38907c) {
            ctx->pc = 0x38908Cu;
            goto label_38908c;
        }
    }
    ctx->pc = 0x389084u;
    // 0x389084: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x389084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x389088: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x389088u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_38908c:
    // 0x38908c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x38908cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x389090: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x389090u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x389094: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x389094u;
    {
        const bool branch_taken_0x389094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x389098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389094u;
        // 0x389098: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389094) {
            ctx->pc = 0x389050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_389050;
        }
    }
    ctx->pc = 0x38909Cu;
    // 0x38909c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x38909Cu;
    {
        const bool branch_taken_0x38909c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3890A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38909Cu;
        // 0x3890a0: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38909c) {
            ctx->pc = 0x3890ACu;
            goto label_3890ac;
        }
    }
    ctx->pc = 0x3890A4u;
label_3890a4:
    // 0x3890a4: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x3890a4u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x3890a8: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x3890a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_3890ac:
    // 0x3890ac: 0x65450001  daddiu      $a1, $t2, 0x1
    ctx->pc = 0x3890acu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x3890b0: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x3890b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x3890b4: 0x277fe  dsrl32      $t6, $v0, 31
    ctx->pc = 0x3890b4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x3890b8: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x3890b8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x3890bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3890bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3890c0: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x3890c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x3890c4: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x3890c4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x3890c8: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x3890c8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x3890cc: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3890CCu;
    {
        const bool branch_taken_0x3890cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3890D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3890CCu;
        // 0x3890d0: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3890cc) {
            ctx->pc = 0x389134u;
            goto label_389134;
        }
    }
    ctx->pc = 0x3890D4u;
    // 0x3890d4: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x3890d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x3890d8: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3890d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3890dc: 0x0  nop
    ctx->pc = 0x3890dcu;
    // NOP
label_3890e0:
    // 0x3890e0: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x3890e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x3890e4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x3890e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x3890e8: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x3890e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x3890ec: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3890ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3890f0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x3890f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3890f4: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x3890f4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3890f8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x3890f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x3890fc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3890fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x389100: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x389100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x389104: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x389104u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x389108: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x389108u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x38910c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38910Cu;
    {
        const bool branch_taken_0x38910c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x389110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38910Cu;
        // 0x389110: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38910c) {
            ctx->pc = 0x38911Cu;
            goto label_38911c;
        }
    }
    ctx->pc = 0x389114u;
    // 0x389114: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x389114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x389118: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x389118u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_38911c:
    // 0x38911c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x38911cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x389120: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x389120u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x389124: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x389124u;
    {
        const bool branch_taken_0x389124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x389128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389124u;
        // 0x389128: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389124) {
            ctx->pc = 0x3890E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3890e0;
        }
    }
    ctx->pc = 0x38912Cu;
    // 0x38912c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x38912Cu;
    {
        const bool branch_taken_0x38912c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38912Cu;
        // 0x389130: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38912c) {
            ctx->pc = 0x38913Cu;
            goto label_38913c;
        }
    }
    ctx->pc = 0x389134u;
label_389134:
    // 0x389134: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x389134u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389138: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x389138u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_38913c:
    // 0x38913c: 0x65450001  daddiu      $a1, $t2, 0x1
    ctx->pc = 0x38913cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x389140: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x389140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x389144: 0x26ffe  dsrl32      $t5, $v0, 31
    ctx->pc = 0x389144u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x389148: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x389148u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x38914c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x38914cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x389150: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x389150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x389154: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x389154u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x389158: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x389158u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x38915c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x38915Cu;
    {
        const bool branch_taken_0x38915c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x389160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38915Cu;
        // 0x389160: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38915c) {
            ctx->pc = 0x3891C4u;
            goto label_3891c4;
        }
    }
    ctx->pc = 0x389164u;
    // 0x389164: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x389164u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x389168: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x389168u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38916c: 0x0  nop
    ctx->pc = 0x38916cu;
    // NOP
label_389170:
    // 0x389170: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x389170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x389174: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x389174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x389178: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x389178u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x38917c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x38917cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x389180: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x389180u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x389184: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x389184u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x389188: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x389188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x38918c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x38918cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x389190: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x389190u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x389194: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x389194u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x389198: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x389198u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x38919c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38919Cu;
    {
        const bool branch_taken_0x38919c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3891A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38919Cu;
        // 0x3891a0: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38919c) {
            ctx->pc = 0x3891ACu;
            goto label_3891ac;
        }
    }
    ctx->pc = 0x3891A4u;
    // 0x3891a4: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x3891a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x3891a8: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x3891a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_3891ac:
    // 0x3891ac: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x3891acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x3891b0: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x3891b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x3891b4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3891B4u;
    {
        const bool branch_taken_0x3891b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3891B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3891B4u;
        // 0x3891b8: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3891b4) {
            ctx->pc = 0x389170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_389170;
        }
    }
    ctx->pc = 0x3891BCu;
    // 0x3891bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3891BCu;
    {
        const bool branch_taken_0x3891bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3891C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3891BCu;
        // 0x3891c0: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3891bc) {
            ctx->pc = 0x3891CCu;
            goto label_3891cc;
        }
    }
    ctx->pc = 0x3891C4u;
label_3891c4:
    // 0x3891c4: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3891c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3891c8: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x3891c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_3891cc:
    // 0x3891cc: 0x65450001  daddiu      $a1, $t2, 0x1
    ctx->pc = 0x3891ccu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x3891d0: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x3891d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x3891d4: 0x27ffe  dsrl32      $t7, $v0, 31
    ctx->pc = 0x3891d4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x3891d8: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x3891d8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x3891dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3891dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3891e0: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x3891e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x3891e4: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x3891e4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x3891e8: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x3891e8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x3891ec: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x3891ECu;
    {
        const bool branch_taken_0x3891ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3891F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3891ECu;
        // 0x3891f0: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3891ec) {
            ctx->pc = 0x389254u;
            goto label_389254;
        }
    }
    ctx->pc = 0x3891F4u;
    // 0x3891f4: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x3891f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x3891f8: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3891f8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3891fc: 0x0  nop
    ctx->pc = 0x3891fcu;
    // NOP
label_389200:
    // 0x389200: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x389200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x389204: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x389204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x389208: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x389208u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x38920c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x38920cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x389210: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x389210u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x389214: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x389214u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x389218: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x389218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x38921c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x38921cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x389220: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x389220u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x389224: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x389224u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x389228: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x389228u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x38922c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38922Cu;
    {
        const bool branch_taken_0x38922c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x389230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38922Cu;
        // 0x389230: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38922c) {
            ctx->pc = 0x38923Cu;
            goto label_38923c;
        }
    }
    ctx->pc = 0x389234u;
    // 0x389234: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x389234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x389238: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x389238u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_38923c:
    // 0x38923c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x38923cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x389240: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x389240u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x389244: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x389244u;
    {
        const bool branch_taken_0x389244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x389248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389244u;
        // 0x389248: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389244) {
            ctx->pc = 0x389200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_389200;
        }
    }
    ctx->pc = 0x38924Cu;
    // 0x38924c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x38924Cu;
    {
        const bool branch_taken_0x38924c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38924Cu;
        // 0x389250: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38924c) {
            ctx->pc = 0x38925Cu;
            goto label_38925c;
        }
    }
    ctx->pc = 0x389254u;
label_389254:
    // 0x389254: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x389254u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389258: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x389258u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_38925c:
    // 0x38925c: 0x65450001  daddiu      $a1, $t2, 0x1
    ctx->pc = 0x38925cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x389260: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x389260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x389264: 0x210f8  dsll        $v0, $v0, 3
    ctx->pc = 0x389264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 3);
    // 0x389268: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x389268u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x38926c: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x38926cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x389270: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x389270u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x389274: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x389274u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x389278: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x389278u;
    {
        const bool branch_taken_0x389278 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38927Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389278u;
        // 0x38927c: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389278) {
            ctx->pc = 0x3892DCu;
            goto label_3892dc;
        }
    }
    ctx->pc = 0x389280u;
    // 0x389280: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x389280u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x389284: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x389284u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_389288:
    // 0x389288: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x389288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x38928c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x38928cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x389290: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x389290u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x389294: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x389294u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x389298: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x389298u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x38929c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x38929cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3892a0: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x3892a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x3892a4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3892a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3892a8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3892a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3892ac: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x3892acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3892b0: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x3892b0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x3892b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3892B4u;
    {
        const bool branch_taken_0x3892b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3892B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3892B4u;
        // 0x3892b8: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3892b4) {
            ctx->pc = 0x3892C4u;
            goto label_3892c4;
        }
    }
    ctx->pc = 0x3892BCu;
    // 0x3892bc: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x3892bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x3892c0: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x3892c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_3892c4:
    // 0x3892c4: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x3892c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x3892c8: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x3892c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x3892cc: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3892CCu;
    {
        const bool branch_taken_0x3892cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3892D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3892CCu;
        // 0x3892d0: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3892cc) {
            ctx->pc = 0x389288u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_389288;
        }
    }
    ctx->pc = 0x3892D4u;
    // 0x3892d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3892D4u;
    {
        const bool branch_taken_0x3892d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3892D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3892D4u;
        // 0x3892d8: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3892d4) {
            ctx->pc = 0x3892E4u;
            goto label_3892e4;
        }
    }
    ctx->pc = 0x3892DCu;
label_3892dc:
    // 0x3892dc: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3892dcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3892e0: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x3892e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_3892e4:
    // 0x3892e4: 0x65450003  daddiu      $a1, $t2, 0x3
    ctx->pc = 0x3892e4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)3);
    // 0x3892e8: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x3892e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x3892ec: 0x267fe  dsrl32      $t4, $v0, 31
    ctx->pc = 0x3892ecu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) >> (32 + 31));
    // 0x3892f0: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x3892f0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x3892f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3892f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3892f8: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x3892f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x3892fc: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x3892fcu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x389300: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x389300u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x389304: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x389304u;
    {
        const bool branch_taken_0x389304 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x389308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389304u;
        // 0x389308: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389304) {
            ctx->pc = 0x38936Cu;
            goto label_38936c;
        }
    }
    ctx->pc = 0x38930Cu;
    // 0x38930c: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x38930cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x389310: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x389310u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389314: 0x0  nop
    ctx->pc = 0x389314u;
    // NOP
label_389318:
    // 0x389318: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x389318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x38931c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x38931cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x389320: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x389320u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x389324: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x389324u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x389328: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x389328u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x38932c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x38932cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x389330: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x389330u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x389334: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x389334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x389338: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x389338u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x38933c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x38933cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x389340: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x389340u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x389344: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x389344u;
    {
        const bool branch_taken_0x389344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x389348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389344u;
        // 0x389348: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389344) {
            ctx->pc = 0x389354u;
            goto label_389354;
        }
    }
    ctx->pc = 0x38934Cu;
    // 0x38934c: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x38934cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x389350: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x389350u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_389354:
    // 0x389354: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x389354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x389358: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x389358u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x38935c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x38935Cu;
    {
        const bool branch_taken_0x38935c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x389360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38935Cu;
        // 0x389360: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38935c) {
            ctx->pc = 0x389318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_389318;
        }
    }
    ctx->pc = 0x389364u;
    // 0x389364: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x389364u;
    {
        const bool branch_taken_0x389364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389364u;
        // 0x389368: 0x65450001  daddiu      $a1, $t2, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x389364) {
            ctx->pc = 0x389374u;
            goto label_389374;
        }
    }
    ctx->pc = 0x38936Cu;
label_38936c:
    // 0x38936c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x38936cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389370: 0x65450001  daddiu      $a1, $t2, 0x1
    ctx->pc = 0x389370u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_389374:
    // 0x389374: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x389374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x389378: 0x15620068  bne         $t3, $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x389378u;
    {
        const bool branch_taken_0x389378 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 2));
        ctx->pc = 0x38937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389378u;
        // 0x38937c: 0xfce50008  sd          $a1, 0x8($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389378) {
            ctx->pc = 0x38951Cu;
            goto label_38951c;
        }
    }
    ctx->pc = 0x389380u;
    // 0x389380: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x389380u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x389384: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x389384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x389388: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x389388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x38938c: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x38938cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x389390: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x389390u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x389394: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x389394u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x389398: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x389398u;
    {
        const bool branch_taken_0x389398 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389398u;
        // 0x38939c: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389398) {
            ctx->pc = 0x3893FCu;
            goto label_3893fc;
        }
    }
    ctx->pc = 0x3893A0u;
    // 0x3893a0: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x3893a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x3893a4: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3893a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3893a8:
    // 0x3893a8: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x3893a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x3893ac: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x3893acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x3893b0: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x3893b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x3893b4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3893b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3893b8: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x3893b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3893bc: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x3893bcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3893c0: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x3893c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x3893c4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3893c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3893c8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3893c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3893cc: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x3893ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3893d0: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x3893d0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x3893d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3893D4u;
    {
        const bool branch_taken_0x3893d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3893D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3893D4u;
        // 0x3893d8: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3893d4) {
            ctx->pc = 0x3893E4u;
            goto label_3893e4;
        }
    }
    ctx->pc = 0x3893DCu;
    // 0x3893dc: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x3893dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x3893e0: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x3893e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_3893e4:
    // 0x3893e4: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x3893e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x3893e8: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x3893e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x3893ec: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3893ECu;
    {
        const bool branch_taken_0x3893ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3893F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3893ECu;
        // 0x3893f0: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3893ec) {
            ctx->pc = 0x3893A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3893a8;
        }
    }
    ctx->pc = 0x3893F4u;
    // 0x3893f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3893F4u;
    {
        const bool branch_taken_0x3893f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3893F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3893F4u;
        // 0x3893f8: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3893f4) {
            ctx->pc = 0x389404u;
            goto label_389404;
        }
    }
    ctx->pc = 0x3893FCu;
label_3893fc:
    // 0x3893fc: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3893fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389400: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x389400u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_389404:
    // 0x389404: 0x65450030  daddiu      $a1, $t2, 0x30
    ctx->pc = 0x389404u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)48);
    // 0x389408: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x389408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x38940c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x38940cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x389410: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x389410u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x389414: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x389414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x389418: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x389418u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x38941c: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x38941cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x389420: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x389420u;
    {
        const bool branch_taken_0x389420 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x389424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389420u;
        // 0x389424: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389420) {
            ctx->pc = 0x389484u;
            goto label_389484;
        }
    }
    ctx->pc = 0x389428u;
    // 0x389428: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x389428u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x38942c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x38942cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_389430:
    // 0x389430: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x389430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x389434: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x389434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x389438: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x389438u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x38943c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x38943cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x389440: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x389440u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x389444: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x389444u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x389448: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x389448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x38944c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x38944cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x389450: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x389450u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x389454: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x389454u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x389458: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x389458u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x38945c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38945Cu;
    {
        const bool branch_taken_0x38945c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x389460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38945Cu;
        // 0x389460: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38945c) {
            ctx->pc = 0x38946Cu;
            goto label_38946c;
        }
    }
    ctx->pc = 0x389464u;
    // 0x389464: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x389464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x389468: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x389468u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_38946c:
    // 0x38946c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x38946cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x389470: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x389470u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x389474: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x389474u;
    {
        const bool branch_taken_0x389474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x389478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389474u;
        // 0x389478: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389474) {
            ctx->pc = 0x389430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_389430;
        }
    }
    ctx->pc = 0x38947Cu;
    // 0x38947c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x38947Cu;
    {
        const bool branch_taken_0x38947c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38947Cu;
        // 0x389480: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38947c) {
            ctx->pc = 0x38948Cu;
            goto label_38948c;
        }
    }
    ctx->pc = 0x389484u;
label_389484:
    // 0x389484: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x389484u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389488: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x389488u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_38948c:
    // 0x38948c: 0x65450030  daddiu      $a1, $t2, 0x30
    ctx->pc = 0x38948cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)48);
    // 0x389490: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x389490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x389494: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x389494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x389498: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x389498u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x38949c: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x38949cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x3894a0: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x3894a0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x3894a4: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x3894a4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x3894a8: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3894A8u;
    {
        const bool branch_taken_0x3894a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3894ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3894A8u;
        // 0x3894ac: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3894a8) {
            ctx->pc = 0x38950Cu;
            goto label_38950c;
        }
    }
    ctx->pc = 0x3894B0u;
    // 0x3894b0: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x3894b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x3894b4: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x3894b4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3894b8:
    // 0x3894b8: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x3894b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x3894bc: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x3894bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x3894c0: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x3894c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x3894c4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3894c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3894c8: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x3894c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3894cc: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x3894ccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3894d0: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x3894d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x3894d4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3894d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3894d8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3894d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3894dc: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x3894dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3894e0: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x3894e0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x3894e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3894E4u;
    {
        const bool branch_taken_0x3894e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3894E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3894E4u;
        // 0x3894e8: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3894e4) {
            ctx->pc = 0x3894F4u;
            goto label_3894f4;
        }
    }
    ctx->pc = 0x3894ECu;
    // 0x3894ec: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x3894ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x3894f0: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x3894f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_3894f4:
    // 0x3894f4: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x3894f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x3894f8: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x3894f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x3894fc: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3894FCu;
    {
        const bool branch_taken_0x3894fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x389500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3894FCu;
        // 0x389500: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3894fc) {
            ctx->pc = 0x3894B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3894b8;
        }
    }
    ctx->pc = 0x389504u;
    // 0x389504: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x389504u;
    {
        const bool branch_taken_0x389504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389504u;
        // 0x389508: 0x65420020  daddiu      $v0, $t2, 0x20 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x389504) {
            ctx->pc = 0x389514u;
            goto label_389514;
        }
    }
    ctx->pc = 0x38950Cu;
label_38950c:
    // 0x38950c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x38950cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389510: 0x65420020  daddiu      $v0, $t2, 0x20
    ctx->pc = 0x389510u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)32);
label_389514:
    // 0x389514: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x389514u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x389518: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x389518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38951c:
    // 0x38951c: 0x15c20006  bne         $t6, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38951Cu;
    {
        const bool branch_taken_0x38951c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 2));
        ctx->pc = 0x389520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38951Cu;
        // 0x389520: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38951c) {
            ctx->pc = 0x389538u;
            goto label_389538;
        }
    }
    ctx->pc = 0x389524u;
    // 0x389524: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x389524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389528: 0xc0e28f8  jal         func_38A3E0
    ctx->pc = 0x389528u;
    SET_GPR_U32(ctx, 31, 0x389530u);
    ctx->pc = 0x38952Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389528u;
    // 0x38952c: 0x24a593f0  addiu       $a1, $a1, -0x6C10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A3E0u, 0x389528u, 0x389530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389530u;
label_389530:
    // 0x389530: 0x10000202  b           . + 4 + (0x202 << 2)
    ctx->pc = 0x389530u;
    {
        const bool branch_taken_0x389530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389530u;
        // 0x389534: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389530) {
            ctx->pc = 0x389D3Cu;
            goto label_389d3c;
        }
    }
    ctx->pc = 0x389538u;
label_389538:
    // 0x389538: 0x15a20026  bne         $t5, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x389538u;
    {
        const bool branch_taken_0x389538 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 2));
        ctx->pc = 0x38953Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389538u;
        // 0x38953c: 0x300702d  daddu       $t6, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389538) {
            ctx->pc = 0x3895D4u;
            goto label_3895d4;
        }
    }
    ctx->pc = 0x389540u;
    // 0x389540: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x389540u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x389544: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x389544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x389548: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x389548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x38954c: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x38954cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x389550: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x389550u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x389554: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x389554u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x389558: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x389558u;
    {
        const bool branch_taken_0x389558 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38955Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389558u;
        // 0x38955c: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389558) {
            ctx->pc = 0x3895C4u;
            goto label_3895c4;
        }
    }
    ctx->pc = 0x389560u;
    // 0x389560: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x389560u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x389564: 0x300702d  daddu       $t6, $t8, $zero
    ctx->pc = 0x389564u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389568: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x389568u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x38956c: 0x0  nop
    ctx->pc = 0x38956cu;
    // NOP
label_389570:
    // 0x389570: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x389570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x389574: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x389574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x389578: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x389578u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x38957c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x38957cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x389580: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x389580u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x389584: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x389584u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x389588: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x389588u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x38958c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x38958cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x389590: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x389590u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x389594: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x389594u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x389598: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x389598u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x38959c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38959Cu;
    {
        const bool branch_taken_0x38959c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3895A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38959Cu;
        // 0x3895a0: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38959c) {
            ctx->pc = 0x3895ACu;
            goto label_3895ac;
        }
    }
    ctx->pc = 0x3895A4u;
label_3895a4:
    // 0x3895a4: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x3895a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x3895a8: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x3895a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_3895ac:
    // 0x3895ac: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x3895acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x3895b0: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x3895b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x3895b4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3895B4u;
    {
        const bool branch_taken_0x3895b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3895B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3895B4u;
        // 0x3895b8: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3895b4) {
            ctx->pc = 0x389570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_389570;
        }
    }
    ctx->pc = 0x3895BCu;
    // 0x3895bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3895BCu;
    {
        const bool branch_taken_0x3895bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3895C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3895BCu;
        // 0x3895c0: 0x65420010  daddiu      $v0, $t2, 0x10 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3895bc) {
            ctx->pc = 0x3895D0u;
            goto label_3895d0;
        }
    }
    ctx->pc = 0x3895C4u;
label_3895c4:
    // 0x3895c4: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x3895c4u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x3895c8: 0x300702d  daddu       $t6, $t8, $zero
    ctx->pc = 0x3895c8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3895cc: 0x65420010  daddiu      $v0, $t2, 0x10
    ctx->pc = 0x3895ccu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)16);
label_3895d0:
    // 0x3895d0: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x3895d0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
label_3895d4:
    // 0x3895d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3895d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3895d8: 0x15e20024  bne         $t7, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3895D8u;
    {
        const bool branch_taken_0x3895d8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 2));
        if (branch_taken_0x3895d8) {
            ctx->pc = 0x38966Cu;
            goto label_38966c;
        }
    }
    ctx->pc = 0x3895E0u;
    // 0x3895e0: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x3895e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3895e4: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x3895e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x3895e8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3895e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3895ec: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x3895ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x3895f0: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x3895f0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x3895f4: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x3895f4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x3895f8: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3895F8u;
    {
        const bool branch_taken_0x3895f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3895FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3895F8u;
        // 0x3895fc: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3895f8) {
            ctx->pc = 0x38965Cu;
            goto label_38965c;
        }
    }
    ctx->pc = 0x389600u;
    // 0x389600: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x389600u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
label_389604:
    // 0x389604: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x389604u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
label_389608:
    // 0x389608: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x389608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x38960c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x38960cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x389610: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x389610u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x389614: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x389614u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x389618: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x389618u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x38961c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x38961cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x389620: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x389620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x389624: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x389624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x389628: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x389628u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x38962c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x38962cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x389630: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x389630u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x389634: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x389634u;
    {
        const bool branch_taken_0x389634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x389638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389634u;
        // 0x389638: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389634) {
            ctx->pc = 0x389644u;
            goto label_389644;
        }
    }
    ctx->pc = 0x38963Cu;
    // 0x38963c: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x38963cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x389640: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x389640u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_389644:
    // 0x389644: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x389644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x389648: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x389648u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x38964c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x38964Cu;
    {
        const bool branch_taken_0x38964c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x389650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38964Cu;
        // 0x389650: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38964c) {
            ctx->pc = 0x389608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_389608;
        }
    }
    ctx->pc = 0x389654u;
    // 0x389654: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x389654u;
    {
        const bool branch_taken_0x389654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389654u;
        // 0x389658: 0x65420010  daddiu      $v0, $t2, 0x10 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x389654) {
            ctx->pc = 0x389664u;
            goto label_389664;
        }
    }
    ctx->pc = 0x38965Cu;
label_38965c:
    // 0x38965c: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x38965cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x389660: 0x65420010  daddiu      $v0, $t2, 0x10
    ctx->pc = 0x389660u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)16);
label_389664:
    // 0x389664: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x389664u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x389668: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x389668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38966c:
    // 0x38966c: 0x55820076  bnel        $t4, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x38966Cu;
    {
        const bool branch_taken_0x38966c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 2));
        if (branch_taken_0x38966c) {
            ctx->pc = 0x389670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38966Cu;
            // 0x389670: 0xdcea0008  ld          $t2, 0x8($a3) (Delay Slot)
            SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x389848u;
            goto label_389848;
        }
    }
    ctx->pc = 0x389674u;
    // 0x389674: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x389674u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x389678: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x389678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x38967c: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x38967cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x389680: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x389680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x389684: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x389684u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x389688: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x389688u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x38968c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x38968Cu;
    {
        const bool branch_taken_0x38968c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x389690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38968Cu;
        // 0x389690: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38968c) {
            ctx->pc = 0x3896F4u;
            goto label_3896f4;
        }
    }
    ctx->pc = 0x389694u;
    // 0x389694: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x389694u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x389698: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x389698u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x38969c: 0x0  nop
    ctx->pc = 0x38969cu;
    // NOP
label_3896a0:
    // 0x3896a0: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x3896a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x3896a4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x3896a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x3896a8: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x3896a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x3896ac: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3896acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3896b0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x3896b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3896b4: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x3896b4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3896b8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x3896b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x3896bc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3896bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3896c0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3896c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3896c4: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x3896c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3896c8: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x3896c8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x3896cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3896CCu;
    {
        const bool branch_taken_0x3896cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3896D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3896CCu;
        // 0x3896d0: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3896cc) {
            ctx->pc = 0x3896DCu;
            goto label_3896dc;
        }
    }
    ctx->pc = 0x3896D4u;
    // 0x3896d4: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x3896d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x3896d8: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x3896d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_3896dc:
    // 0x3896dc: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x3896dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x3896e0: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x3896e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x3896e4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3896E4u;
    {
        const bool branch_taken_0x3896e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3896E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3896E4u;
        // 0x3896e8: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3896e4) {
            ctx->pc = 0x3896A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3896a0;
        }
    }
    ctx->pc = 0x3896ECu;
    // 0x3896ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3896ECu;
    {
        const bool branch_taken_0x3896ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3896F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3896ECu;
        // 0x3896f0: 0xdce20000  ld          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3896ec) {
            ctx->pc = 0x3896FCu;
            goto label_3896fc;
        }
    }
    ctx->pc = 0x3896F4u;
label_3896f4:
    // 0x3896f4: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x3896f4u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x3896f8: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x3896f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_3896fc:
    // 0x3896fc: 0x65450001  daddiu      $a1, $t2, 0x1
    ctx->pc = 0x3896fcu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
    // 0x389700: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x389700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x389704: 0x2667e  dsrl32      $t4, $v0, 25
    ctx->pc = 0x389704u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) >> (32 + 25));
    // 0x389708: 0xfce50008  sd          $a1, 0x8($a3)
    ctx->pc = 0x389708u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 5));
    // 0x38970c: 0x2463fff9  addiu       $v1, $v1, -0x7
    ctx->pc = 0x38970cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967289));
    // 0x389710: 0x211f8  dsll        $v0, $v0, 7
    ctx->pc = 0x389710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 7);
    // 0x389714: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x389714u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x389718: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x389718u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x38971c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x38971Cu;
    {
        const bool branch_taken_0x38971c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x389720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38971Cu;
        // 0x389720: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38971c) {
            ctx->pc = 0x389784u;
            goto label_389784;
        }
    }
    ctx->pc = 0x389724u;
    // 0x389724: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x389724u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x389728: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x389728u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38972c: 0x0  nop
    ctx->pc = 0x38972cu;
    // NOP
label_389730:
    // 0x389730: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x389730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x389734: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x389734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x389738: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x389738u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x38973c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x38973cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x389740: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x389740u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x389744: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x389744u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x389748: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x389748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x38974c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x38974cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x389750: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x389750u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x389754: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x389754u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x389758: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x389758u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x38975c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38975Cu;
    {
        const bool branch_taken_0x38975c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x389760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38975Cu;
        // 0x389760: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38975c) {
            ctx->pc = 0x38976Cu;
            goto label_38976c;
        }
    }
    ctx->pc = 0x389764u;
    // 0x389764: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x389764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x389768: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x389768u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_38976c:
    // 0x38976c: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x38976cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x389770: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x389770u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x389774: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x389774u;
    {
        const bool branch_taken_0x389774 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x389778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389774u;
        // 0x389778: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389774) {
            ctx->pc = 0x389730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_389730;
        }
    }
    ctx->pc = 0x38977Cu;
    // 0x38977c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x38977Cu;
    {
        const bool branch_taken_0x38977c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38977Cu;
        // 0x389780: 0x65420007  daddiu      $v0, $t2, 0x7 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38977c) {
            ctx->pc = 0x38978Cu;
            goto label_38978c;
        }
    }
    ctx->pc = 0x389784u;
label_389784:
    // 0x389784: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x389784u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389788: 0x65420007  daddiu      $v0, $t2, 0x7
    ctx->pc = 0x389788u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)7);
label_38978c:
    // 0x38978c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x38978cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389790: 0x1180002c  beqz        $t4, . + 4 + (0x2C << 2)
    ctx->pc = 0x389790u;
    {
        const bool branch_taken_0x389790 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x389794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389790u;
        // 0x389794: 0xfce20008  sd          $v0, 0x8($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389790) {
            ctx->pc = 0x389844u;
            goto label_389844;
        }
    }
    ctx->pc = 0x389798u;
    // 0x389798: 0x240d0038  addiu       $t5, $zero, 0x38
    ctx->pc = 0x389798u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x38979c: 0x0  nop
    ctx->pc = 0x38979cu;
    // NOP
label_3897a0:
    // 0x3897a0: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x3897a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3897a4: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x3897a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x3897a8: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x3897a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x3897ac: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x3897acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x3897b0: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x3897b0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x3897b4: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x3897b4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x3897b8: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
label_3897bc:
    if (ctx->pc == 0x3897BCu) {
        ctx->pc = 0x3897BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3897B8u;
        // 0x3897bc: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3897C0u;
        goto label_fallthrough_0x3897b8;
    }
    ctx->pc = 0x3897B8u;
    {
        const bool branch_taken_0x3897b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3897BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3897B8u;
        // 0x3897bc: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3897b8) {
            ctx->pc = 0x389820u;
            goto label_389820;
        }
    }
label_fallthrough_0x3897b8:
    ctx->pc = 0x3897C0u;
    // 0x3897c0: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x3897c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x3897c4: 0x24ab0001  addiu       $t3, $a1, 0x1
    ctx->pc = 0x3897c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3897c8: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x3897c8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x3897cc: 0x0  nop
    ctx->pc = 0x3897ccu;
    // NOP
label_3897d0:
    // 0x3897d0: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x3897d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x3897d4: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x3897d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x3897d8: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x3897d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3897dc: 0xdce50000  ld          $a1, 0x0($a3)
    ctx->pc = 0x3897dcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3897e0: 0x1a81023  subu        $v0, $t5, $t0
    ctx->pc = 0x3897e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
    // 0x3897e4: 0x442014  dsllv       $a0, $a0, $v0
    ctx->pc = 0x3897e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x3897e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3897e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3897ec: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x3897ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x3897f0: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x3897f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3897f4: 0xfce50000  sd          $a1, 0x0($a3)
    ctx->pc = 0x3897f4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 5));
    // 0x3897f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3897F8u;
    {
        const bool branch_taken_0x3897f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3897FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3897F8u;
        // 0x3897fc: 0xace30014  sw          $v1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3897f8) {
            ctx->pc = 0x389808u;
            goto label_389808;
        }
    }
    ctx->pc = 0x389800u;
    // 0x389800: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x389800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x389804: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x389804u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_389808:
    // 0x389808: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x389808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x38980c: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x38980cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x389810: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x389810u;
    {
        const bool branch_taken_0x389810 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x389814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389810u;
        // 0x389814: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389810) {
            ctx->pc = 0x3897D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3897d0;
        }
    }
    ctx->pc = 0x389818u;
    // 0x389818: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x389818u;
    {
        const bool branch_taken_0x389818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389818u;
        // 0x38981c: 0x65430008  daddiu      $v1, $t2, 0x8 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x389818) {
            ctx->pc = 0x38982Cu;
            goto label_38982c;
        }
    }
    ctx->pc = 0x389820u;
label_389820:
    // 0x389820: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x389820u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x389824: 0x24ab0001  addiu       $t3, $a1, 0x1
    ctx->pc = 0x389824u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x389828: 0x65430008  daddiu      $v1, $t2, 0x8
    ctx->pc = 0x389828u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)8);
label_38982c:
    // 0x38982c: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x38982cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389830: 0xac102b  sltu        $v0, $a1, $t4
    ctx->pc = 0x389830u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x389834: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x389834u;
    {
        const bool branch_taken_0x389834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x389838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389834u;
        // 0x389838: 0xfce30008  sd          $v1, 0x8($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389834) {
            ctx->pc = 0x3897A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3897a0;
        }
    }
    ctx->pc = 0x38983Cu;
    // 0x38983c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38983Cu;
    {
        const bool branch_taken_0x38983c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38983Cu;
        // 0x389840: 0xdcea0008  ld          $t2, 0x8($a3) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38983c) {
            ctx->pc = 0x389848u;
            goto label_389848;
        }
    }
    ctx->pc = 0x389844u;
label_389844:
    // 0x389844: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x389844u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
label_389848:
    // 0x389848: 0x14e102f  dsubu       $v0, $t2, $t6
    ctx->pc = 0x389848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 14));
    // 0x38984c: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x38984cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x389850: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x389850u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x389854: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x389854u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x389858: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x389858u;
    {
        const bool branch_taken_0x389858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389858u;
        // 0x38985c: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389858) {
            ctx->pc = 0x389908u;
            goto label_389908;
        }
    }
    ctx->pc = 0x389860u;
    // 0x389860: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x389860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x389864: 0x4a182d  daddu       $v1, $v0, $t2
    ctx->pc = 0x389864u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 10));
    // 0x389868: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x389868u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x38986c: 0x31778  dsll        $v0, $v1, 29
    ctx->pc = 0x38986cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 29);
    // 0x389870: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x389870u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x389874: 0xfce00000  sd          $zero, 0x0($a3)
    ctx->pc = 0x389874u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 0));
    // 0x389878: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x389878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x38987c: 0xace00018  sw          $zero, 0x18($a3)
    ctx->pc = 0x38987cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
    // 0x389880: 0x89102b  sltu        $v0, $a0, $t1
    ctx->pc = 0x389880u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x389884: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x389884u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
    // 0x389888: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x389888u;
    {
        const bool branch_taken_0x389888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38988Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389888u;
        // 0x38988c: 0xace40014  sw          $a0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389888) {
            ctx->pc = 0x38989Cu;
            goto label_38989c;
        }
    }
    ctx->pc = 0x389890u;
    // 0x389890: 0x8ce20024  lw          $v0, 0x24($a3)
    ctx->pc = 0x389890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x389894: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x389894u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x389898: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x389898u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_38989c:
    // 0x38989c: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x38989cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x3898a0: 0x28440039  slti        $a0, $v0, 0x39
    ctx->pc = 0x3898a0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x3898a4: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3898A4u;
    {
        const bool branch_taken_0x3898a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3898A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3898A4u;
        // 0x3898a8: 0xdcea0008  ld          $t2, 0x8($a3) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3898a4) {
            ctx->pc = 0x389904u;
            goto label_389904;
        }
    }
    ctx->pc = 0x3898ACu;
    // 0x3898ac: 0x0  nop
    ctx->pc = 0x3898acu;
    // NOP
label_3898b0:
    // 0x3898b0: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x3898b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x3898b4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x3898b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x3898b8: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x3898b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x3898bc: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3898bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3898c0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x3898c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x3898c4: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x3898c4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3898c8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x3898c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x3898cc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3898ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3898d0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3898d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3898d4: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x3898d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x3898d8: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x3898d8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x3898dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3898DCu;
    {
        const bool branch_taken_0x3898dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3898E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3898DCu;
        // 0x3898e0: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3898dc) {
            ctx->pc = 0x3898ECu;
            goto label_3898ec;
        }
    }
    ctx->pc = 0x3898E4u;
    // 0x3898e4: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x3898e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x3898e8: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x3898e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_3898ec:
    // 0x3898ec: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x3898ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x3898f0: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x3898f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x3898f4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3898F4u;
    {
        const bool branch_taken_0x3898f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3898F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3898F4u;
        // 0x3898f8: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3898f4) {
            ctx->pc = 0x3898B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3898b0;
        }
    }
    ctx->pc = 0x3898FCu;
    // 0x3898fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3898FCu;
    {
        const bool branch_taken_0x3898fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3898FCu;
        // 0x389900: 0xfcea0008  sd          $t2, 0x8($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3898fc) {
            ctx->pc = 0x389908u;
            goto label_389908;
        }
    }
    ctx->pc = 0x389904u;
label_389904:
    // 0x389904: 0xfcea0008  sd          $t2, 0x8($a3)
    ctx->pc = 0x389904u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 10));
label_389908:
    // 0x389908: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x389908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x38990c: 0x3404bd00  ori         $a0, $zero, 0xBD00
    ctx->pc = 0x38990cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48384);
    // 0x389910: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x389910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x389914: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x389914u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x389918: 0x524023  subu        $t0, $v0, $s2
    ctx->pc = 0x389918u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x38991c: 0x2505fffd  addiu       $a1, $t0, -0x3
    ctx->pc = 0x38991cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967293));
    // 0x389920: 0xacc50024  sw          $a1, 0x24($a2)
    ctx->pc = 0x389920u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 5));
    // 0x389924: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x389924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x389928: 0x1464002e  bne         $v1, $a0, . + 4 + (0x2E << 2)
    ctx->pc = 0x389928u;
    {
        const bool branch_taken_0x389928 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x38992Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389928u;
        // 0x38992c: 0xacc20020  sw          $v0, 0x20($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389928) {
            ctx->pc = 0x3899E4u;
            goto label_3899e4;
        }
    }
    ctx->pc = 0x389930u;
    // 0x389930: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x389930u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x389934: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x389934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x389938: 0x2283f  dsra32      $a1, $v0, 0
    ctx->pc = 0x389938u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x38993c: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x38993cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x389940: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x389940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x389944: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x389944u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x389948: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x389948u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x38994c: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x38994Cu;
    {
        const bool branch_taken_0x38994c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x389950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38994Cu;
        // 0x389950: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38994c) {
            ctx->pc = 0x3899BCu;
            goto label_3899bc;
        }
    }
    ctx->pc = 0x389954u;
    // 0x389954: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x389954u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x389958: 0x5603c  dsll32      $t4, $a1, 0
    ctx->pc = 0x389958u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) << (32 + 0));
    // 0x38995c: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x38995cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x389960: 0x250bfff9  addiu       $t3, $t0, -0x7
    ctx->pc = 0x389960u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967289));
    // 0x389964: 0x0  nop
    ctx->pc = 0x389964u;
    // NOP
label_389968:
    // 0x389968: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x389968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x38996c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x38996cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x389970: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x389970u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x389974: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x389974u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x389978: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x389978u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x38997c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x38997cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x389980: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x389980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x389984: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x389984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x389988: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x389988u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x38998c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x38998cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x389990: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x389990u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x389994: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x389994u;
    {
        const bool branch_taken_0x389994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x389998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389994u;
        // 0x389998: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389994) {
            ctx->pc = 0x3899A4u;
            goto label_3899a4;
        }
    }
    ctx->pc = 0x38999Cu;
    // 0x38999c: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x38999cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x3899a0: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x3899a0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_3899a4:
    // 0x3899a4: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x3899a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x3899a8: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x3899a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x3899ac: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3899ACu;
    {
        const bool branch_taken_0x3899ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3899B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3899ACu;
        // 0x3899b0: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3899ac) {
            ctx->pc = 0x389968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_389968;
        }
    }
    ctx->pc = 0x3899B4u;
    // 0x3899b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3899B4u;
    {
        const bool branch_taken_0x3899b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3899B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3899B4u;
        // 0x3899b8: 0x65420020  daddiu      $v0, $t2, 0x20 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3899b4) {
            ctx->pc = 0x3899CCu;
            goto label_3899cc;
        }
    }
    ctx->pc = 0x3899BCu;
label_3899bc:
    // 0x3899bc: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x3899bcu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x3899c0: 0x5603c  dsll32      $t4, $a1, 0
    ctx->pc = 0x3899c0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3899c4: 0x250bfff9  addiu       $t3, $t0, -0x7
    ctx->pc = 0x3899c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967289));
    // 0x3899c8: 0x65420020  daddiu      $v0, $t2, 0x20
    ctx->pc = 0x3899c8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)32);
label_3899cc:
    // 0x3899cc: 0xc183e  dsrl32      $v1, $t4, 0
    ctx->pc = 0x3899ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) >> (32 + 0));
    // 0x3899d0: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x3899d0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x3899d4: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x3899d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3899d8: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x3899d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3899dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3899dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3899e0: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x3899e0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_3899e4:
    // 0x3899e4: 0x10a000d4  beqz        $a1, . + 4 + (0xD4 << 2)
    ctx->pc = 0x3899E4u;
    {
        const bool branch_taken_0x3899e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3899E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3899E4u;
        // 0x3899e8: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3899e4) {
            ctx->pc = 0x389D38u;
            goto label_389d38;
        }
    }
    ctx->pc = 0x3899ECu;
    // 0x3899ec: 0xdce30008  ld          $v1, 0x8($a3)
    ctx->pc = 0x3899ecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x3899f0: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x3899f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x3899f4: 0x43182d  daddu       $v1, $v0, $v1
    ctx->pc = 0x3899f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3899f8: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x3899f8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
label_3899fc:
    // 0x3899fc: 0x31778  dsll        $v0, $v1, 29
    ctx->pc = 0x3899fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 29);
    // 0x389a00: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x389a00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x389a04: 0xfce00000  sd          $zero, 0x0($a3)
    ctx->pc = 0x389a04u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 0));
    // 0x389a08: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x389a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x389a0c: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x389a0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389a10: 0xace00018  sw          $zero, 0x18($a3)
    ctx->pc = 0x389a10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
    // 0x389a14: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x389a14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x389a18: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x389a18u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
    // 0x389a1c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x389A1Cu;
    {
        const bool branch_taken_0x389a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x389A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389A1Cu;
        // 0x389a20: 0xace40014  sw          $a0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389a1c) {
            ctx->pc = 0x389A30u;
            goto label_389a30;
        }
    }
    ctx->pc = 0x389A24u;
    // 0x389a24: 0x8ce20024  lw          $v0, 0x24($a3)
    ctx->pc = 0x389a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x389a28: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x389a28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x389a2c: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x389a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_389a30:
    // 0x389a30: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x389a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x389a34: 0x28440039  slti        $a0, $v0, 0x39
    ctx->pc = 0x389a34u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x389a38: 0x108000be  beqz        $a0, . + 4 + (0xBE << 2)
    ctx->pc = 0x389A38u;
    {
        const bool branch_taken_0x389a38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x389A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389A38u;
        // 0x389a3c: 0xdcea0008  ld          $t2, 0x8($a3) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389a38) {
            ctx->pc = 0x389D34u;
            goto label_389d34;
        }
    }
    ctx->pc = 0x389A40u;
label_389a40:
    // 0x389a40: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x389a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x389a44: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x389a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x389a48: 0x8ce60018  lw          $a2, 0x18($a3)
    ctx->pc = 0x389a48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x389a4c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x389a4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x389a50: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x389a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x389a54: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x389a54u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x389a58: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x389a58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
label_389a5c:
    // 0x389a5c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x389a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x389a60: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x389a60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x389a64: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x389a64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x389a68: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x389a68u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x389a6c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x389A6Cu;
    {
        const bool branch_taken_0x389a6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x389A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389A6Cu;
        // 0x389a70: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389a6c) {
            ctx->pc = 0x389A7Cu;
            goto label_389a7c;
        }
    }
    ctx->pc = 0x389A74u;
    // 0x389a74: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x389a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x389a78: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x389a78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_389a7c:
    // 0x389a7c: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x389a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x389a80: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x389a80u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x389a84: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x389A84u;
    {
        const bool branch_taken_0x389a84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x389A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389A84u;
        // 0x389a88: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389a84) {
            ctx->pc = 0x389A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_389a40;
        }
    }
    ctx->pc = 0x389A8Cu;
    // 0x389a8c: 0x100000aa  b           . + 4 + (0xAA << 2)
    ctx->pc = 0x389A8Cu;
    {
        const bool branch_taken_0x389a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389A8Cu;
        // 0x389a90: 0xfcea0008  sd          $t2, 0x8($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389a8c) {
            ctx->pc = 0x389D38u;
            goto label_389d38;
        }
    }
    ctx->pc = 0x389A94u;
label_389a94:
    // 0x389a94: 0x3402bc00  ori         $v0, $zero, 0xBC00
    ctx->pc = 0x389a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48128);
    // 0x389a98: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x389a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x389a9c: 0x11220019  beq         $t1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x389A9Cu;
    {
        const bool branch_taken_0x389a9c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 2));
        if (branch_taken_0x389a9c) {
            ctx->pc = 0x389B04u;
            goto label_389b04;
        }
    }
    ctx->pc = 0x389AA4u;
    // 0x389aa4: 0x3402bf00  ori         $v0, $zero, 0xBF00
    ctx->pc = 0x389aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48896);
    // 0x389aa8: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x389aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x389aac: 0x10a20017  beq         $a1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x389AACu;
    {
        const bool branch_taken_0x389aac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x389aac) {
            ctx->pc = 0x389B0Cu;
            goto label_389b0c;
        }
    }
    ctx->pc = 0x389AB4u;
    // 0x389ab4: 0x3402f000  ori         $v0, $zero, 0xF000
    ctx->pc = 0x389ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61440);
    // 0x389ab8: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x389ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x389abc: 0x10a20011  beq         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x389ABCu;
    {
        const bool branch_taken_0x389abc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x389abc) {
            ctx->pc = 0x389B04u;
            goto label_389b04;
        }
    }
    ctx->pc = 0x389AC4u;
    // 0x389ac4: 0x3402f100  ori         $v0, $zero, 0xF100
    ctx->pc = 0x389ac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61696);
    // 0x389ac8: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x389ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x389acc: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x389ACCu;
    {
        const bool branch_taken_0x389acc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x389acc) {
            ctx->pc = 0x389B04u;
            goto label_389b04;
        }
    }
    ctx->pc = 0x389AD4u;
    // 0x389ad4: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x389ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x389ad8: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x389ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x389adc: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x389ADCu;
    {
        const bool branch_taken_0x389adc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x389adc) {
            ctx->pc = 0x389B04u;
            goto label_389b04;
        }
    }
    ctx->pc = 0x389AE4u;
    // 0x389ae4: 0x3402f200  ori         $v0, $zero, 0xF200
    ctx->pc = 0x389ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)61952);
    // 0x389ae8: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x389ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x389aec: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x389AECu;
    {
        const bool branch_taken_0x389aec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x389aec) {
            ctx->pc = 0x389B04u;
            goto label_389b04;
        }
    }
    ctx->pc = 0x389AF4u;
    // 0x389af4: 0x3402f800  ori         $v0, $zero, 0xF800
    ctx->pc = 0x389af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63488);
    // 0x389af8: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x389af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x389afc: 0x14a2005d  bne         $a1, $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x389AFCu;
    {
        const bool branch_taken_0x389afc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x389afc) {
            ctx->pc = 0x389C74u;
            goto label_389c74;
        }
    }
    ctx->pc = 0x389B04u;
label_389b04:
    // 0x389b04: 0x3402bf00  ori         $v0, $zero, 0xBF00
    ctx->pc = 0x389b04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48896);
    // 0x389b08: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x389b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_389b0c:
    // 0x389b0c: 0x1522002d  bne         $t1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x389B0Cu;
    {
        const bool branch_taken_0x389b0c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x389B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389B0Cu;
        // 0x389b10: 0x8cc80008  lw          $t0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389b0c) {
            ctx->pc = 0x389BC4u;
            goto label_389bc4;
        }
    }
    ctx->pc = 0x389B14u;
    // 0x389b14: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x389b14u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x389b18: 0x8ce30018  lw          $v1, 0x18($a3)
    ctx->pc = 0x389b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x389b1c: 0x2283f  dsra32      $a1, $v0, 0
    ctx->pc = 0x389b1cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x389b20: 0x2463ffe0  addiu       $v1, $v1, -0x20
    ctx->pc = 0x389b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x389b24: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x389b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x389b28: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x389b28u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x389b2c: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x389b2cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x389b30: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x389B30u;
    {
        const bool branch_taken_0x389b30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x389B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389B30u;
        // 0x389b34: 0xace30018  sw          $v1, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389b30) {
            ctx->pc = 0x389B9Cu;
            goto label_389b9c;
        }
    }
    ctx->pc = 0x389B38u;
    // 0x389b38: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x389b38u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x389b3c: 0x5603c  dsll32      $t4, $a1, 0
    ctx->pc = 0x389b3cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) << (32 + 0));
    // 0x389b40: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x389b40u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x389b44: 0x250bfffc  addiu       $t3, $t0, -0x4
    ctx->pc = 0x389b44u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
label_389b48:
    // 0x389b48: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x389b48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x389b4c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x389b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x389b50: 0x8ce80018  lw          $t0, 0x18($a3)
    ctx->pc = 0x389b50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x389b54: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x389b54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x389b58: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x389b58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x389b5c: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x389b5cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x389b60: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x389b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x389b64: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x389b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x389b68: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x389b68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x389b6c: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x389b6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x389b70: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x389b70u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x389b74: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x389B74u;
    {
        const bool branch_taken_0x389b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x389B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389B74u;
        // 0x389b78: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389b74) {
            ctx->pc = 0x389B84u;
            goto label_389b84;
        }
    }
    ctx->pc = 0x389B7Cu;
    // 0x389b7c: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x389b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x389b80: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x389b80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_389b84:
    // 0x389b84: 0x25020008  addiu       $v0, $t0, 0x8
    ctx->pc = 0x389b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x389b88: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x389b88u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x389b8c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x389B8Cu;
    {
        const bool branch_taken_0x389b8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x389B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389B8Cu;
        // 0x389b90: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389b8c) {
            ctx->pc = 0x389B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_389b48;
        }
    }
    ctx->pc = 0x389B94u;
    // 0x389b94: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x389B94u;
    {
        const bool branch_taken_0x389b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389B94u;
        // 0x389b98: 0x65420020  daddiu      $v0, $t2, 0x20 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x389b94) {
            ctx->pc = 0x389BACu;
            goto label_389bac;
        }
    }
    ctx->pc = 0x389B9Cu;
label_389b9c:
    // 0x389b9c: 0xdcea0008  ld          $t2, 0x8($a3)
    ctx->pc = 0x389b9cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x389ba0: 0x5603c  dsll32      $t4, $a1, 0
    ctx->pc = 0x389ba0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) << (32 + 0));
    // 0x389ba4: 0x250bfffc  addiu       $t3, $t0, -0x4
    ctx->pc = 0x389ba4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x389ba8: 0x65420020  daddiu      $v0, $t2, 0x20
    ctx->pc = 0x389ba8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)32);
label_389bac:
    // 0x389bac: 0xc183e  dsrl32      $v1, $t4, 0
    ctx->pc = 0x389bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) >> (32 + 0));
    // 0x389bb0: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x389bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x389bb4: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x389bb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389bb8: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x389bb8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x389bbc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x389bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x389bc0: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x389bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_389bc4:
    // 0x389bc4: 0x1100005c  beqz        $t0, . + 4 + (0x5C << 2)
    ctx->pc = 0x389BC4u;
    {
        const bool branch_taken_0x389bc4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x389BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389BC4u;
        // 0x389bc8: 0x810c0  sll         $v0, $t0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389bc4) {
            ctx->pc = 0x389D38u;
            goto label_389d38;
        }
    }
    ctx->pc = 0x389BCCu;
    // 0x389bcc: 0xdce30008  ld          $v1, 0x8($a3)
    ctx->pc = 0x389bccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x389bd0: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x389bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x389bd4: 0x43182d  daddu       $v1, $v0, $v1
    ctx->pc = 0x389bd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x389bd8: 0x8ce90020  lw          $t1, 0x20($a3)
    ctx->pc = 0x389bd8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x389bdc: 0x31778  dsll        $v0, $v1, 29
    ctx->pc = 0x389bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 29);
    // 0x389be0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x389be0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x389be4: 0xfce00000  sd          $zero, 0x0($a3)
    ctx->pc = 0x389be4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 0));
    // 0x389be8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x389be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x389bec: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x389becu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389bf0: 0xace00018  sw          $zero, 0x18($a3)
    ctx->pc = 0x389bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
    // 0x389bf4: 0x88102b  sltu        $v0, $a0, $t0
    ctx->pc = 0x389bf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x389bf8: 0xfce30008  sd          $v1, 0x8($a3)
    ctx->pc = 0x389bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 3));
    // 0x389bfc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x389BFCu;
    {
        const bool branch_taken_0x389bfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x389C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389BFCu;
        // 0x389c00: 0xace40014  sw          $a0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389bfc) {
            ctx->pc = 0x389C10u;
            goto label_389c10;
        }
    }
    ctx->pc = 0x389C04u;
    // 0x389c04: 0x8ce20024  lw          $v0, 0x24($a3)
    ctx->pc = 0x389c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x389c08: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x389c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x389c0c: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x389c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_389c10:
    // 0x389c10: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x389c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_389c14:
    // 0x389c14: 0x28440039  slti        $a0, $v0, 0x39
    ctx->pc = 0x389c14u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x389c18: 0x10800046  beqz        $a0, . + 4 + (0x46 << 2)
    ctx->pc = 0x389C18u;
    {
        const bool branch_taken_0x389c18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x389C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389C18u;
        // 0x389c1c: 0xdcea0008  ld          $t2, 0x8($a3) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389c18) {
            ctx->pc = 0x389D34u;
            goto label_389d34;
        }
    }
    ctx->pc = 0x389C20u;
label_389c20:
    // 0x389c20: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x389c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x389c24: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x389c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x389c28: 0x8ce60018  lw          $a2, 0x18($a3)
    ctx->pc = 0x389c28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x389c2c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x389c2cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x389c30: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x389c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x389c34: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x389c34u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x389c38: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x389c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x389c3c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x389c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x389c40: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x389c40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x389c44: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x389c44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x389c48: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x389c48u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x389c4c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x389C4Cu;
    {
        const bool branch_taken_0x389c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x389C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389C4Cu;
        // 0x389c50: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389c4c) {
            ctx->pc = 0x389C5Cu;
            goto label_389c5c;
        }
    }
    ctx->pc = 0x389C54u;
    // 0x389c54: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x389c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x389c58: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x389c58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_389c5c:
    // 0x389c5c: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x389c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x389c60: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x389c60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x389c64: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x389C64u;
    {
        const bool branch_taken_0x389c64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x389C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389C64u;
        // 0x389c68: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389c64) {
            ctx->pc = 0x389C20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_389c20;
        }
    }
    ctx->pc = 0x389C6Cu;
    // 0x389c6c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x389C6Cu;
    {
        const bool branch_taken_0x389c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389C6Cu;
        // 0x389c70: 0xfcea0008  sd          $t2, 0x8($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389c6c) {
            ctx->pc = 0x389D38u;
            goto label_389d38;
        }
    }
    ctx->pc = 0x389C74u;
label_389c74:
    // 0x389c74: 0x3402be00  ori         $v0, $zero, 0xBE00
    ctx->pc = 0x389c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48640);
    // 0x389c78: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x389c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x389c7c: 0x14a2002f  bne         $a1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x389C7Cu;
    {
        const bool branch_taken_0x389c7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x389C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389C7Cu;
        // 0x389c80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389c7c) {
            ctx->pc = 0x389D3Cu;
            goto label_389d3c;
        }
    }
    ctx->pc = 0x389C84u;
    // 0x389c84: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x389c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x389c88: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x389C88u;
    {
        const bool branch_taken_0x389c88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x389C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389C88u;
        // 0x389c8c: 0x318c0  sll         $v1, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389c88) {
            ctx->pc = 0x389D3Cu;
            goto label_389d3c;
        }
    }
    ctx->pc = 0x389C90u;
    // 0x389c90: 0xdce20008  ld          $v0, 0x8($a3)
    ctx->pc = 0x389c90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x389c94: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x389c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x389c98: 0x62102d  daddu       $v0, $v1, $v0
    ctx->pc = 0x389c98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x389c9c: 0x8ce80020  lw          $t0, 0x20($a3)
    ctx->pc = 0x389c9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x389ca0: 0x21f78  dsll        $v1, $v0, 29
    ctx->pc = 0x389ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 29);
    // 0x389ca4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x389ca4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x389ca8: 0xfce00000  sd          $zero, 0x0($a3)
    ctx->pc = 0x389ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 0));
    // 0x389cac: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x389cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x389cb0: 0xace00018  sw          $zero, 0x18($a3)
    ctx->pc = 0x389cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
    // 0x389cb4: 0xfce20008  sd          $v0, 0x8($a3)
    ctx->pc = 0x389cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 2));
    // 0x389cb8: 0x88182b  sltu        $v1, $a0, $t0
    ctx->pc = 0x389cb8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x389cbc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x389CBCu;
    {
        const bool branch_taken_0x389cbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x389CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389CBCu;
        // 0x389cc0: 0xace40014  sw          $a0, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389cbc) {
            ctx->pc = 0x389CD0u;
            goto label_389cd0;
        }
    }
    ctx->pc = 0x389CC4u;
    // 0x389cc4: 0x8ce20024  lw          $v0, 0x24($a3)
    ctx->pc = 0x389cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x389cc8: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x389cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x389ccc: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x389cccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_389cd0:
    // 0x389cd0: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x389cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x389cd4: 0x28440039  slti        $a0, $v0, 0x39
    ctx->pc = 0x389cd4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x389cd8: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x389CD8u;
    {
        const bool branch_taken_0x389cd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x389CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389CD8u;
        // 0x389cdc: 0xdcea0008  ld          $t2, 0x8($a3) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389cd8) {
            ctx->pc = 0x389D34u;
            goto label_389d34;
        }
    }
    ctx->pc = 0x389CE0u;
label_389ce0:
    // 0x389ce0: 0x8ce50014  lw          $a1, 0x14($a3)
    ctx->pc = 0x389ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x389ce4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x389ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x389ce8: 0x8ce60018  lw          $a2, 0x18($a3)
    ctx->pc = 0x389ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x389cec: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x389cecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x389cf0: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x389cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x389cf4: 0xdce40000  ld          $a0, 0x0($a3)
    ctx->pc = 0x389cf4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x389cf8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x389cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x389cfc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x389cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x389d00: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x389d00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x389d04: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x389d04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x389d08: 0xfce40000  sd          $a0, 0x0($a3)
    ctx->pc = 0x389d08u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 4));
    // 0x389d0c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x389D0Cu;
    {
        const bool branch_taken_0x389d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x389D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389D0Cu;
        // 0x389d10: 0xace50014  sw          $a1, 0x14($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389d0c) {
            ctx->pc = 0x389D1Cu;
            goto label_389d1c;
        }
    }
    ctx->pc = 0x389D14u;
    // 0x389d14: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x389d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x389d18: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x389d18u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
label_389d1c:
    // 0x389d1c: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x389d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x389d20: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x389d20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x389d24: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x389D24u;
    {
        const bool branch_taken_0x389d24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x389D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389D24u;
        // 0x389d28: 0xace20018  sw          $v0, 0x18($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389d24) {
            ctx->pc = 0x389CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_389ce0;
        }
    }
    ctx->pc = 0x389D2Cu;
    // 0x389d2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x389D2Cu;
    {
        const bool branch_taken_0x389d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x389D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389D2Cu;
        // 0x389d30: 0xfcea0008  sd          $t2, 0x8($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389d2c) {
            ctx->pc = 0x389D38u;
            goto label_389d38;
        }
    }
    ctx->pc = 0x389D34u;
label_389d34:
    // 0x389d34: 0xfcea0008  sd          $t2, 0x8($a3)
    ctx->pc = 0x389d34u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 10));
label_389d38:
    // 0x389d38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x389d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_389d3c:
    // 0x389d3c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x389d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x389d40: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x389d40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x389d44: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x389d44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x389d48: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x389d48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x389d4c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x389d4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x389d50: 0x3e00008  jr          $ra
    ctx->pc = 0x389D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389D50u;
        // 0x389d54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389D50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389D58u;
}
