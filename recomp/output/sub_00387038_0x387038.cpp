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

// Function: sub_00387038
// Address: 0x387038 - 0x387510
void sub_00387038_0x387038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00387038_0x387038");
#endif

    switch (ctx->pc) {
        case 0x387084u: goto label_387084;
        case 0x3870b0u: goto label_3870b0;
        case 0x3870f0u: goto label_3870f0;
        case 0x387118u: goto label_387118;
        case 0x387158u: goto label_387158;
        case 0x387160u: goto label_387160;
        case 0x387174u: goto label_387174;
        case 0x38717cu: goto label_38717c;
        case 0x3871b8u: goto label_3871b8;
        case 0x3871f8u: goto label_3871f8;
        case 0x38721cu: goto label_38721c;
        case 0x387260u: goto label_387260;
        case 0x3872bcu: goto label_3872bc;
        case 0x3872c8u: goto label_3872c8;
        case 0x3872f0u: goto label_3872f0;
        case 0x387324u: goto label_387324;
        case 0x38732cu: goto label_38732c;
        case 0x387338u: goto label_387338;
        case 0x387348u: goto label_387348;
        case 0x387388u: goto label_387388;
        case 0x3873a8u: goto label_3873a8;
        case 0x3873ccu: goto label_3873cc;
        case 0x387410u: goto label_387410;
        case 0x38746cu: goto label_38746c;
        case 0x387478u: goto label_387478;
        case 0x3874a0u: goto label_3874a0;
        case 0x3874d4u: goto label_3874d4;
        case 0x3874e8u: goto label_3874e8;
        default: break;
    }

    ctx->pc = 0x387038u;

    // 0x387038: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x387038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x38703c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x38703cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x387040: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x387040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x387044: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x387044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x387048: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x387048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x38704c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x38704cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387050: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x387050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x387054: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x387054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387058: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x387058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
    // 0x38705c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x38705cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387060: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x387060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
    // 0x387064: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x387064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
    // 0x387068: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x387068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x38706c: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x38706cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x387070: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x387070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x387074: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x387074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x387078: 0x629818  mult        $s3, $v1, $v0
    ctx->pc = 0x387078u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x38707c: 0xc0e180e  jal         func_386038
    ctx->pc = 0x38707Cu;
    SET_GPR_U32(ctx, 31, 0x387084u);
    ctx->pc = 0x387080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38707Cu;
    // 0x387080: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386038u, 0x38707Cu, 0x387084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387084u;
label_387084:
    // 0x387084: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x387084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x387088: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x387088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x38708c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x38708cu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u)); // MMIO: 0x10002010
    // 0x387090: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x387090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x387094: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x387094u;
    {
        const bool branch_taken_0x387094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x387098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387094u;
        // 0x387098: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387094) {
            ctx->pc = 0x3870A4u;
            goto label_3870a4;
        }
    }
    ctx->pc = 0x38709Cu;
    // 0x38709c: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x38709cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x3870a0: 0xac222010  sw          $v0, 0x2010($at)
    ctx->pc = 0x3870a0u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 2)); // MMIO: 0x10002010
label_3870a4:
    // 0x3870a4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3870a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3870a8: 0x2a750400  slti        $s5, $s3, 0x400
    ctx->pc = 0x3870a8u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x3870ac: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x3870acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
label_3870b0:
    // 0x3870b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3870b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3870b4: 0x0  nop
    ctx->pc = 0x3870b4u;
    // NOP
    // 0x3870b8: 0x0  nop
    ctx->pc = 0x3870b8u;
    // NOP
    // 0x3870bc: 0x0  nop
    ctx->pc = 0x3870bcu;
    // NOP
    // 0x3870c0: 0x0  nop
    ctx->pc = 0x3870c0u;
    // NOP
    // 0x3870c4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3870C4u;
    {
        const bool branch_taken_0x3870c4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3870c4) {
            ctx->pc = 0x3870B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3870b0;
        }
    }
    ctx->pc = 0x3870CCu;
    // 0x3870cc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3870ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3870d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3870d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3870d4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x3870d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x3870d8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3870d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3870dc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3870dcu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 0)); // MMIO: 0x10002000
    // 0x3870e0: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x3870e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x3870e4: 0xae030828  sw          $v1, 0x828($s0)
    ctx->pc = 0x3870e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 3));
    // 0x3870e8: 0xae00082c  sw          $zero, 0x82C($s0)
    ctx->pc = 0x3870e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 0));
    // 0x3870ec: 0x0  nop
    ctx->pc = 0x3870ecu;
    // NOP
label_3870f0:
    // 0x3870f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3870f0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x10002010
    // 0x3870f4: 0x0  nop
    ctx->pc = 0x3870f4u;
    // NOP
    // 0x3870f8: 0x0  nop
    ctx->pc = 0x3870f8u;
    // NOP
    // 0x3870fc: 0x0  nop
    ctx->pc = 0x3870fcu;
    // NOP
    // 0x387100: 0x0  nop
    ctx->pc = 0x387100u;
    // NOP
    // 0x387104: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x387104u;
    {
        const bool branch_taken_0x387104 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x387104) {
            ctx->pc = 0x3870F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3870f0;
        }
    }
    ctx->pc = 0x38710Cu;
    // 0x38710c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x38710cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387110: 0xc0f2708  jal         func_3C9C20
    ctx->pc = 0x387110u;
    SET_GPR_U32(ctx, 31, 0x387118u);
    ctx->pc = 0x387114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387110u;
    // 0x387114: 0x3c110fff  lui         $s1, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)4095 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9C20u, 0x387110u, 0x387118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387118u;
label_387118:
    // 0x387118: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x387118u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x38711c: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x38711cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x387120: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x387120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x387124: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x387124u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x387128: 0x3414ffff  ori         $s4, $zero, 0xFFFF
    ctx->pc = 0x387128u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x38712c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x38712cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x387130: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x387130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x387134: 0x283202b  sltu        $a0, $s4, $v1
    ctx->pc = 0x387134u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x387138: 0x10800081  beqz        $a0, . + 4 + (0x81 << 2)
    ctx->pc = 0x387138u;
    {
        const bool branch_taken_0x387138 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387138u;
        // 0x38713c: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387138) {
            ctx->pc = 0x387340u;
            goto label_387340;
        }
    }
    ctx->pc = 0x387140u;
    // 0x387140: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x387140u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x387144: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x387144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x387148: 0x24a57658  addiu       $a1, $a1, 0x7658
    ctx->pc = 0x387148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30296));
    // 0x38714c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38714cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387150: 0xc0f25b0  jal         func_3C96C0
    ctx->pc = 0x387150u;
    SET_GPR_U32(ctx, 31, 0x387158u);
    ctx->pc = 0x387154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387150u;
    // 0x387154: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C96C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C96C0u, 0x387150u, 0x387158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387158u;
label_387158:
    // 0x387158: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x387158u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38715c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x38715cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_387160:
    // 0x387160: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x387160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x387164: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x387164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x387168: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x387168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x38716c: 0xc0f2938  jal         func_3CA4E0
    ctx->pc = 0x38716Cu;
    SET_GPR_U32(ctx, 31, 0x387174u);
    ctx->pc = 0x387170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38716Cu;
    // 0x387170: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA4E0u, 0x38716Cu, 0x387174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387174u;
label_387174:
    // 0x387174: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x387174u;
    SET_GPR_U32(ctx, 31, 0x38717Cu);
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x387174u, 0x38717Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38717Cu;
label_38717c:
    // 0x38717c: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x38717cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x387180: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x387180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x387184: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x387184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x387188: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x387188u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x38718c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x38718cu;
    runtime->Store32(rdram, ctx, 0x1000B410u, GPR_U32(ctx, 5)); // MMIO: 0x1000b410
    // 0x387190: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x387190u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x387194: 0xac940000  sw          $s4, 0x0($a0)
    ctx->pc = 0x387194u;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 20)); // MMIO: 0x1000b420
    // 0x387198: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x387198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x38719c: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x38719cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x3871a0: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x3871a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x3871a4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3871a4u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 4)); // MMIO: 0x1000b400
    // 0x3871a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3871A8u;
    {
        const bool branch_taken_0x3871a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3871ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3871A8u;
        // 0x3871ac: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3871a8) {
            ctx->pc = 0x3871BCu;
            goto label_3871bc;
        }
    }
    ctx->pc = 0x3871B0u;
    // 0x3871b0: 0xc0f401a  jal         func_3D0068
    ctx->pc = 0x3871B0u;
    SET_GPR_U32(ctx, 31, 0x3871B8u);
    ctx->pc = 0x3D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0068u, 0x3871B0u, 0x3871B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3871B8u;
label_3871b8:
    // 0x3871b8: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x3871b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_3871bc:
    // 0x3871bc: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x3871bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x3871c0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x3871c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3871c4: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x3871c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
    // 0x3871c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3871c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3871cc: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x3871ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x3871d0: 0x942023  subu        $a0, $a0, $s4
    ctx->pc = 0x3871d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x3871d4: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x3871d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x3871d8: 0x12a0004e  beqz        $s5, . + 4 + (0x4E << 2)
    ctx->pc = 0x3871D8u;
    {
        const bool branch_taken_0x3871d8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3871DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3871D8u;
        // 0x3871dc: 0xafa40020  sw          $a0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3871d8) {
            ctx->pc = 0x387314u;
            goto label_387314;
        }
    }
    ctx->pc = 0x3871E0u;
    // 0x3871e0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3871e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3871e4: 0x8e1100ec  lw          $s1, 0xEC($s0)
    ctx->pc = 0x3871e4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x3871e8: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x3871e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3871ec: 0x139180  sll         $s2, $s3, 6
    ctx->pc = 0x3871ecu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x3871f0: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x3871f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x3871f4: 0x0  nop
    ctx->pc = 0x3871f4u;
    // NOP
label_3871f8:
    // 0x3871f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3871f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3871fc: 0x0  nop
    ctx->pc = 0x3871fcu;
    // NOP
    // 0x387200: 0x0  nop
    ctx->pc = 0x387200u;
    // NOP
    // 0x387204: 0x0  nop
    ctx->pc = 0x387204u;
    // NOP
    // 0x387208: 0x0  nop
    ctx->pc = 0x387208u;
    // NOP
    // 0x38720c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x38720Cu;
    {
        const bool branch_taken_0x38720c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x38720c) {
            ctx->pc = 0x3871F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3871f8;
        }
    }
    ctx->pc = 0x387214u;
    // 0x387214: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x387214u;
    SET_GPR_U32(ctx, 31, 0x38721Cu);
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x387214u, 0x38721Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38721Cu;
label_38721c:
    // 0x38721c: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x38721cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x387220: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x387220u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x387224: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x387224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x387228: 0x34a5b010  ori         $a1, $a1, 0xB010
    ctx->pc = 0x387228u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45072);
    // 0x38722c: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x38722cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x387230: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x387230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x387234: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x387234u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x387238: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x387238u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x38723c: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x38723cu;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 18)); // MMIO: 0x1000b020
    // 0x387240: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x387240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x387244: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x387244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x387248: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x387248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x38724c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x38724cu;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 4)); // MMIO: 0x1000b000
    // 0x387250: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x387250u;
    {
        const bool branch_taken_0x387250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x387254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387250u;
        // 0x387254: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387250) {
            ctx->pc = 0x387264u;
            goto label_387264;
        }
    }
    ctx->pc = 0x387258u;
    // 0x387258: 0xc0f401a  jal         func_3D0068
    ctx->pc = 0x387258u;
    SET_GPR_U32(ctx, 31, 0x387260u);
    ctx->pc = 0x3D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0068u, 0x387258u, 0x387260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387260u;
label_387260:
    // 0x387260: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x387260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_387264:
    // 0x387264: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x387264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x387268: 0x2631825  or          $v1, $s3, $v1
    ctx->pc = 0x387268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x38726c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x38726cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x387270: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x387270u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x387274: 0x3c04f000  lui         $a0, 0xF000
    ctx->pc = 0x387274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
    // 0x387278: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x387278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x38727c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x38727cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x387280: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x387280u;
    {
        const bool branch_taken_0x387280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x387284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387280u;
        // 0x387284: 0xae03082c  sw          $v1, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387280) {
            ctx->pc = 0x38729Cu;
            goto label_38729c;
        }
    }
    ctx->pc = 0x387288u;
    // 0x387288: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x387288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x38728c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38728Cu;
    {
        const bool branch_taken_0x38728c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x387290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38728Cu;
        // 0x387290: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38728c) {
            ctx->pc = 0x38729Cu;
            goto label_38729c;
        }
    }
    ctx->pc = 0x387294u;
    // 0x387294: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x387294u;
    {
        const bool branch_taken_0x387294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x387298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387294u;
        // 0x387298: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387294) {
            ctx->pc = 0x3872A4u;
            goto label_3872a4;
        }
    }
    ctx->pc = 0x38729Cu;
label_38729c:
    // 0x38729c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38729Cu;
    {
        const bool branch_taken_0x38729c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3872A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38729Cu;
        // 0x3872a0: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38729c) {
            ctx->pc = 0x3872A8u;
            goto label_3872a8;
        }
    }
    ctx->pc = 0x3872A4u;
label_3872a4:
    // 0x3872a4: 0xae020828  sw          $v0, 0x828($s0)
    ctx->pc = 0x3872a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 2));
label_3872a8:
    // 0x3872a8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3872a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3872ac: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x3872acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x3872b0: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x3872b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x3872b4: 0xc0e180e  jal         func_386038
    ctx->pc = 0x3872B4u;
    SET_GPR_U32(ctx, 31, 0x3872BCu);
    ctx->pc = 0x3872B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3872B4u;
    // 0x3872b8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386038u, 0x3872B4u, 0x3872BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3872BCu;
label_3872bc:
    // 0x3872bc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3872bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3872c0: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x3872c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x3872c4: 0x0  nop
    ctx->pc = 0x3872c4u;
    // NOP
label_3872c8:
    // 0x3872c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3872c8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000b000
    // 0x3872cc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3872ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3872d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3872d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3872d4: 0x0  nop
    ctx->pc = 0x3872d4u;
    // NOP
    // 0x3872d8: 0x0  nop
    ctx->pc = 0x3872d8u;
    // NOP
    // 0x3872dc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3872DCu;
    {
        const bool branch_taken_0x3872dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3872dc) {
            ctx->pc = 0x3872C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3872c8;
        }
    }
    ctx->pc = 0x3872E4u;
    // 0x3872e4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3872e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3872e8: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x3872e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x3872ec: 0x0  nop
    ctx->pc = 0x3872ecu;
    // NOP
label_3872f0:
    // 0x3872f0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3872f0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10002010
    // 0x3872f4: 0x0  nop
    ctx->pc = 0x3872f4u;
    // NOP
    // 0x3872f8: 0x0  nop
    ctx->pc = 0x3872f8u;
    // NOP
    // 0x3872fc: 0x0  nop
    ctx->pc = 0x3872fcu;
    // NOP
    // 0x387300: 0x0  nop
    ctx->pc = 0x387300u;
    // NOP
    // 0x387304: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x387304u;
    {
        const bool branch_taken_0x387304 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x387304) {
            ctx->pc = 0x3872F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3872f0;
        }
    }
    ctx->pc = 0x38730Cu;
    // 0x38730c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x38730Cu;
    {
        const bool branch_taken_0x38730c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38730c) {
            ctx->pc = 0x387324u;
            goto label_387324;
        }
    }
    ctx->pc = 0x387314u;
label_387314:
    // 0x387314: 0x8e0500ec  lw          $a1, 0xEC($s0)
    ctx->pc = 0x387314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x387318: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x387318u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38731c: 0xc0e1b9e  jal         func_386E78
    ctx->pc = 0x38731Cu;
    SET_GPR_U32(ctx, 31, 0x387324u);
    ctx->pc = 0x387320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38731Cu;
    // 0x387320: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386E78u, 0x38731Cu, 0x387324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387324u;
label_387324:
    // 0x387324: 0xc0f291e  jal         func_3CA478
    ctx->pc = 0x387324u;
    SET_GPR_U32(ctx, 31, 0x38732Cu);
    ctx->pc = 0x387328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387324u;
    // 0x387328: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA478u, 0x387324u, 0x38732Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38732Cu;
label_38732c:
    // 0x38732c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x38732cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387330: 0xc0f25b4  jal         func_3C96D0
    ctx->pc = 0x387330u;
    SET_GPR_U32(ctx, 31, 0x387338u);
    ctx->pc = 0x387334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387330u;
    // 0x387334: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C96D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C96D0u, 0x387330u, 0x387338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387338u;
label_387338:
    // 0x387338: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x387338u;
    {
        const bool branch_taken_0x387338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38733Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387338u;
        // 0x38733c: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387338) {
            ctx->pc = 0x3874D8u;
            goto label_3874d8;
        }
    }
    ctx->pc = 0x387340u;
label_387340:
    // 0x387340: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x387340u;
    SET_GPR_U32(ctx, 31, 0x387348u);
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x387340u, 0x387348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387348u;
label_387348:
    // 0x387348: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x387348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x38734c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x38734cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x387350: 0x3463b410  ori         $v1, $v1, 0xB410
    ctx->pc = 0x387350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46096);
    // 0x387354: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x387354u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x387358: 0xb12824  and         $a1, $a1, $s1
    ctx->pc = 0x387358u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 17));
    // 0x38735c: 0x34c6b420  ori         $a2, $a2, 0xB420
    ctx->pc = 0x38735cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)46112);
    // 0x387360: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x387360u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x387364: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x387364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x387368: 0x3484b400  ori         $a0, $a0, 0xB400
    ctx->pc = 0x387368u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46080);
    // 0x38736c: 0x24050101  addiu       $a1, $zero, 0x101
    ctx->pc = 0x38736cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x387370: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x387370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x387374: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x387374u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x387378: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x387378u;
    {
        const bool branch_taken_0x387378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387378u;
        // 0x38737c: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387378) {
            ctx->pc = 0x387388u;
            goto label_387388;
        }
    }
    ctx->pc = 0x387380u;
    // 0x387380: 0xc0f401a  jal         func_3D0068
    ctx->pc = 0x387380u;
    SET_GPR_U32(ctx, 31, 0x387388u);
    ctx->pc = 0x3D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0068u, 0x387380u, 0x387388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387388u;
label_387388:
    // 0x387388: 0x12a0004e  beqz        $s5, . + 4 + (0x4E << 2)
    ctx->pc = 0x387388u;
    {
        const bool branch_taken_0x387388 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x38738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387388u;
        // 0x38738c: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387388) {
            ctx->pc = 0x3874C4u;
            goto label_3874c4;
        }
    }
    ctx->pc = 0x387390u;
    // 0x387390: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x387390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x387394: 0x8e1100ec  lw          $s1, 0xEC($s0)
    ctx->pc = 0x387394u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x387398: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x387398u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x38739c: 0x139180  sll         $s2, $s3, 6
    ctx->pc = 0x38739cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x3873a0: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x3873a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x3873a4: 0x0  nop
    ctx->pc = 0x3873a4u;
    // NOP
label_3873a8:
    // 0x3873a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3873a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3873ac: 0x0  nop
    ctx->pc = 0x3873acu;
    // NOP
    // 0x3873b0: 0x0  nop
    ctx->pc = 0x3873b0u;
    // NOP
    // 0x3873b4: 0x0  nop
    ctx->pc = 0x3873b4u;
    // NOP
    // 0x3873b8: 0x0  nop
    ctx->pc = 0x3873b8u;
    // NOP
    // 0x3873bc: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3873BCu;
    {
        const bool branch_taken_0x3873bc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3873bc) {
            ctx->pc = 0x3873A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3873a8;
        }
    }
    ctx->pc = 0x3873C4u;
    // 0x3873c4: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x3873C4u;
    SET_GPR_U32(ctx, 31, 0x3873CCu);
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x3873C4u, 0x3873CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3873CCu;
label_3873cc:
    // 0x3873cc: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x3873ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x3873d0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x3873d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x3873d4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3873d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3873d8: 0x34a5b010  ori         $a1, $a1, 0xB010
    ctx->pc = 0x3873d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45072);
    // 0x3873dc: 0x2231824  and         $v1, $s1, $v1
    ctx->pc = 0x3873dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x3873e0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3873e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3873e4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3873e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3873e8: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x3873e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45088);
    // 0x3873ec: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x3873ecu;
    runtime->Store32(rdram, ctx, 0x1000B020u, GPR_U32(ctx, 18)); // MMIO: 0x1000b020
    // 0x3873f0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3873f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3873f4: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x3873f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x3873f8: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x3873f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3873fc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3873fcu;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 4)); // MMIO: 0x1000b000
    // 0x387400: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x387400u;
    {
        const bool branch_taken_0x387400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x387404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387400u;
        // 0x387404: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387400) {
            ctx->pc = 0x387414u;
            goto label_387414;
        }
    }
    ctx->pc = 0x387408u;
    // 0x387408: 0xc0f401a  jal         func_3D0068
    ctx->pc = 0x387408u;
    SET_GPR_U32(ctx, 31, 0x387410u);
    ctx->pc = 0x3D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0068u, 0x387408u, 0x387410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387410u;
label_387410:
    // 0x387410: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x387410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_387414:
    // 0x387414: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x387414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x387418: 0x2631825  or          $v1, $s3, $v1
    ctx->pc = 0x387418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
    // 0x38741c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x38741cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x387420: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x387420u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x387424: 0x3c04f000  lui         $a0, 0xF000
    ctx->pc = 0x387424u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
    // 0x387428: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x387428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x38742c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x38742cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x387430: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x387430u;
    {
        const bool branch_taken_0x387430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x387434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387430u;
        // 0x387434: 0xae03082c  sw          $v1, 0x82C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2092), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387430) {
            ctx->pc = 0x38744Cu;
            goto label_38744c;
        }
    }
    ctx->pc = 0x387438u;
    // 0x387438: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x387438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x38743c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38743Cu;
    {
        const bool branch_taken_0x38743c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x387440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38743Cu;
        // 0x387440: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38743c) {
            ctx->pc = 0x38744Cu;
            goto label_38744c;
        }
    }
    ctx->pc = 0x387444u;
    // 0x387444: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x387444u;
    {
        const bool branch_taken_0x387444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x387448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387444u;
        // 0x387448: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387444) {
            ctx->pc = 0x387454u;
            goto label_387454;
        }
    }
    ctx->pc = 0x38744Cu;
label_38744c:
    // 0x38744c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x38744Cu;
    {
        const bool branch_taken_0x38744c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38744Cu;
        // 0x387450: 0xae000828  sw          $zero, 0x828($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38744c) {
            ctx->pc = 0x387458u;
            goto label_387458;
        }
    }
    ctx->pc = 0x387454u;
label_387454:
    // 0x387454: 0xae020828  sw          $v0, 0x828($s0)
    ctx->pc = 0x387454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2088), GPR_U32(ctx, 2));
label_387458:
    // 0x387458: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x387458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x38745c: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x38745cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x387460: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x387460u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x387464: 0xc0e180e  jal         func_386038
    ctx->pc = 0x387464u;
    SET_GPR_U32(ctx, 31, 0x38746Cu);
    ctx->pc = 0x387468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387464u;
    // 0x387468: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386038u, 0x387464u, 0x38746Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38746Cu;
label_38746c:
    // 0x38746c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x38746cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x387470: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x387470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45056);
    // 0x387474: 0x0  nop
    ctx->pc = 0x387474u;
    // NOP
label_387478:
    // 0x387478: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x387478u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000b000
    // 0x38747c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x38747cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x387480: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x387480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x387484: 0x0  nop
    ctx->pc = 0x387484u;
    // NOP
    // 0x387488: 0x0  nop
    ctx->pc = 0x387488u;
    // NOP
    // 0x38748c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x38748Cu;
    {
        const bool branch_taken_0x38748c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38748c) {
            ctx->pc = 0x387478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387478;
        }
    }
    ctx->pc = 0x387494u;
    // 0x387494: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x387494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x387498: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x387498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x38749c: 0x0  nop
    ctx->pc = 0x38749cu;
    // NOP
label_3874a0:
    // 0x3874a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3874a0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10002010
    // 0x3874a4: 0x0  nop
    ctx->pc = 0x3874a4u;
    // NOP
    // 0x3874a8: 0x0  nop
    ctx->pc = 0x3874a8u;
    // NOP
    // 0x3874ac: 0x0  nop
    ctx->pc = 0x3874acu;
    // NOP
    // 0x3874b0: 0x0  nop
    ctx->pc = 0x3874b0u;
    // NOP
    // 0x3874b4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3874B4u;
    {
        const bool branch_taken_0x3874b4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3874b4) {
            ctx->pc = 0x3874A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3874a0;
        }
    }
    ctx->pc = 0x3874BCu;
    // 0x3874bc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3874BCu;
    {
        const bool branch_taken_0x3874bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3874C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3874BCu;
        // 0x3874c0: 0x8e040868  lw          $a0, 0x868($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3874bc) {
            ctx->pc = 0x3874D8u;
            goto label_3874d8;
        }
    }
    ctx->pc = 0x3874C4u;
label_3874c4:
    // 0x3874c4: 0x8e0500ec  lw          $a1, 0xEC($s0)
    ctx->pc = 0x3874c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
    // 0x3874c8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3874c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3874cc: 0xc0e1b9e  jal         func_386E78
    ctx->pc = 0x3874CCu;
    SET_GPR_U32(ctx, 31, 0x3874D4u);
    ctx->pc = 0x3874D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3874CCu;
    // 0x3874d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386E78u, 0x3874CCu, 0x3874D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3874D4u;
label_3874d4:
    // 0x3874d4: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x3874d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
label_3874d8:
    // 0x3874d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3874d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3874dc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3874dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3874e0: 0xc0e180e  jal         func_386038
    ctx->pc = 0x3874E0u;
    SET_GPR_U32(ctx, 31, 0x3874E8u);
    ctx->pc = 0x3874E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3874E0u;
    // 0x3874e4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386038u, 0x3874E0u, 0x3874E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3874E8u;
label_3874e8:
    // 0x3874e8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x3874e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3874ec: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x3874ecu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3874f0: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x3874f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3874f4: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x3874f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3874f8: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x3874f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3874fc: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x3874fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x387500: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x387500u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x387504: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x387504u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x387508: 0x3e00008  jr          $ra
    ctx->pc = 0x387508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387508u;
        // 0x38750c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x387510u;
}
