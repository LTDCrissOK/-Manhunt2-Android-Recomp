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

// Function: sub_001BC100
// Address: 0x1bc100 - 0x1bc1a0
void sub_001BC100_0x1bc100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC100_0x1bc100");
#endif

    switch (ctx->pc) {
        case 0x1bc100u: goto label_1bc100;
        case 0x1bc104u: goto label_1bc104;
        case 0x1bc108u: goto label_1bc108;
        case 0x1bc10cu: goto label_1bc10c;
        case 0x1bc110u: goto label_1bc110;
        case 0x1bc114u: goto label_1bc114;
        case 0x1bc118u: goto label_1bc118;
        case 0x1bc11cu: goto label_1bc11c;
        case 0x1bc120u: goto label_1bc120;
        case 0x1bc124u: goto label_1bc124;
        case 0x1bc128u: goto label_1bc128;
        case 0x1bc12cu: goto label_1bc12c;
        case 0x1bc130u: goto label_1bc130;
        case 0x1bc134u: goto label_1bc134;
        case 0x1bc138u: goto label_1bc138;
        case 0x1bc13cu: goto label_1bc13c;
        case 0x1bc140u: goto label_1bc140;
        case 0x1bc144u: goto label_1bc144;
        case 0x1bc148u: goto label_1bc148;
        case 0x1bc14cu: goto label_1bc14c;
        case 0x1bc150u: goto label_1bc150;
        case 0x1bc154u: goto label_1bc154;
        case 0x1bc158u: goto label_1bc158;
        case 0x1bc15cu: goto label_1bc15c;
        case 0x1bc160u: goto label_1bc160;
        case 0x1bc164u: goto label_1bc164;
        case 0x1bc168u: goto label_1bc168;
        case 0x1bc16cu: goto label_1bc16c;
        case 0x1bc170u: goto label_1bc170;
        case 0x1bc174u: goto label_1bc174;
        case 0x1bc178u: goto label_1bc178;
        case 0x1bc17cu: goto label_1bc17c;
        case 0x1bc180u: goto label_1bc180;
        case 0x1bc184u: goto label_1bc184;
        case 0x1bc188u: goto label_1bc188;
        case 0x1bc18cu: goto label_1bc18c;
        case 0x1bc190u: goto label_1bc190;
        case 0x1bc194u: goto label_1bc194;
        case 0x1bc198u: goto label_1bc198;
        case 0x1bc19cu: goto label_1bc19c;
        default: break;
    }

    ctx->pc = 0x1bc100u;

label_1bc100:
    // 0x1bc100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bc100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1bc104:
    // 0x1bc104: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bc104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1bc108:
    // 0x1bc108: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bc108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1bc10c:
    // 0x1bc10c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bc10cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bc110:
    // 0x1bc110: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bc110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1bc114:
    // 0x1bc114: 0x261101e0  addiu       $s1, $s0, 0x1E0
    ctx->pc = 0x1bc114u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 480));
label_1bc118:
    // 0x1bc118: 0x24a40020  addiu       $a0, $a1, 0x20
    ctx->pc = 0x1bc118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_1bc11c:
    // 0x1bc11c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x1bc11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bc120:
    // 0x1bc120: 0xe60101e0  swc1        $f1, 0x1E0($s0)
    ctx->pc = 0x1bc120u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 480), bits); }
label_1bc124:
    // 0x1bc124: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1bc124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bc128:
    // 0x1bc128: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x1bc128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1bc12c:
    // 0x1bc12c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1bc12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bc130:
    // 0x1bc130: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x1bc130u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1bc134:
    // 0x1bc134: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1bc134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_1bc138:
    // 0x1bc138: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1bc138u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_1bc13c:
    // 0x1bc13c: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x1bc13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_1bc140:
    // 0x1bc140: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x1bc140u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_1bc144:
    // 0x1bc144: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1bc144u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1bc148:
    // 0x1bc148: 0xfa010200  sqc2        $vf1, 0x200($s0)
    ctx->pc = 0x1bc148u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 512), _mm_castps_si128(ctx->vu0_vf[1]));
label_1bc14c:
    // 0x1bc14c: 0xc06fc34  jal         func_1BF0D0
label_1bc150:
    if (ctx->pc == 0x1BC150u) {
        ctx->pc = 0x1BC150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC14Cu;
        // 0x1bc150: 0x26040210  addiu       $a0, $s0, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC154u;
        goto label_1bc154;
    }
    ctx->pc = 0x1BC14Cu;
    SET_GPR_U32(ctx, 31, 0x1BC154u);
    ctx->pc = 0x1BC150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC14Cu;
    // 0x1bc150: 0x26040210  addiu       $a0, $s0, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF0D0u, 0x1BC14Cu, 0x1BC154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC154u;
label_1bc154:
    // 0x1bc154: 0xc06fc34  jal         func_1BF0D0
label_1bc158:
    if (ctx->pc == 0x1BC158u) {
        ctx->pc = 0x1BC158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC154u;
        // 0x1bc158: 0x260402b0  addiu       $a0, $s0, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC15Cu;
        goto label_1bc15c;
    }
    ctx->pc = 0x1BC154u;
    SET_GPR_U32(ctx, 31, 0x1BC15Cu);
    ctx->pc = 0x1BC158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC154u;
    // 0x1bc158: 0x260402b0  addiu       $a0, $s0, 0x2B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF0D0u, 0x1BC154u, 0x1BC15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC15Cu;
label_1bc15c:
    // 0x1bc15c: 0xc06fc34  jal         func_1BF0D0
label_1bc160:
    if (ctx->pc == 0x1BC160u) {
        ctx->pc = 0x1BC160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC15Cu;
        // 0x1bc160: 0x26040260  addiu       $a0, $s0, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC164u;
        goto label_1bc164;
    }
    ctx->pc = 0x1BC15Cu;
    SET_GPR_U32(ctx, 31, 0x1BC164u);
    ctx->pc = 0x1BC160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC15Cu;
    // 0x1bc160: 0x26040260  addiu       $a0, $s0, 0x260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BF0D0u, 0x1BC15Cu, 0x1BC164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC164u;
label_1bc164:
    // 0x1bc164: 0xc06f3ac  jal         func_1BCEB0
label_1bc168:
    if (ctx->pc == 0x1BC168u) {
        ctx->pc = 0x1BC168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC164u;
        // 0x1bc168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC16Cu;
        goto label_1bc16c;
    }
    ctx->pc = 0x1BC164u;
    SET_GPR_U32(ctx, 31, 0x1BC16Cu);
    ctx->pc = 0x1BC168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC164u;
    // 0x1bc168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCEB0u, 0x1BC164u, 0x1BC16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC16Cu;
label_1bc16c:
    // 0x1bc16c: 0x8e030394  lw          $v1, 0x394($s0)
    ctx->pc = 0x1bc16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 916)));
label_1bc170:
    // 0x1bc170: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x1bc170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_1bc174:
    // 0x1bc174: 0x40f809  jalr        $v0
label_1bc178:
    if (ctx->pc == 0x1BC178u) {
        ctx->pc = 0x1BC178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC174u;
        // 0x1bc178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC17Cu;
        goto label_1bc17c;
    }
    ctx->pc = 0x1BC174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BC17Cu);
        ctx->pc = 0x1BC178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC174u;
        // 0x1bc178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC174u, 0x1BC17Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BC17Cu;
label_1bc17c:
    // 0x1bc17c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bc17cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bc180:
    // 0x1bc180: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bc180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bc184:
    // 0x1bc184: 0xc070dd4  jal         func_1C3750
label_1bc188:
    if (ctx->pc == 0x1BC188u) {
        ctx->pc = 0x1BC188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC184u;
        // 0x1bc188: 0x2302b  sltu        $a2, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC18Cu;
        goto label_1bc18c;
    }
    ctx->pc = 0x1BC184u;
    SET_GPR_U32(ctx, 31, 0x1BC18Cu);
    ctx->pc = 0x1BC188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC184u;
    // 0x1bc188: 0x2302b  sltu        $a2, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3750u, 0x1BC184u, 0x1BC18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC18Cu;
label_1bc18c:
    // 0x1bc18c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bc18cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bc190:
    // 0x1bc190: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bc190u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1bc194:
    // 0x1bc194: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bc194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bc198:
    // 0x1bc198: 0x3e00008  jr          $ra
label_1bc19c:
    if (ctx->pc == 0x1BC19Cu) {
        ctx->pc = 0x1BC19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC198u;
        // 0x1bc19c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC1A0u;
        goto label_fallthrough_0x1bc198;
    }
    ctx->pc = 0x1BC198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC198u;
        // 0x1bc19c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1bc198:
    ctx->pc = 0x1BC1A0u;
}
