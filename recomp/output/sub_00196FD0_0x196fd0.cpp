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

// Function: sub_00196FD0
// Address: 0x196fd0 - 0x1971c0
void sub_00196FD0_0x196fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196FD0_0x196fd0");
#endif

    switch (ctx->pc) {
        case 0x19704cu: goto label_19704c;
        case 0x19708cu: goto label_19708c;
        case 0x1970b4u: goto label_1970b4;
        case 0x1970c0u: goto label_1970c0;
        case 0x1970c8u: goto label_1970c8;
        case 0x1970d4u: goto label_1970d4;
        case 0x1970dcu: goto label_1970dc;
        case 0x1970e8u: goto label_1970e8;
        case 0x19716cu: goto label_19716c;
        case 0x197178u: goto label_197178;
        case 0x197184u: goto label_197184;
        case 0x19718cu: goto label_19718c;
        case 0x19719cu: goto label_19719c;
        default: break;
    }

    ctx->pc = 0x196fd0u;

    // 0x196fd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x196fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x196fd4: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x196fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196fd8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x196fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x196fdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x196fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x196fe0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x196fe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196fe4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x196fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x196fe8: 0x26290030  addiu       $t1, $s1, 0x30
    ctx->pc = 0x196fe8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x196fec: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x196fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x196ff0: 0x262a0050  addiu       $t2, $s1, 0x50
    ctx->pc = 0x196ff0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x196ff4: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x196ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x196ff8: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x196ff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196ffc: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x196ffcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197000: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x197000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x197004: 0xe5200004  swc1        $f0, 0x4($t1)
    ctx->pc = 0x197004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x197008: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x197008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19700c: 0xe5210008  swc1        $f1, 0x8($t1)
    ctx->pc = 0x19700cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x197010: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x197010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x197014: 0xad220010  sw          $v0, 0x10($t1)
    ctx->pc = 0x197014u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 2));
    // 0x197018: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x197018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x19701c: 0xad230014  sw          $v1, 0x14($t1)
    ctx->pc = 0x19701cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 3));
    // 0x197020: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x197020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x197024: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x197024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
    // 0x197028: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x197028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19702c: 0xe5410004  swc1        $f1, 0x4($t2)
    ctx->pc = 0x19702cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x197030: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x197030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x197034: 0xe5400008  swc1        $f0, 0x8($t2)
    ctx->pc = 0x197034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x197038: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x197038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x19703c: 0xad420010  sw          $v0, 0x10($t2)
    ctx->pc = 0x19703cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 2));
    // 0x197040: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x197040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x197044: 0xc061a12  jal         func_186848
    ctx->pc = 0x197044u;
    SET_GPR_U32(ctx, 31, 0x19704Cu);
    ctx->pc = 0x197048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197044u;
    // 0x197048: 0xad430014  sw          $v1, 0x14($t2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 10), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x197044u, 0x19704Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19704Cu;
label_19704c:
    // 0x19704c: 0xc44101e0  lwc1        $f1, 0x1E0($v0)
    ctx->pc = 0x19704cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x197050: 0x26250070  addiu       $a1, $s1, 0x70
    ctx->pc = 0x197050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x197054: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x197054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
    // 0x197058: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x197058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x19705c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x19705cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x197060: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x197060u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x197064: 0xe6210070  swc1        $f1, 0x70($s1)
    ctx->pc = 0x197064u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x197068: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x197068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19706c: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x19706cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x197070: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x197070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x197074: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x197074u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x197078: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x197078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x19707c: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x19707cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x197080: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x197080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x197084: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x197084u;
    SET_GPR_U32(ctx, 31, 0x19708Cu);
    ctx->pc = 0x197088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197084u;
    // 0x197088: 0xaca40014  sw          $a0, 0x14($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x197084u, 0x19708Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19708Cu;
label_19708c:
    // 0x19708c: 0xe6200090  swc1        $f0, 0x90($s1)
    ctx->pc = 0x19708cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
    // 0x197090: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x197090u;
    {
        const bool branch_taken_0x197090 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x197094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197090u;
        // 0x197094: 0xae300018  sw          $s0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197090) {
            ctx->pc = 0x1970A8u;
            goto label_1970a8;
        }
    }
    ctx->pc = 0x197098u;
    // 0x197098: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x197098u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19709c: 0xfa2100a0  sqc2        $vf1, 0xA0($s1)
    ctx->pc = 0x19709cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1970a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1970A0u;
    {
        const bool branch_taken_0x1970a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1970a0) {
            ctx->pc = 0x1970ACu;
            goto label_1970ac;
        }
    }
    ctx->pc = 0x1970A8u;
label_1970a8:
    // 0x1970a8: 0x7e2000a0  sq          $zero, 0xA0($s1)
    ctx->pc = 0x1970a8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 160), GPR_VEC(ctx, 0));
label_1970ac:
    // 0x1970ac: 0xc061a16  jal         func_186858
    ctx->pc = 0x1970ACu;
    SET_GPR_U32(ctx, 31, 0x1970B4u);
    ctx->pc = 0x1970B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1970ACu;
    // 0x1970b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1970ACu, 0x1970B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1970B4u;
label_1970b4:
    // 0x1970b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1970b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1970b8: 0xc06ee66  jal         func_1BB998
    ctx->pc = 0x1970B8u;
    SET_GPR_U32(ctx, 31, 0x1970C0u);
    ctx->pc = 0x1970BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1970B8u;
    // 0x1970bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB998u, 0x1970B8u, 0x1970C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1970C0u;
label_1970c0:
    // 0x1970c0: 0xc061a16  jal         func_186858
    ctx->pc = 0x1970C0u;
    SET_GPR_U32(ctx, 31, 0x1970C8u);
    ctx->pc = 0x1970C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1970C0u;
    // 0x1970c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1970C0u, 0x1970C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1970C8u;
label_1970c8:
    // 0x1970c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1970c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1970cc: 0xc06eebe  jal         func_1BBAF8
    ctx->pc = 0x1970CCu;
    SET_GPR_U32(ctx, 31, 0x1970D4u);
    ctx->pc = 0x1970D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1970CCu;
    // 0x1970d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBAF8u, 0x1970CCu, 0x1970D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1970D4u;
label_1970d4:
    // 0x1970d4: 0xc061a16  jal         func_186858
    ctx->pc = 0x1970D4u;
    SET_GPR_U32(ctx, 31, 0x1970DCu);
    ctx->pc = 0x1970D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1970D4u;
    // 0x1970d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1970D4u, 0x1970DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1970DCu;
label_1970dc:
    // 0x1970dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1970dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1970e0: 0xc061a16  jal         func_186858
    ctx->pc = 0x1970E0u;
    SET_GPR_U32(ctx, 31, 0x1970E8u);
    ctx->pc = 0x1970E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1970E0u;
    // 0x1970e4: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1970E0u, 0x1970E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1970E8u;
label_1970e8:
    // 0x1970e8: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1970e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x1970ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1970ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1970f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1970f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1970f4: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1970f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x1970f8: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x1970f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1970fc: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1970FCu;
    {
        const bool branch_taken_0x1970fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x197100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1970FCu;
        // 0x197100: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1970fc) {
            ctx->pc = 0x197144u;
            goto label_197144;
        }
    }
    ctx->pc = 0x197104u;
    // 0x197104: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x197104u;
    {
        const bool branch_taken_0x197104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197104u;
        // 0x197108: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197104) {
            ctx->pc = 0x19711Cu;
            goto label_19711c;
        }
    }
    ctx->pc = 0x19710Cu;
    // 0x19710c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19710Cu;
    {
        const bool branch_taken_0x19710c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19710c) {
            ctx->pc = 0x197134u;
            goto label_197134;
        }
    }
    ctx->pc = 0x197114u;
    // 0x197114: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x197114u;
    {
        const bool branch_taken_0x197114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x197114) {
            ctx->pc = 0x197164u;
            goto label_197164;
        }
    }
    ctx->pc = 0x19711Cu;
label_19711c:
    // 0x19711c: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x19711Cu;
    {
        const bool branch_taken_0x19711c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x197120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19711Cu;
        // 0x197120: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19711c) {
            ctx->pc = 0x197154u;
            goto label_197154;
        }
    }
    ctx->pc = 0x197124u;
    // 0x197124: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x197124u;
    {
        const bool branch_taken_0x197124 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x197124) {
            ctx->pc = 0x197144u;
            goto label_197144;
        }
    }
    ctx->pc = 0x19712Cu;
    // 0x19712c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x19712Cu;
    {
        const bool branch_taken_0x19712c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19712c) {
            ctx->pc = 0x197164u;
            goto label_197164;
        }
    }
    ctx->pc = 0x197134u;
label_197134:
    // 0x197134: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x197134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x197138: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x197138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19713c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19713Cu;
    {
        const bool branch_taken_0x19713c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19713Cu;
        // 0x197140: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19713c) {
            ctx->pc = 0x197160u;
            goto label_197160;
        }
    }
    ctx->pc = 0x197144u;
label_197144:
    // 0x197144: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x197144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x197148: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x197148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19714c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19714Cu;
    {
        const bool branch_taken_0x19714c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19714Cu;
        // 0x197150: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19714c) {
            ctx->pc = 0x197160u;
            goto label_197160;
        }
    }
    ctx->pc = 0x197154u;
label_197154:
    // 0x197154: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x197154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x197158: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x197158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19715c: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x19715cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_197160:
    // 0x197160: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x197160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_197164:
    // 0x197164: 0xc061a1e  jal         func_186878
    ctx->pc = 0x197164u;
    SET_GPR_U32(ctx, 31, 0x19716Cu);
    ctx->pc = 0x197168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197164u;
    // 0x197168: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x197164u, 0x19716Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19716Cu;
label_19716c:
    // 0x19716c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19716cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197170: 0xc06cdea  jal         func_1B37A8
    ctx->pc = 0x197170u;
    SET_GPR_U32(ctx, 31, 0x197178u);
    ctx->pc = 0x197174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197170u;
    // 0x197174: 0x26250050  addiu       $a1, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B37A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B37A8u, 0x197170u, 0x197178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197178u;
label_197178:
    // 0x197178: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x197178u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x19717c: 0xc061a1e  jal         func_186878
    ctx->pc = 0x19717Cu;
    SET_GPR_U32(ctx, 31, 0x197184u);
    ctx->pc = 0x197180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19717Cu;
    // 0x197180: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19717Cu, 0x197184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197184u;
label_197184:
    // 0x197184: 0xc06df10  jal         func_1B7C40
    ctx->pc = 0x197184u;
    SET_GPR_U32(ctx, 31, 0x19718Cu);
    ctx->pc = 0x197188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197184u;
    // 0x197188: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7C40u, 0x197184u, 0x19718Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19718Cu;
label_19718c:
    // 0x19718c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x19718Cu;
    {
        const bool branch_taken_0x19718c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19718c) {
            ctx->pc = 0x197190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19718Cu;
            // 0x197190: 0xae200010  sw          $zero, 0x10($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1971A4u;
            goto label_1971a4;
        }
    }
    ctx->pc = 0x197194u;
    // 0x197194: 0xc061a12  jal         func_186848
    ctx->pc = 0x197194u;
    SET_GPR_U32(ctx, 31, 0x19719Cu);
    ctx->pc = 0x197198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197194u;
    // 0x197198: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x197194u, 0x19719Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19719Cu;
label_19719c:
    // 0x19719c: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x19719cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1971a0: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x1971a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_1971a4:
    // 0x1971a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1971a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1971a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1971a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1971ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1971acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1971b0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1971b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1971b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1971B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1971B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1971B4u;
        // 0x1971b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1971B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1971BCu;
    // 0x1971bc: 0x0  nop
    ctx->pc = 0x1971bcu;
    // NOP
    ctx->pc = 0x1971c0u;
}
