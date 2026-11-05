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

// Function: sub_00359058
// Address: 0x359058 - 0x3594e0
void sub_00359058_0x359058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00359058_0x359058");
#endif

    switch (ctx->pc) {
        case 0x3590e4u: goto label_3590e4;
        case 0x35910cu: goto label_35910c;
        case 0x359120u: goto label_359120;
        case 0x35912cu: goto label_35912c;
        case 0x359134u: goto label_359134;
        case 0x359144u: goto label_359144;
        case 0x359260u: goto label_359260;
        case 0x359270u: goto label_359270;
        case 0x35928cu: goto label_35928c;
        case 0x359308u: goto label_359308;
        case 0x3593a0u: goto label_3593a0;
        case 0x3593c8u: goto label_3593c8;
        case 0x359428u: goto label_359428;
        case 0x359468u: goto label_359468;
        case 0x359490u: goto label_359490;
        default: break;
    }

    ctx->pc = 0x359058u;

    // 0x359058: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x359058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x35905c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35905cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359060: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x359060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x359064: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x359064u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359068: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x359068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x35906c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x35906cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x359070: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x359070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x359074: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x359074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x359078: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x359078u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35907c: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x35907cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x359080: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x359080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359084: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x359084u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x359088: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x359088u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35908c: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x35908cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x359090: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x359090u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x359094: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x359094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x359098: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x359098u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x35909c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x35909cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x3590a0: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x3590a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x3590a4: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x3590a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x3590a8: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x3590a8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3590ac: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x3590acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x3590b0: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x3590b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x3590b4: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x3590b4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3590b8: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x3590b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3590bc: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x3590bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3590c0: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x3590c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x3590c4: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x3590c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x3590c8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x3590c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x3590cc: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x3590ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x3590d0: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x3590d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
    // 0x3590d4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x3590d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x3590d8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x3590d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x3590dc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3590DCu;
    SET_GPR_U32(ctx, 31, 0x3590E4u);
    ctx->pc = 0x3590E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3590DCu;
    // 0x3590e0: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3590DCu, 0x3590E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3590E4u;
label_3590e4:
    // 0x3590e4: 0xe6550040  swc1        $f21, 0x40($s2)
    ctx->pc = 0x3590e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x3590e8: 0x26440068  addiu       $a0, $s2, 0x68
    ctx->pc = 0x3590e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 104));
    // 0x3590ec: 0xe654004c  swc1        $f20, 0x4C($s2)
    ctx->pc = 0x3590ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
    // 0x3590f0: 0xae500050  sw          $s0, 0x50($s2)
    ctx->pc = 0x3590f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 16));
    // 0x3590f4: 0xae510058  sw          $s1, 0x58($s2)
    ctx->pc = 0x3590f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 17));
    // 0x3590f8: 0xe6540044  swc1        $f20, 0x44($s2)
    ctx->pc = 0x3590f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
    // 0x3590fc: 0xe6540048  swc1        $f20, 0x48($s2)
    ctx->pc = 0x3590fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
    // 0x359100: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x359100u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
    // 0x359104: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x359104u;
    SET_GPR_U32(ctx, 31, 0x35910Cu);
    ctx->pc = 0x359108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359104u;
    // 0x359108: 0xae40005c  sw          $zero, 0x5C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x359104u, 0x35910Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35910Cu;
label_35910c:
    // 0x35910c: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x35910Cu;
    {
        const bool branch_taken_0x35910c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x359110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35910Cu;
        // 0x359110: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35910c) {
            ctx->pc = 0x359144u;
            goto label_359144;
        }
    }
    ctx->pc = 0x359114u;
    // 0x359114: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x359114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x359118: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x359118u;
    SET_GPR_U32(ctx, 31, 0x359120u);
    ctx->pc = 0x35911Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359118u;
    // 0x35911c: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x359118u, 0x359120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359120u;
label_359120:
    // 0x359120: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x359120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359124: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x359124u;
    SET_GPR_U32(ctx, 31, 0x35912Cu);
    ctx->pc = 0x359128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359124u;
    // 0x359128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x359124u, 0x35912Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35912Cu;
label_35912c:
    // 0x35912c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x35912Cu;
    SET_GPR_U32(ctx, 31, 0x359134u);
    ctx->pc = 0x359130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35912Cu;
    // 0x359130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x35912Cu, 0x359134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359134u;
label_359134:
    // 0x359134: 0xae500054  sw          $s0, 0x54($s2)
    ctx->pc = 0x359134u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 16));
    // 0x359138: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x359138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35913c: 0xc0b1680  jal         func_2C5A00
    ctx->pc = 0x35913Cu;
    SET_GPR_U32(ctx, 31, 0x359144u);
    ctx->pc = 0x359140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35913Cu;
    // 0x359140: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5A00u, 0x35913Cu, 0x359144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359144u;
label_359144:
    // 0x359144: 0x8e440058  lw          $a0, 0x58($s2)
    ctx->pc = 0x359144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x359148: 0x8c8300bc  lw          $v1, 0xBC($a0)
    ctx->pc = 0x359148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x35914c: 0x30620401  andi        $v0, $v1, 0x401
    ctx->pc = 0x35914cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1025);
    // 0x359150: 0x38420401  xori        $v0, $v0, 0x401
    ctx->pc = 0x359150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1025);
    // 0x359154: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x359154u;
    {
        const bool branch_taken_0x359154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x359158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359154u;
        // 0x359158: 0x30621001  andi        $v0, $v1, 0x1001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4097);
        ctx->in_delay_slot = false;
        if (branch_taken_0x359154) {
            ctx->pc = 0x3591A0u;
            goto label_3591a0;
        }
    }
    ctx->pc = 0x35915Cu;
    // 0x35915c: 0x8c820220  lw          $v0, 0x220($a0)
    ctx->pc = 0x35915cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x359160: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x359160u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x359164: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x359164u;
    {
        const bool branch_taken_0x359164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x359164) {
            ctx->pc = 0x359168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x359164u;
            // 0x359168: 0xc4410020  lwc1        $f1, 0x20($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x35916Cu;
            goto label_35916c;
        }
    }
    ctx->pc = 0x35916Cu;
label_35916c:
    // 0x35916c: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x35916cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x359170: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x359170u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x359174: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x359174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x359178: 0x0  nop
    ctx->pc = 0x359178u;
    // NOP
    // 0x35917c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x35917cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x359180: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x359180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x359184: 0x8c820220  lw          $v0, 0x220($a0)
    ctx->pc = 0x359184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x359188: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x359188u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35918c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x35918Cu;
    {
        const bool branch_taken_0x35918c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35918c) {
            ctx->pc = 0x359190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35918Cu;
            // 0x359190: 0xc4400024  lwc1        $f0, 0x24($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x359194u;
            goto label_359194;
        }
    }
    ctx->pc = 0x359194u;
label_359194:
    // 0x359194: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x359194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359198: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x359198u;
    {
        const bool branch_taken_0x359198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35919Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359198u;
        // 0x35919c: 0xe6400044  swc1        $f0, 0x44($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x359198) {
            ctx->pc = 0x3591ACu;
            goto label_3591ac;
        }
    }
    ctx->pc = 0x3591A0u;
label_3591a0:
    // 0x3591a0: 0x38421001  xori        $v0, $v0, 0x1001
    ctx->pc = 0x3591a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4097);
    // 0x3591a4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3591A4u;
    {
        const bool branch_taken_0x3591a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3591A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3591A4u;
        // 0x3591a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3591a4) {
            ctx->pc = 0x3591B0u;
            goto label_3591b0;
        }
    }
    ctx->pc = 0x3591ACu;
label_3591ac:
    // 0x3591ac: 0xae42005c  sw          $v0, 0x5C($s2)
    ctx->pc = 0x3591acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 2));
label_3591b0:
    // 0x3591b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3591b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3591b4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x3591b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3591b8: 0x26420058  addiu       $v0, $s2, 0x58
    ctx->pc = 0x3591b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 88));
    // 0x3591bc: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x3591bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x3591c0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3591c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x3591c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3591c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3591c8: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x3591c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x3591cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3591ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3591d0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3591d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x3591d4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3591d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x3591d8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3591d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3591dc: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x3591dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x3591e0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x3591e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x3591e4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3591e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3591e8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3591e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3591ec: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x3591ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3591f0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x3591f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x3591f4: 0xe6400070  swc1        $f0, 0x70($s2)
    ctx->pc = 0x3591f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
    // 0x3591f8: 0xe6450078  swc1        $f5, 0x78($s2)
    ctx->pc = 0x3591f8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 120), bits); }
    // 0x3591fc: 0xe641007c  swc1        $f1, 0x7C($s2)
    ctx->pc = 0x3591fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 124), bits); }
    // 0x359200: 0xe6420080  swc1        $f2, 0x80($s2)
    ctx->pc = 0x359200u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 128), bits); }
    // 0x359204: 0xe6430084  swc1        $f3, 0x84($s2)
    ctx->pc = 0x359204u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 132), bits); }
    // 0x359208: 0xe6440088  swc1        $f4, 0x88($s2)
    ctx->pc = 0x359208u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 136), bits); }
    // 0x35920c: 0xe6450074  swc1        $f5, 0x74($s2)
    ctx->pc = 0x35920cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 116), bits); }
    // 0x359210: 0x12e00039  beqz        $s7, . + 4 + (0x39 << 2)
    ctx->pc = 0x359210u;
    {
        const bool branch_taken_0x359210 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x359214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359210u;
        // 0x359214: 0xae40008c  sw          $zero, 0x8C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359210) {
            ctx->pc = 0x3592F8u;
            goto label_3592f8;
        }
    }
    ctx->pc = 0x359218u;
    // 0x359218: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x359218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x35921c: 0x3c04cccc  lui         $a0, 0xCCCC
    ctx->pc = 0x35921cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52428 << 16));
    // 0x359220: 0x2466d5c0  addiu       $a2, $v1, -0x2A40
    ctx->pc = 0x359220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956480));
    // 0x359224: 0x8c65d5c0  lw          $a1, -0x2A40($v1)
    ctx->pc = 0x359224u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5BD5C0u));
    // 0x359228: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x359228u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5BD5C4u));
    // 0x35922c: 0x3484cccd  ori         $a0, $a0, 0xCCCD
    ctx->pc = 0x35922cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x359230: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x359230u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359234: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x359234u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x359238: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x359238u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x35923c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x35923cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x359240: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x359240u;
    {
        const bool branch_taken_0x359240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x359244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359240u;
        // 0x359244: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359240) {
            ctx->pc = 0x3592F8u;
            goto label_3592f8;
        }
    }
    ctx->pc = 0x359248u;
    // 0x359248: 0x3c15cccc  lui         $s5, 0xCCCC
    ctx->pc = 0x359248u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)52428 << 16));
    // 0x35924c: 0x2c0f02d  daddu       $fp, $s6, $zero
    ctx->pc = 0x35924cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359250: 0x26510068  addiu       $s1, $s2, 0x68
    ctx->pc = 0x359250u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 104));
    // 0x359254: 0x36b5cccd  ori         $s5, $s5, 0xCCCD
    ctx->pc = 0x359254u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)52429);
    // 0x359258: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x359258u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35925c: 0x0  nop
    ctx->pc = 0x35925cu;
    // NOP
label_359260:
    // 0x359260: 0x8fc4d5c0  lw          $a0, -0x2A40($fp)
    ctx->pc = 0x359260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294956480)));
    // 0x359264: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x359264u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359268: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x359268u;
    SET_GPR_U32(ctx, 31, 0x359270u);
    ctx->pc = 0x35926Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359268u;
    // 0x35926c: 0x932021  addu        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x359268u, 0x359270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359270u;
label_359270:
    // 0x359270: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x359270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x359274: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x359274u;
    {
        const bool branch_taken_0x359274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x359278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359274u;
        // 0x359278: 0x8ed0d5c0  lw          $s0, -0x2A40($s6) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294956480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359274) {
            ctx->pc = 0x3592CCu;
            goto label_3592cc;
        }
    }
    ctx->pc = 0x35927Cu;
    // 0x35927c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x35927cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359280: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x359280u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x359284: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x359284u;
    SET_GPR_U32(ctx, 31, 0x35928Cu);
    ctx->pc = 0x359288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359284u;
    // 0x359288: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x359284u, 0x35928Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35928Cu;
label_35928c:
    // 0x35928c: 0x6a03000f  ldl         $v1, 0xF($s0)
    ctx->pc = 0x35928cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x359290: 0x6e030008  ldr         $v1, 0x8($s0)
    ctx->pc = 0x359290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x359294: 0x6a040017  ldl         $a0, 0x17($s0)
    ctx->pc = 0x359294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x359298: 0x6e040010  ldr         $a0, 0x10($s0)
    ctx->pc = 0x359298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x35929c: 0xb2430077  sdl         $v1, 0x77($s2)
    ctx->pc = 0x35929cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3592a0: 0xb6430070  sdr         $v1, 0x70($s2)
    ctx->pc = 0x3592a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3592a4: 0xb244007f  sdl         $a0, 0x7F($s2)
    ctx->pc = 0x3592a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3592a8: 0xb6440078  sdr         $a0, 0x78($s2)
    ctx->pc = 0x3592a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3592ac: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x3592acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3592b0: 0xe6200018  swc1        $f0, 0x18($s1)
    ctx->pc = 0x3592b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    // 0x3592b4: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x3592b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3592b8: 0xe621001c  swc1        $f1, 0x1C($s1)
    ctx->pc = 0x3592b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x3592bc: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x3592bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3592c0: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x3592c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x3592c4: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x3592c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3592c8: 0xe6210024  swc1        $f1, 0x24($s1)
    ctx->pc = 0x3592c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_3592cc:
    // 0x3592cc: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x3592ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x3592d0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3592d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3592d4: 0x2463d5c0  addiu       $v1, $v1, -0x2A40
    ctx->pc = 0x3592d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956480));
    // 0x3592d8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3592d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5BD5C4u));
    // 0x3592dc: 0x8ec3d5c0  lw          $v1, -0x2A40($s6)
    ctx->pc = 0x3592dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294956480)));
    // 0x3592e0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3592e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3592e4: 0x551018  mult        $v0, $v0, $s5
    ctx->pc = 0x3592e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3592e8: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x3592e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x3592ec: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x3592ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3592f0: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x3592F0u;
    {
        const bool branch_taken_0x3592f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3592F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3592F0u;
        // 0x3592f4: 0x26730028  addiu       $s3, $s3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3592f0) {
            ctx->pc = 0x359260u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359260;
        }
    }
    ctx->pc = 0x3592F8u;
label_3592f8:
    // 0x3592f8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3592f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3592fc: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x3592fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
    // 0x359300: 0xc0d640c  jal         func_359030
    ctx->pc = 0x359300u;
    SET_GPR_U32(ctx, 31, 0x359308u);
    ctx->pc = 0x359304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359300u;
    // 0x359304: 0x24b0d4c0  addiu       $s0, $a1, -0x2B40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359030u, 0x359300u, 0x359308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359308u;
label_359308:
    // 0x359308: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x359308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x35930c: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x35930Cu;
    {
        const bool branch_taken_0x35930c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x35930c) {
            ctx->pc = 0x359310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35930Cu;
            // 0x359310: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x359314u;
            goto label_359314;
        }
    }
    ctx->pc = 0x359314u;
label_359314:
    // 0x359314: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x359314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x359318: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x359318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x35931c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x35931cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x359320: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x359320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x359324: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x359324u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x359328: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x359328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35932c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x35932cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x359330: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x359330u;
    {
        const bool branch_taken_0x359330 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x359334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359330u;
        // 0x359334: 0x3a0a02d  daddu       $s4, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359330) {
            ctx->pc = 0x35935Cu;
            goto label_35935c;
        }
    }
    ctx->pc = 0x359338u;
    // 0x359338: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x359338u;
    {
        const bool branch_taken_0x359338 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x359338) {
            ctx->pc = 0x35933Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x359338u;
            // 0x35933c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x359350u;
            goto label_359350;
        }
    }
    ctx->pc = 0x359340u;
    // 0x359340: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x359340u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18));
    // 0x359344: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x359344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x359348: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x359348u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x35934c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x35934cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_359350:
    // 0x359350: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x359350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x359354: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x359354u;
    {
        const bool branch_taken_0x359354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x359358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359354u;
        // 0x359358: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359354) {
            ctx->pc = 0x3594A0u;
            goto label_3594a0;
        }
    }
    ctx->pc = 0x35935Cu;
label_35935c:
    // 0x35935c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x35935cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x359360: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x359360u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359364: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x359364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x359368: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x359368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35936c: 0x2631823  subu        $v1, $s3, $v1
    ctx->pc = 0x35936cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x359370: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x359370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x359374: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x359374u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x359378: 0x27a20014  addiu       $v0, $sp, 0x14
    ctx->pc = 0x359378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x35937c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x35937cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x359380: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x359380u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x359384: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x359384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x359388: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x359388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x35938c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35938Cu;
    {
        const bool branch_taken_0x35938c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x359390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35938Cu;
        // 0x359390: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35938c) {
            ctx->pc = 0x3593A8u;
            goto label_3593a8;
        }
    }
    ctx->pc = 0x359394u;
    // 0x359394: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x359394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359398: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x359398u;
    SET_GPR_U32(ctx, 31, 0x3593A0u);
    ctx->pc = 0x35939Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359398u;
    // 0x35939c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x359398u, 0x3593A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3593A0u;
label_3593a0:
    // 0x3593a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3593A0u;
    {
        const bool branch_taken_0x3593a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3593A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3593A0u;
        // 0x3593a4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3593a0) {
            ctx->pc = 0x3593B4u;
            goto label_3593b4;
        }
    }
    ctx->pc = 0x3593A8u;
label_3593a8:
    // 0x3593a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3593a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3593ac: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3593acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3593b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3593b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3593b4:
    // 0x3593b4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3593b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3593b8: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x3593b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3593bc: 0x1093000b  beq         $a0, $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x3593BCu;
    {
        const bool branch_taken_0x3593bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 19));
        ctx->pc = 0x3593C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3593BCu;
        // 0x3593c0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3593bc) {
            ctx->pc = 0x3593ECu;
            goto label_3593ec;
        }
    }
    ctx->pc = 0x3593C4u;
    // 0x3593c4: 0x0  nop
    ctx->pc = 0x3593c4u;
    // NOP
label_3593c8:
    // 0x3593c8: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3593C8u;
    {
        const bool branch_taken_0x3593c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3593c8) {
            ctx->pc = 0x3593CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3593C8u;
            // 0x3593cc: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3593E4u;
            goto label_3593e4;
        }
    }
    ctx->pc = 0x3593D0u;
    // 0x3593d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3593d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3593d4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3593d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x3593d8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3593d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3593dc: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x3593dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x3593e0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3593e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_3593e4:
    // 0x3593e4: 0x1493fff8  bne         $a0, $s3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3593E4u;
    {
        const bool branch_taken_0x3593e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 19));
        ctx->pc = 0x3593E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3593E4u;
        // 0x3593e8: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3593e4) {
            ctx->pc = 0x3593C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3593c8;
        }
    }
    ctx->pc = 0x3593ECu;
label_3593ec:
    // 0x3593ec: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x3593ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x3593f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3593f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3593f4: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3593F4u;
    {
        const bool branch_taken_0x3593f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3593F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3593F4u;
        // 0x3593f8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3593f4) {
            ctx->pc = 0x35941Cu;
            goto label_35941c;
        }
    }
    ctx->pc = 0x3593FCu;
    // 0x3593fc: 0x52200014  beql        $s1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x3593FCu;
    {
        const bool branch_taken_0x3593fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3593fc) {
            ctx->pc = 0x359400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3593FCu;
            // 0x359400: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x359450u;
            goto label_359450;
        }
    }
    ctx->pc = 0x359404u;
    // 0x359404: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x359404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x359408: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x359408u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x35940c: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x35940cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x359410: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x359410u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
    // 0x359414: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x359414u;
    {
        const bool branch_taken_0x359414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x359418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359414u;
        // 0x359418: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359414) {
            ctx->pc = 0x359450u;
            goto label_359450;
        }
    }
    ctx->pc = 0x35941Cu;
label_35941c:
    // 0x35941c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x35941cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359420: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x359420u;
    {
        const bool branch_taken_0x359420 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x359424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359420u;
        // 0x359424: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359420) {
            ctx->pc = 0x359448u;
            goto label_359448;
        }
    }
    ctx->pc = 0x359428u;
label_359428:
    // 0x359428: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x359428u;
    {
        const bool branch_taken_0x359428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x35942Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359428u;
        // 0x35942c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359428) {
            ctx->pc = 0x359440u;
            goto label_359440;
        }
    }
    ctx->pc = 0x359430u;
    // 0x359430: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x359430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x359434: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x359434u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x359438: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x359438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x35943c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x35943cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_359440:
    // 0x359440: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x359440u;
    {
        const bool branch_taken_0x359440 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x359444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359440u;
        // 0x359444: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359440) {
            ctx->pc = 0x359428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359428;
        }
    }
    ctx->pc = 0x359448u;
label_359448:
    // 0x359448: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x359448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35944c: 0x0  nop
    ctx->pc = 0x35944cu;
    // NOP
label_359450:
    // 0x359450: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x359450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x359454: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x359454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x359458: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x359458u;
    {
        const bool branch_taken_0x359458 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x35945Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359458u;
        // 0x35945c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359458) {
            ctx->pc = 0x359480u;
            goto label_359480;
        }
    }
    ctx->pc = 0x359460u;
    // 0x359460: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x359460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x359464: 0x0  nop
    ctx->pc = 0x359464u;
    // NOP
label_359468:
    // 0x359468: 0x0  nop
    ctx->pc = 0x359468u;
    // NOP
    // 0x35946c: 0x0  nop
    ctx->pc = 0x35946cu;
    // NOP
    // 0x359470: 0x0  nop
    ctx->pc = 0x359470u;
    // NOP
    // 0x359474: 0x0  nop
    ctx->pc = 0x359474u;
    // NOP
    // 0x359478: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x359478u;
    {
        const bool branch_taken_0x359478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x35947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359478u;
        // 0x35947c: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359478) {
            ctx->pc = 0x359468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_359468;
        }
    }
    ctx->pc = 0x359480u;
label_359480:
    // 0x359480: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x359480u;
    {
        const bool branch_taken_0x359480 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x359484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359480u;
        // 0x359484: 0x2d51021  addu        $v0, $s6, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359480) {
            ctx->pc = 0x359494u;
            goto label_359494;
        }
    }
    ctx->pc = 0x359488u;
    // 0x359488: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x359488u;
    SET_GPR_U32(ctx, 31, 0x359490u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x359488u, 0x359490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x359490u;
label_359490:
    // 0x359490: 0x2d51021  addu        $v0, $s6, $s5
    ctx->pc = 0x359490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
label_359494:
    // 0x359494: 0xae150000  sw          $s5, 0x0($s0)
    ctx->pc = 0x359494u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 21));
    // 0x359498: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x359498u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x35949c: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x35949cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_3594a0:
    // 0x3594a0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3594a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3594a4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3594a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3594a8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x3594a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3594ac: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3594acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3594b0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x3594b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3594b4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3594b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3594b8: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x3594b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3594bc: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x3594bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3594c0: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x3594c0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3594c4: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x3594c4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3594c8: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x3594c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3594cc: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x3594ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3594d0: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x3594d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3594d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3594D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3594D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3594D4u;
        // 0x3594d8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3594D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3594DCu;
    // 0x3594dc: 0x0  nop
    ctx->pc = 0x3594dcu;
    // NOP
    ctx->pc = 0x3594e0u;
}
