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

// Function: sub_00192128
// Address: 0x192128 - 0x192200
void sub_00192128_0x192128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192128_0x192128");
#endif

    switch (ctx->pc) {
        case 0x192128u: goto label_192128;
        case 0x19212cu: goto label_19212c;
        case 0x192130u: goto label_192130;
        case 0x192134u: goto label_192134;
        case 0x192138u: goto label_192138;
        case 0x19213cu: goto label_19213c;
        case 0x192140u: goto label_192140;
        case 0x192144u: goto label_192144;
        case 0x192148u: goto label_192148;
        case 0x19214cu: goto label_19214c;
        case 0x192150u: goto label_192150;
        case 0x192154u: goto label_192154;
        case 0x192158u: goto label_192158;
        case 0x19215cu: goto label_19215c;
        case 0x192160u: goto label_192160;
        case 0x192164u: goto label_192164;
        case 0x192168u: goto label_192168;
        case 0x19216cu: goto label_19216c;
        case 0x192170u: goto label_192170;
        case 0x192174u: goto label_192174;
        case 0x192178u: goto label_192178;
        case 0x19217cu: goto label_19217c;
        case 0x192180u: goto label_192180;
        case 0x192184u: goto label_192184;
        case 0x192188u: goto label_192188;
        case 0x19218cu: goto label_19218c;
        case 0x192190u: goto label_192190;
        case 0x192194u: goto label_192194;
        case 0x192198u: goto label_192198;
        case 0x19219cu: goto label_19219c;
        case 0x1921a0u: goto label_1921a0;
        case 0x1921a4u: goto label_1921a4;
        case 0x1921a8u: goto label_1921a8;
        case 0x1921acu: goto label_1921ac;
        case 0x1921b0u: goto label_1921b0;
        case 0x1921b4u: goto label_1921b4;
        case 0x1921b8u: goto label_1921b8;
        case 0x1921bcu: goto label_1921bc;
        case 0x1921c0u: goto label_1921c0;
        case 0x1921c4u: goto label_1921c4;
        case 0x1921c8u: goto label_1921c8;
        case 0x1921ccu: goto label_1921cc;
        case 0x1921d0u: goto label_1921d0;
        case 0x1921d4u: goto label_1921d4;
        case 0x1921d8u: goto label_1921d8;
        case 0x1921dcu: goto label_1921dc;
        case 0x1921e0u: goto label_1921e0;
        case 0x1921e4u: goto label_1921e4;
        case 0x1921e8u: goto label_1921e8;
        case 0x1921ecu: goto label_1921ec;
        case 0x1921f0u: goto label_1921f0;
        case 0x1921f4u: goto label_1921f4;
        case 0x1921f8u: goto label_1921f8;
        case 0x1921fcu: goto label_1921fc;
        default: break;
    }

    ctx->pc = 0x192128u;

label_192128:
    // 0x192128: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x192128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_19212c:
    // 0x19212c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19212cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_192130:
    // 0x192130: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x192130u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_192134:
    // 0x192134: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x192134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_192138:
    // 0x192138: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x192138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_19213c:
    // 0x19213c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x19213cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_192140:
    // 0x192140: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x192140u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_192144:
    // 0x192144: 0xe6150014  swc1        $f21, 0x14($s0)
    ctx->pc = 0x192144u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
label_192148:
    // 0x192148: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x192148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_19214c:
    // 0x19214c: 0xe60d0018  swc1        $f13, 0x18($s0)
    ctx->pc = 0x19214cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
label_192150:
    // 0x192150: 0xae060020  sw          $a2, 0x20($s0)
    ctx->pc = 0x192150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 6));
label_192154:
    // 0x192154: 0xc061a16  jal         func_186858
label_192158:
    if (ctx->pc == 0x192158u) {
        ctx->pc = 0x192158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192154u;
        // 0x192158: 0xae050024  sw          $a1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19215Cu;
        goto label_19215c;
    }
    ctx->pc = 0x192154u;
    SET_GPR_U32(ctx, 31, 0x19215Cu);
    ctx->pc = 0x192158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192154u;
    // 0x192158: 0xae050024  sw          $a1, 0x24($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x192154u, 0x19215Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19215Cu;
label_19215c:
    // 0x19215c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x19215cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_192160:
    // 0x192160: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x192160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_192164:
    // 0x192164: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x192164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_192168:
    // 0x192168: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x192168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19216c:
    // 0x19216c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19216cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_192170:
    // 0x192170: 0xc061a16  jal         func_186858
label_192174:
    if (ctx->pc == 0x192174u) {
        ctx->pc = 0x192174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192170u;
        // 0x192174: 0xe4400028  swc1        $f0, 0x28($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x192178u;
        goto label_192178;
    }
    ctx->pc = 0x192170u;
    SET_GPR_U32(ctx, 31, 0x192178u);
    ctx->pc = 0x192174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192170u;
    // 0x192174: 0xe4400028  swc1        $f0, 0x28($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x192170u, 0x192178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192178u;
label_192178:
    // 0x192178: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x192178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_19217c:
    // 0x19217c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19217cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_192180:
    // 0x192180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x192180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_192184:
    // 0x192184: 0xc061a16  jal         func_186858
label_192188:
    if (ctx->pc == 0x192188u) {
        ctx->pc = 0x192188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192184u;
        // 0x192188: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19218Cu;
        goto label_19218c;
    }
    ctx->pc = 0x192184u;
    SET_GPR_U32(ctx, 31, 0x19218Cu);
    ctx->pc = 0x192188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192184u;
    // 0x192188: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x192184u, 0x19218Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19218Cu;
label_19218c:
    // 0x19218c: 0xc60c0018  lwc1        $f12, 0x18($s0)
    ctx->pc = 0x19218cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_192190:
    // 0x192190: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x192190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_192194:
    // 0x192194: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x192194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_192198:
    // 0x192198: 0xc06ee7e  jal         func_1BB9F8
label_19219c:
    if (ctx->pc == 0x19219Cu) {
        ctx->pc = 0x19219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192198u;
        // 0x19219c: 0x46146301  sub.s       $f12, $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1921A0u;
        goto label_1921a0;
    }
    ctx->pc = 0x192198u;
    SET_GPR_U32(ctx, 31, 0x1921A0u);
    ctx->pc = 0x19219Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192198u;
    // 0x19219c: 0x46146301  sub.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB9F8u, 0x192198u, 0x1921A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1921A0u;
label_1921a0:
    // 0x1921a0: 0xc061a16  jal         func_186858
label_1921a4:
    if (ctx->pc == 0x1921A4u) {
        ctx->pc = 0x1921A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1921A0u;
        // 0x1921a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1921A8u;
        goto label_1921a8;
    }
    ctx->pc = 0x1921A0u;
    SET_GPR_U32(ctx, 31, 0x1921A8u);
    ctx->pc = 0x1921A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1921A0u;
    // 0x1921a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1921A0u, 0x1921A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1921A8u;
label_1921a8:
    // 0x1921a8: 0x4614ab00  add.s       $f12, $f21, $f20
    ctx->pc = 0x1921a8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
label_1921ac:
    // 0x1921ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1921acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1921b0:
    // 0x1921b0: 0xc06eed6  jal         func_1BBB58
label_1921b4:
    if (ctx->pc == 0x1921B4u) {
        ctx->pc = 0x1921B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1921B0u;
        // 0x1921b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1921B8u;
        goto label_1921b8;
    }
    ctx->pc = 0x1921B0u;
    SET_GPR_U32(ctx, 31, 0x1921B8u);
    ctx->pc = 0x1921B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1921B0u;
    // 0x1921b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBB58u, 0x1921B0u, 0x1921B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1921B8u;
label_1921b8:
    // 0x1921b8: 0xc061a12  jal         func_186848
label_1921bc:
    if (ctx->pc == 0x1921BCu) {
        ctx->pc = 0x1921BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1921B8u;
        // 0x1921bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1921C0u;
        goto label_1921c0;
    }
    ctx->pc = 0x1921B8u;
    SET_GPR_U32(ctx, 31, 0x1921C0u);
    ctx->pc = 0x1921BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1921B8u;
    // 0x1921bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1921B8u, 0x1921C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1921C0u;
label_1921c0:
    // 0x1921c0: 0xac400338  sw          $zero, 0x338($v0)
    ctx->pc = 0x1921c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 824), GPR_U32(ctx, 0));
label_1921c4:
    // 0x1921c4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1921c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1921c8:
    // 0x1921c8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1921c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1921cc:
    // 0x1921cc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1921ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1921d0:
    // 0x1921d0: 0x60f809  jalr        $v1
label_1921d4:
    if (ctx->pc == 0x1921D4u) {
        ctx->pc = 0x1921D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1921D0u;
        // 0x1921d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1921D8u;
        goto label_1921d8;
    }
    ctx->pc = 0x1921D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1921D8u);
        ctx->pc = 0x1921D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1921D0u;
        // 0x1921d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1921D0u, 0x1921D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1921D8u;
label_1921d8:
    // 0x1921d8: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x1921d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1921dc:
    // 0x1921dc: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1921dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1921e0:
    // 0x1921e0: 0x40f809  jalr        $v0
label_1921e4:
    if (ctx->pc == 0x1921E4u) {
        ctx->pc = 0x1921E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1921E0u;
        // 0x1921e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1921E8u;
        goto label_1921e8;
    }
    ctx->pc = 0x1921E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1921E8u);
        ctx->pc = 0x1921E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1921E0u;
        // 0x1921e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1921E0u, 0x1921E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1921E8u;
label_1921e8:
    // 0x1921e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1921e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1921ec:
    // 0x1921ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1921ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1921f0:
    // 0x1921f0: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x1921f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1921f4:
    // 0x1921f4: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x1921f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1921f8:
    // 0x1921f8: 0x3e00008  jr          $ra
label_1921fc:
    if (ctx->pc == 0x1921FCu) {
        ctx->pc = 0x1921FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1921F8u;
        // 0x1921fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x192200u;
        goto label_fallthrough_0x1921f8;
    }
    ctx->pc = 0x1921F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1921FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1921F8u;
        // 0x1921fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1921F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1921f8:
    ctx->pc = 0x192200u;
}
