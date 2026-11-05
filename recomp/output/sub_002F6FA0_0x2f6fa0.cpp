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

// Function: sub_002F6FA0
// Address: 0x2f6fa0 - 0x2f7168
void sub_002F6FA0_0x2f6fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6FA0_0x2f6fa0");
#endif

    switch (ctx->pc) {
        case 0x2f6fccu: goto label_2f6fcc;
        case 0x2f6fdcu: goto label_2f6fdc;
        case 0x2f7028u: goto label_2f7028;
        case 0x2f7038u: goto label_2f7038;
        case 0x2f7044u: goto label_2f7044;
        case 0x2f7054u: goto label_2f7054;
        case 0x2f706cu: goto label_2f706c;
        default: break;
    }

    ctx->pc = 0x2f6fa0u;

    // 0x2f6fa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f6fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f6fa4: 0x24051e61  addiu       $a1, $zero, 0x1E61
    ctx->pc = 0x2f6fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7777));
    // 0x2f6fa8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f6fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f6fac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f6facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f6fb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f6fb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6fb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f6fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2f6fb8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2f6fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2f6fbc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f6fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f6fc0: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x2f6fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2f6fc4: 0xc0c3254  jal         func_30C950
    ctx->pc = 0x2F6FC4u;
    SET_GPR_U32(ctx, 31, 0x2F6FCCu);
    ctx->pc = 0x2F6FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6FC4u;
    // 0x2f6fc8: 0x8c92000c  lw          $s2, 0xC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C950u, 0x2F6FC4u, 0x2F6FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6FCCu;
label_2f6fcc:
    // 0x2f6fcc: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x2f6fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2f6fd0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f6fd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6fd4: 0xc0c3254  jal         func_30C950
    ctx->pc = 0x2F6FD4u;
    SET_GPR_U32(ctx, 31, 0x2F6FDCu);
    ctx->pc = 0x2F6FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6FD4u;
    // 0x2f6fd8: 0x240522b8  addiu       $a1, $zero, 0x22B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C950u, 0x2F6FD4u, 0x2F6FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F6FDCu;
label_2f6fdc:
    // 0x2f6fdc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f6fdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f6fe0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f6fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f6fe4: 0x5222005a  beql        $s1, $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x2F6FE4u;
    {
        const bool branch_taken_0x2f6fe4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f6fe4) {
            ctx->pc = 0x2F6FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F6FE4u;
            // 0x2f6fe8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7150u;
            goto label_2f7150;
        }
    }
    ctx->pc = 0x2F6FECu;
    // 0x2f6fec: 0x10e20057  beq         $a3, $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x2F6FECu;
    {
        const bool branch_taken_0x2f6fec = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F6FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6FECu;
        // 0x2f6ff0: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6fec) {
            ctx->pc = 0x2F714Cu;
            goto label_2f714c;
        }
    }
    ctx->pc = 0x2F6FF4u;
    // 0x2f6ff4: 0x8e020224  lw          $v0, 0x224($s0)
    ctx->pc = 0x2f6ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x2f6ff8: 0x2243018  mult        $a2, $s1, $a0
    ctx->pc = 0x2f6ff8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2f6ffc: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x2f6ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x2f7000: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2f7000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2f7004: 0xe41018  mult        $v0, $a3, $a0
    ctx->pc = 0x2f7004u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2f7008: 0x8c710004  lw          $s1, 0x4($v1)
    ctx->pc = 0x2f7008u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2f700c: 0x459821  addu        $s3, $v0, $a1
    ctx->pc = 0x2f700cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f7010: 0x8e021340  lw          $v0, 0x1340($s0)
    ctx->pc = 0x2f7010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4928)));
    // 0x2f7014: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2F7014u;
    {
        const bool branch_taken_0x2f7014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F7018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7014u;
        // 0x2f7018: 0xa69021  addu        $s2, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7014) {
            ctx->pc = 0x2F705Cu;
            goto label_2f705c;
        }
    }
    ctx->pc = 0x2F701Cu;
    // 0x2f701c: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x2f701cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2f7020: 0xc0c326a  jal         func_30C9A8
    ctx->pc = 0x2F7020u;
    SET_GPR_U32(ctx, 31, 0x2F7028u);
    ctx->pc = 0x2F7024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7020u;
    // 0x2f7024: 0x24051e61  addiu       $a1, $zero, 0x1E61 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7777));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C9A8u, 0x2F7020u, 0x2F7028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7028u;
label_2f7028:
    // 0x2f7028: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f7028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f702c: 0x26061310  addiu       $a2, $s0, 0x1310
    ctx->pc = 0x2f702cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4880));
    // 0x2f7030: 0xc0c327c  jal         func_30C9F0
    ctx->pc = 0x2F7030u;
    SET_GPR_U32(ctx, 31, 0x2F7038u);
    ctx->pc = 0x2F7034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7030u;
    // 0x2f7034: 0x26051300  addiu       $a1, $s0, 0x1300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C9F0u, 0x2F7030u, 0x2F7038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7038u;
label_2f7038:
    // 0x2f7038: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x2f7038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2f703c: 0xc0c326a  jal         func_30C9A8
    ctx->pc = 0x2F703Cu;
    SET_GPR_U32(ctx, 31, 0x2F7044u);
    ctx->pc = 0x2F7040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F703Cu;
    // 0x2f7040: 0x240522b8  addiu       $a1, $zero, 0x22B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C9A8u, 0x2F703Cu, 0x2F7044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7044u;
label_2f7044:
    // 0x2f7044: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f7044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7048: 0x26051320  addiu       $a1, $s0, 0x1320
    ctx->pc = 0x2f7048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4896));
    // 0x2f704c: 0xc0c327c  jal         func_30C9F0
    ctx->pc = 0x2F704Cu;
    SET_GPR_U32(ctx, 31, 0x2F7054u);
    ctx->pc = 0x2F7050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F704Cu;
    // 0x2f7050: 0x26061330  addiu       $a2, $s0, 0x1330 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C9F0u, 0x2F704Cu, 0x2F7054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F7054u;
label_2f7054:
    // 0x2f7054: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f7054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f7058: 0xae021340  sw          $v0, 0x1340($s0)
    ctx->pc = 0x2f7058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4928), GPR_U32(ctx, 2));
label_2f705c:
    // 0x2f705c: 0x52200022  beql        $s1, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x2F705Cu;
    {
        const bool branch_taken_0x2f705c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f705c) {
            ctx->pc = 0x2F7060u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F705Cu;
            // 0x2f7060: 0xc6011300  lwc1        $f1, 0x1300($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F70E8u;
            goto label_2f70e8;
        }
    }
    ctx->pc = 0x2F7064u;
    // 0x2f7064: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x2F7064u;
    SET_GPR_U32(ctx, 31, 0x2F706Cu);
    ctx->pc = 0x2F7068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7064u;
    // 0x2f7068: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2F7064u, 0x2F706Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F706Cu;
label_2f706c:
    // 0x2f706c: 0x1222001d  beq         $s1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2F706Cu;
    {
        const bool branch_taken_0x2f706c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F7070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F706Cu;
        // 0x2f7070: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f706c) {
            ctx->pc = 0x2F70E4u;
            goto label_2f70e4;
        }
    }
    ctx->pc = 0x2F7074u;
    // 0x2f7074: 0x8e2300b8  lw          $v1, 0xB8($s1)
    ctx->pc = 0x2f7074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x2f7078: 0xc46102a0  lwc1        $f1, 0x2A0($v1)
    ctx->pc = 0x2f7078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f707c: 0x246202a0  addiu       $v0, $v1, 0x2A0
    ctx->pc = 0x2f707cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 672));
    // 0x2f7080: 0x246502b0  addiu       $a1, $v1, 0x2B0
    ctx->pc = 0x2f7080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 688));
    // 0x2f7084: 0xe6410010  swc1        $f1, 0x10($s2)
    ctx->pc = 0x2f7084u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x2f7088: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2f7088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f708c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2f708cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2f7090: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2f7090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f7094: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2f7094u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2f7098: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2f7098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f709c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2f709cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2f70a0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2f70a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2f70a4: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x2f70a4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f70a8: 0xc46102c0  lwc1        $f1, 0x2C0($v1)
    ctx->pc = 0x2f70a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f70ac: 0x246202c0  addiu       $v0, $v1, 0x2C0
    ctx->pc = 0x2f70acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 704));
    // 0x2f70b0: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x2f70b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2f70b4: 0x246302d0  addiu       $v1, $v1, 0x2D0
    ctx->pc = 0x2f70b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 720));
    // 0x2f70b8: 0xe6610010  swc1        $f1, 0x10($s3)
    ctx->pc = 0x2f70b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x2f70bc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2f70bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f70c0: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2f70c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2f70c4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2f70c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f70c8: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2f70c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2f70cc: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2f70ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f70d0: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2f70d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2f70d4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f70d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f70d8: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x2f70d8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f70dc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2F70DCu;
    {
        const bool branch_taken_0x2f70dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F70E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F70DCu;
        // 0x2f70e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f70dc) {
            ctx->pc = 0x2F7150u;
            goto label_2f7150;
        }
    }
    ctx->pc = 0x2F70E4u;
label_2f70e4:
    // 0x2f70e4: 0xc6011300  lwc1        $f1, 0x1300($s0)
    ctx->pc = 0x2f70e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f70e8:
    // 0x2f70e8: 0x26021300  addiu       $v0, $s0, 0x1300
    ctx->pc = 0x2f70e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4864));
    // 0x2f70ec: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x2f70ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2f70f0: 0x26041310  addiu       $a0, $s0, 0x1310
    ctx->pc = 0x2f70f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4880));
    // 0x2f70f4: 0xe6410010  swc1        $f1, 0x10($s2)
    ctx->pc = 0x2f70f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x2f70f8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2f70f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f70fc: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2f70fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2f7100: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2f7100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f7104: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x2f7104u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2f7108: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2f7108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f710c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2f710cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2f7110: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2f7110u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f7114: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x2f7114u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f7118: 0xc6011320  lwc1        $f1, 0x1320($s0)
    ctx->pc = 0x2f7118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f711c: 0x26021320  addiu       $v0, $s0, 0x1320
    ctx->pc = 0x2f711cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4896));
    // 0x2f7120: 0x26630010  addiu       $v1, $s3, 0x10
    ctx->pc = 0x2f7120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2f7124: 0x26041330  addiu       $a0, $s0, 0x1330
    ctx->pc = 0x2f7124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x2f7128: 0xe6610010  swc1        $f1, 0x10($s3)
    ctx->pc = 0x2f7128u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x2f712c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2f712cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f7130: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2f7130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2f7134: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2f7134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f7138: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x2f7138u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2f713c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2f713cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f7140: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2f7140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2f7144: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2f7144u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f7148: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x2f7148u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f714c:
    // 0x2f714c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f714cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f7150:
    // 0x2f7150: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f7150u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f7154: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f7154u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f7158: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2f7158u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f715c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f715cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f7160: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7160u;
        // 0x2f7164: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7168u;
}
