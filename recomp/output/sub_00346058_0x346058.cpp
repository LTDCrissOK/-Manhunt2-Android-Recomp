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

// Function: sub_00346058
// Address: 0x346058 - 0x3461e8
void sub_00346058_0x346058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346058_0x346058");
#endif

    switch (ctx->pc) {
        case 0x346058u: goto label_346058;
        case 0x34605cu: goto label_34605c;
        case 0x346060u: goto label_346060;
        case 0x346064u: goto label_346064;
        case 0x346068u: goto label_346068;
        case 0x34606cu: goto label_34606c;
        case 0x346070u: goto label_346070;
        case 0x346074u: goto label_346074;
        case 0x346078u: goto label_346078;
        case 0x34607cu: goto label_34607c;
        case 0x346080u: goto label_346080;
        case 0x346084u: goto label_346084;
        case 0x346088u: goto label_346088;
        case 0x34608cu: goto label_34608c;
        case 0x346090u: goto label_346090;
        case 0x346094u: goto label_346094;
        case 0x346098u: goto label_346098;
        case 0x34609cu: goto label_34609c;
        case 0x3460a0u: goto label_3460a0;
        case 0x3460a4u: goto label_3460a4;
        case 0x3460a8u: goto label_3460a8;
        case 0x3460acu: goto label_3460ac;
        case 0x3460b0u: goto label_3460b0;
        case 0x3460b4u: goto label_3460b4;
        case 0x3460b8u: goto label_3460b8;
        case 0x3460bcu: goto label_3460bc;
        case 0x3460c0u: goto label_3460c0;
        case 0x3460c4u: goto label_3460c4;
        case 0x3460c8u: goto label_3460c8;
        case 0x3460ccu: goto label_3460cc;
        case 0x3460d0u: goto label_3460d0;
        case 0x3460d4u: goto label_3460d4;
        case 0x3460d8u: goto label_3460d8;
        case 0x3460dcu: goto label_3460dc;
        case 0x3460e0u: goto label_3460e0;
        case 0x3460e4u: goto label_3460e4;
        case 0x3460e8u: goto label_3460e8;
        case 0x3460ecu: goto label_3460ec;
        case 0x3460f0u: goto label_3460f0;
        case 0x3460f4u: goto label_3460f4;
        case 0x3460f8u: goto label_3460f8;
        case 0x3460fcu: goto label_3460fc;
        case 0x346100u: goto label_346100;
        case 0x346104u: goto label_346104;
        case 0x346108u: goto label_346108;
        case 0x34610cu: goto label_34610c;
        case 0x346110u: goto label_346110;
        case 0x346114u: goto label_346114;
        case 0x346118u: goto label_346118;
        case 0x34611cu: goto label_34611c;
        case 0x346120u: goto label_346120;
        case 0x346124u: goto label_346124;
        case 0x346128u: goto label_346128;
        case 0x34612cu: goto label_34612c;
        case 0x346130u: goto label_346130;
        case 0x346134u: goto label_346134;
        case 0x346138u: goto label_346138;
        case 0x34613cu: goto label_34613c;
        case 0x346140u: goto label_346140;
        case 0x346144u: goto label_346144;
        case 0x346148u: goto label_346148;
        case 0x34614cu: goto label_34614c;
        case 0x346150u: goto label_346150;
        case 0x346154u: goto label_346154;
        case 0x346158u: goto label_346158;
        case 0x34615cu: goto label_34615c;
        case 0x346160u: goto label_346160;
        case 0x346164u: goto label_346164;
        case 0x346168u: goto label_346168;
        case 0x34616cu: goto label_34616c;
        case 0x346170u: goto label_346170;
        case 0x346174u: goto label_346174;
        case 0x346178u: goto label_346178;
        case 0x34617cu: goto label_34617c;
        case 0x346180u: goto label_346180;
        case 0x346184u: goto label_346184;
        case 0x346188u: goto label_346188;
        case 0x34618cu: goto label_34618c;
        case 0x346190u: goto label_346190;
        case 0x346194u: goto label_346194;
        case 0x346198u: goto label_346198;
        case 0x34619cu: goto label_34619c;
        case 0x3461a0u: goto label_3461a0;
        case 0x3461a4u: goto label_3461a4;
        case 0x3461a8u: goto label_3461a8;
        case 0x3461acu: goto label_3461ac;
        case 0x3461b0u: goto label_3461b0;
        case 0x3461b4u: goto label_3461b4;
        case 0x3461b8u: goto label_3461b8;
        case 0x3461bcu: goto label_3461bc;
        case 0x3461c0u: goto label_3461c0;
        case 0x3461c4u: goto label_3461c4;
        case 0x3461c8u: goto label_3461c8;
        case 0x3461ccu: goto label_3461cc;
        case 0x3461d0u: goto label_3461d0;
        case 0x3461d4u: goto label_3461d4;
        case 0x3461d8u: goto label_3461d8;
        case 0x3461dcu: goto label_3461dc;
        case 0x3461e0u: goto label_3461e0;
        case 0x3461e4u: goto label_3461e4;
        default: break;
    }

    ctx->pc = 0x346058u;

label_346058:
    // 0x346058: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x346058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_34605c:
    // 0x34605c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x34605cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_346060:
    // 0x346060: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x346060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_346064:
    // 0x346064: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x346064u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_346068:
    // 0x346068: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x346068u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_34606c:
    // 0x34606c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x34606cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_346070:
    // 0x346070: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x346070u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_346074:
    // 0x346074: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x346074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_346078:
    // 0x346078: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x346078u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_34607c:
    // 0x34607c: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x34607cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_346080:
    // 0x346080: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x346080u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_346084:
    // 0x346084: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x346084u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_346088:
    // 0x346088: 0x0  nop
    ctx->pc = 0x346088u;
    // NOP
label_34608c:
    // 0x34608c: 0x4500004e  bc1f        . + 4 + (0x4E << 2)
label_346090:
    if (ctx->pc == 0x346090u) {
        ctx->pc = 0x346090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34608Cu;
        // 0x346090: 0xe6000114  swc1        $f0, 0x114($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x346094u;
        goto label_346094;
    }
    ctx->pc = 0x34608Cu;
    {
        const bool branch_taken_0x34608c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x346090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34608Cu;
        // 0x346090: 0xe6000114  swc1        $f0, 0x114($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34608c) {
            ctx->pc = 0x3461C8u;
            goto label_3461c8;
        }
    }
    ctx->pc = 0x346094u;
label_346094:
    // 0x346094: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x346094u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_346098:
    // 0x346098: 0x46000d46  mov.s       $f21, $f1
    ctx->pc = 0x346098u;
    ctx->f[21] = FPU_MOV_S(ctx->f[1]);
label_34609c:
    // 0x34609c: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x34609cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_3460a0:
    // 0x3460a0: 0x8e030118  lw          $v1, 0x118($s0)
    ctx->pc = 0x3460a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_3460a4:
    // 0x3460a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3460a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3460a8:
    // 0x3460a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3460a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3460ac:
    // 0x3460ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3460acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3460b0:
    // 0x3460b0: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x3460b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3460b4:
    // 0x3460b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3460b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3460b8:
    // 0x3460b8: 0x10000011  b           . + 4 + (0x11 << 2)
label_3460bc:
    if (ctx->pc == 0x3460BCu) {
        ctx->pc = 0x3460BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3460B8u;
        // 0x3460bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3460C0u;
        goto label_3460c0;
    }
    ctx->pc = 0x3460B8u;
    {
        const bool branch_taken_0x3460b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3460BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3460B8u;
        // 0x3460bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3460b8) {
            ctx->pc = 0x346100u;
            goto label_346100;
        }
    }
    ctx->pc = 0x3460C0u;
label_3460c0:
    // 0x3460c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3460c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3460c4:
    // 0x3460c4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x3460c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3460c8:
    // 0x3460c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3460c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3460cc:
    // 0x3460cc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x3460ccu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_3460d0:
    // 0x3460d0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_3460d4:
    if (ctx->pc == 0x3460D4u) {
        ctx->pc = 0x3460D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3460D0u;
        // 0x3460d4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3460D8u;
        goto label_3460d8;
    }
    ctx->pc = 0x3460D0u;
    {
        const bool branch_taken_0x3460d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3460d0) {
            ctx->pc = 0x3460D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3460D0u;
            // 0x3460d4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3460D8u;
            goto label_3460d8;
        }
    }
    ctx->pc = 0x3460D8u;
label_3460d8:
    // 0x3460d8: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x3460d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3460dc:
    // 0x3460dc: 0x2010  mfhi        $a0
    ctx->pc = 0x3460dcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_3460e0:
    // 0x3460e0: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_3460e4:
    if (ctx->pc == 0x3460E4u) {
        ctx->pc = 0x3460E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3460E0u;
        // 0x3460e4: 0xae040100  sw          $a0, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3460E8u;
        goto label_3460e8;
    }
    ctx->pc = 0x3460E0u;
    {
        const bool branch_taken_0x3460e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3460E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3460E0u;
        // 0x3460e4: 0xae040100  sw          $a0, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3460e0) {
            ctx->pc = 0x346118u;
            goto label_346118;
        }
    }
    ctx->pc = 0x3460E8u;
label_3460e8:
    // 0x3460e8: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x3460e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_3460ec:
    // 0x3460ec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x3460ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3460f0:
    // 0x3460f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3460f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3460f4:
    // 0x3460f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3460f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3460f8:
    // 0x3460f8: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x3460f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3460fc:
    // 0x3460fc: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x3460fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_346100:
    // 0x346100: 0x0  nop
    ctx->pc = 0x346100u;
    // NOP
label_346104:
    // 0x346104: 0x4503ffee  bc1tl       . + 4 + (-0x12 << 2)
label_346108:
    if (ctx->pc == 0x346108u) {
        ctx->pc = 0x346108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346104u;
        // 0x346108: 0x8e020100  lw          $v0, 0x100($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34610Cu;
        goto label_34610c;
    }
    ctx->pc = 0x346104u;
    {
        const bool branch_taken_0x346104 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x346104) {
            ctx->pc = 0x346108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x346104u;
            // 0x346108: 0x8e020100  lw          $v0, 0x100($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3460C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3460c0;
        }
    }
    ctx->pc = 0x34610Cu;
label_34610c:
    // 0x34610c: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x34610cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_346110:
    // 0x346110: 0x5451ffeb  bnel        $v0, $s1, . + 4 + (-0x15 << 2)
label_346114:
    if (ctx->pc == 0x346114u) {
        ctx->pc = 0x346114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346110u;
        // 0x346114: 0x8e020100  lw          $v0, 0x100($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346118u;
        goto label_346118;
    }
    ctx->pc = 0x346110u;
    {
        const bool branch_taken_0x346110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x346110) {
            ctx->pc = 0x346114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x346110u;
            // 0x346114: 0x8e020100  lw          $v0, 0x100($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3460C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3460c0;
        }
    }
    ctx->pc = 0x346118u;
label_346118:
    // 0x346118: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x346118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_34611c:
    // 0x34611c: 0x8e020118  lw          $v0, 0x118($s0)
    ctx->pc = 0x34611cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_346120:
    // 0x346120: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x346120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_346124:
    // 0x346124: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x346124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_346128:
    // 0x346128: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x346128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_34612c:
    // 0x34612c: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x34612cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_346130:
    // 0x346130: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x346130u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_346134:
    // 0x346134: 0x0  nop
    ctx->pc = 0x346134u;
    // NOP
label_346138:
    // 0x346138: 0x4502001a  bc1fl       . + 4 + (0x1A << 2)
label_34613c:
    if (ctx->pc == 0x34613Cu) {
        ctx->pc = 0x34613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346138u;
        // 0x34613c: 0xc6000114  lwc1        $f0, 0x114($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x346140u;
        goto label_346140;
    }
    ctx->pc = 0x346138u;
    {
        const bool branch_taken_0x346138 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x346138) {
            ctx->pc = 0x34613Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x346138u;
            // 0x34613c: 0xc6000114  lwc1        $f0, 0x114($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3461A4u;
            goto label_3461a4;
        }
    }
    ctx->pc = 0x346140u;
label_346140:
    // 0x346140: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x346140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_346144:
    // 0x346144: 0x54510017  bnel        $v0, $s1, . + 4 + (0x17 << 2)
label_346148:
    if (ctx->pc == 0x346148u) {
        ctx->pc = 0x346148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346144u;
        // 0x346148: 0xc6000114  lwc1        $f0, 0x114($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x34614Cu;
        goto label_34614c;
    }
    ctx->pc = 0x346144u;
    {
        const bool branch_taken_0x346144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x346144) {
            ctx->pc = 0x346148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x346144u;
            // 0x346148: 0xc6000114  lwc1        $f0, 0x114($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3461A4u;
            goto label_3461a4;
        }
    }
    ctx->pc = 0x34614Cu;
label_34614c:
    // 0x34614c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x34614cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_346150:
    // 0x346150: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x346150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_346154:
    // 0x346154: 0x40f809  jalr        $v0
label_346158:
    if (ctx->pc == 0x346158u) {
        ctx->pc = 0x346158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346154u;
        // 0x346158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34615Cu;
        goto label_34615c;
    }
    ctx->pc = 0x346154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34615Cu);
        ctx->pc = 0x346158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346154u;
        // 0x346158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346154u, 0x34615Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34615Cu;
label_34615c:
    // 0x34615c: 0x8e0300dc  lw          $v1, 0xDC($s0)
    ctx->pc = 0x34615cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
label_346160:
    // 0x346160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x346160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_346164:
    // 0x346164: 0x8e050134  lw          $a1, 0x134($s0)
    ctx->pc = 0x346164u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
label_346168:
    // 0x346168: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x346168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_34616c:
    // 0x34616c: 0xa0f809  jalr        $a1
label_346170:
    if (ctx->pc == 0x346170u) {
        ctx->pc = 0x346170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34616Cu;
        // 0x346170: 0xae0300dc  sw          $v1, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x346174u;
        goto label_346174;
    }
    ctx->pc = 0x34616Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x346174u);
        ctx->pc = 0x346170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34616Cu;
        // 0x346170: 0xae0300dc  sw          $v1, 0xDC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34616Cu, 0x346174u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x346174u;
label_346174:
    // 0x346174: 0x8e020100  lw          $v0, 0x100($s0)
    ctx->pc = 0x346174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
label_346178:
    // 0x346178: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x346178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_34617c:
    // 0x34617c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x34617cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_346180:
    // 0x346180: 0xc6010114  lwc1        $f1, 0x114($s0)
    ctx->pc = 0x346180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_346184:
    // 0x346184: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x346184u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_346188:
    // 0x346188: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x346188u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_34618c:
    // 0x34618c: 0xe6010114  swc1        $f1, 0x114($s0)
    ctx->pc = 0x34618cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
label_346190:
    // 0x346190: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_346194:
    if (ctx->pc == 0x346194u) {
        ctx->pc = 0x346194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x346190u;
        // 0x346194: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x346198u;
        goto label_346198;
    }
    ctx->pc = 0x346190u;
    {
        const bool branch_taken_0x346190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x346190) {
            ctx->pc = 0x346194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x346190u;
            // 0x346194: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x346198u;
            goto label_346198;
        }
    }
    ctx->pc = 0x346198u;
label_346198:
    // 0x346198: 0x2010  mfhi        $a0
    ctx->pc = 0x346198u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_34619c:
    // 0x34619c: 0x10000003  b           . + 4 + (0x3 << 2)
label_3461a0:
    if (ctx->pc == 0x3461A0u) {
        ctx->pc = 0x3461A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34619Cu;
        // 0x3461a0: 0xae040100  sw          $a0, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3461A4u;
        goto label_3461a4;
    }
    ctx->pc = 0x34619Cu;
    {
        const bool branch_taken_0x34619c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3461A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34619Cu;
        // 0x3461a0: 0xae040100  sw          $a0, 0x100($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34619c) {
            ctx->pc = 0x3461ACu;
            goto label_3461ac;
        }
    }
    ctx->pc = 0x3461A4u;
label_3461a4:
    // 0x3461a4: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x3461a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_3461a8:
    // 0x3461a8: 0xe6000114  swc1        $f0, 0x114($s0)
    ctx->pc = 0x3461a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
label_3461ac:
    // 0x3461ac: 0xc6000114  lwc1        $f0, 0x114($s0)
    ctx->pc = 0x3461acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3461b0:
    // 0x3461b0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3461b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3461b4:
    // 0x3461b4: 0x0  nop
    ctx->pc = 0x3461b4u;
    // NOP
label_3461b8:
    // 0x3461b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3461b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3461bc:
    // 0x3461bc: 0x0  nop
    ctx->pc = 0x3461bcu;
    // NOP
label_3461c0:
    // 0x3461c0: 0x4503ffb7  bc1tl       . + 4 + (-0x49 << 2)
label_3461c4:
    if (ctx->pc == 0x3461C4u) {
        ctx->pc = 0x3461C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3461C0u;
        // 0x3461c4: 0x8e020100  lw          $v0, 0x100($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3461C8u;
        goto label_3461c8;
    }
    ctx->pc = 0x3461C0u;
    {
        const bool branch_taken_0x3461c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3461c0) {
            ctx->pc = 0x3461C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3461C0u;
            // 0x3461c4: 0x8e020100  lw          $v0, 0x100($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3460A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3460a0;
        }
    }
    ctx->pc = 0x3461C8u;
label_3461c8:
    // 0x3461c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3461c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3461cc:
    // 0x3461cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3461ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3461d0:
    // 0x3461d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3461d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3461d4:
    // 0x3461d4: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x3461d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3461d8:
    // 0x3461d8: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x3461d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3461dc:
    // 0x3461dc: 0x3e00008  jr          $ra
label_3461e0:
    if (ctx->pc == 0x3461E0u) {
        ctx->pc = 0x3461E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3461DCu;
        // 0x3461e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3461E4u;
        goto label_3461e4;
    }
    ctx->pc = 0x3461DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3461E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3461DCu;
        // 0x3461e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3461DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3461E4u;
label_3461e4:
    // 0x3461e4: 0x0  nop
    ctx->pc = 0x3461e4u;
    // NOP
    ctx->pc = 0x3461e8u;
}
