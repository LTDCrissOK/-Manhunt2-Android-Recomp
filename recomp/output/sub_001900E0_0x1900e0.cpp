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

// Function: sub_001900E0
// Address: 0x1900e0 - 0x1901d0
void sub_001900E0_0x1900e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001900E0_0x1900e0");
#endif

    switch (ctx->pc) {
        case 0x190100u: goto label_190100;
        case 0x190114u: goto label_190114;
        case 0x19011cu: goto label_19011c;
        case 0x19013cu: goto label_19013c;
        case 0x190154u: goto label_190154;
        case 0x190160u: goto label_190160;
        case 0x190168u: goto label_190168;
        case 0x19017cu: goto label_19017c;
        case 0x190188u: goto label_190188;
        default: break;
    }

    ctx->pc = 0x1900e0u;

    // 0x1900e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1900e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1900e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1900e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1900e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1900e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1900ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1900ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1900f0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1900f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1900f4: 0xae060014  sw          $a2, 0x14($s0)
    ctx->pc = 0x1900f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 6));
    // 0x1900f8: 0xc061a16  jal         func_186858
    ctx->pc = 0x1900F8u;
    SET_GPR_U32(ctx, 31, 0x190100u);
    ctx->pc = 0x1900FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1900F8u;
    // 0x1900fc: 0xae050040  sw          $a1, 0x40($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1900F8u, 0x190100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190100u;
label_190100:
    // 0x190100: 0x3c013f26  lui         $at, 0x3F26
    ctx->pc = 0x190100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16166 << 16));
    // 0x190104: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x190104u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x190108: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x190108u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19010c: 0xc06ee70  jal         func_1BB9C0
    ctx->pc = 0x19010Cu;
    SET_GPR_U32(ctx, 31, 0x190114u);
    ctx->pc = 0x190110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19010Cu;
    // 0x190110: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB9C0u, 0x19010Cu, 0x190114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190114u;
label_190114:
    // 0x190114: 0xc061a16  jal         func_186858
    ctx->pc = 0x190114u;
    SET_GPR_U32(ctx, 31, 0x19011Cu);
    ctx->pc = 0x190118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190114u;
    // 0x190118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x190114u, 0x19011Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19011Cu;
label_19011c:
    // 0x19011c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19011cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x190120: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x190120u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x190124: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x190124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190128: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x190128u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x19012c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19012cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190130: 0xe441004c  swc1        $f1, 0x4C($v0)
    ctx->pc = 0x190130u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 76), bits); }
    // 0x190134: 0xc061a16  jal         func_186858
    ctx->pc = 0x190134u;
    SET_GPR_U32(ctx, 31, 0x19013Cu);
    ctx->pc = 0x190138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190134u;
    // 0x190138: 0xe4400058  swc1        $f0, 0x58($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x190134u, 0x19013Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19013Cu;
label_19013c:
    // 0x19013c: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x19013cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x190140: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x190140u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x190144: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x190144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190148: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x190148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19014c: 0xc061a16  jal         func_186858
    ctx->pc = 0x19014Cu;
    SET_GPR_U32(ctx, 31, 0x190154u);
    ctx->pc = 0x190150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19014Cu;
    // 0x190150: 0xe4400050  swc1        $f0, 0x50($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19014Cu, 0x190154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190154u;
label_190154:
    // 0x190154: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x190154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190158: 0xc06eebe  jal         func_1BBAF8
    ctx->pc = 0x190158u;
    SET_GPR_U32(ctx, 31, 0x190160u);
    ctx->pc = 0x19015Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190158u;
    // 0x19015c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBAF8u, 0x190158u, 0x190160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190160u;
label_190160:
    // 0x190160: 0xc061a16  jal         func_186858
    ctx->pc = 0x190160u;
    SET_GPR_U32(ctx, 31, 0x190168u);
    ctx->pc = 0x190164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190160u;
    // 0x190164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x190160u, 0x190168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190168u;
label_190168:
    // 0x190168: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x190168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x19016c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19016cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x190170: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x190170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190174: 0xc061a12  jal         func_186848
    ctx->pc = 0x190174u;
    SET_GPR_U32(ctx, 31, 0x19017Cu);
    ctx->pc = 0x190178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190174u;
    // 0x190178: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x190174u, 0x19017Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19017Cu;
label_19017c:
    // 0x19017c: 0xac400338  sw          $zero, 0x338($v0)
    ctx->pc = 0x19017cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 824), GPR_U32(ctx, 0));
    // 0x190180: 0xc061a16  jal         func_186858
    ctx->pc = 0x190180u;
    SET_GPR_U32(ctx, 31, 0x190188u);
    ctx->pc = 0x190184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190180u;
    // 0x190184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x190180u, 0x190188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x190188u;
label_190188:
    // 0x190188: 0xc4400048  lwc1        $f0, 0x48($v0)
    ctx->pc = 0x190188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19018c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x19018cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x190190: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x190190u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x190194: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x190194u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x190198: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x190198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x19019c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19019cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1901a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1901A0u;
    {
        const bool branch_taken_0x1901a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1901A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1901A0u;
        // 0x1901a4: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1901a0) {
            ctx->pc = 0x1901B4u;
            goto label_1901b4;
        }
    }
    ctx->pc = 0x1901A8u;
    // 0x1901a8: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x1901a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1901ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1901ACu;
    {
        const bool branch_taken_0x1901ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1901B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1901ACu;
        // 0x1901b0: 0x8c430004  lw          $v1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1901ac) {
            ctx->pc = 0x1901BCu;
            goto label_1901bc;
        }
    }
    ctx->pc = 0x1901B4u;
label_1901b4:
    // 0x1901b4: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x1901b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1901b8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1901b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1901bc:
    // 0x1901bc: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x1901bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x1901c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1901c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1901c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1901c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1901c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1901C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1901CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1901C8u;
        // 0x1901cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1901C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1901D0u;
}
