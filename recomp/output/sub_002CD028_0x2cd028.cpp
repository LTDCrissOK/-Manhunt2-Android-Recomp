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

// Function: sub_002CD028
// Address: 0x2cd028 - 0x2cd3e0
void sub_002CD028_0x2cd028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD028_0x2cd028");
#endif

    switch (ctx->pc) {
        case 0x2cd07cu: goto label_2cd07c;
        case 0x2cd0b0u: goto label_2cd0b0;
        case 0x2cd100u: goto label_2cd100;
        case 0x2cd150u: goto label_2cd150;
        case 0x2cd164u: goto label_2cd164;
        case 0x2cd170u: goto label_2cd170;
        case 0x2cd180u: goto label_2cd180;
        case 0x2cd1a8u: goto label_2cd1a8;
        case 0x2cd1bcu: goto label_2cd1bc;
        case 0x2cd1d8u: goto label_2cd1d8;
        case 0x2cd1e8u: goto label_2cd1e8;
        case 0x2cd1f0u: goto label_2cd1f0;
        case 0x2cd20cu: goto label_2cd20c;
        case 0x2cd220u: goto label_2cd220;
        case 0x2cd258u: goto label_2cd258;
        case 0x2cd278u: goto label_2cd278;
        case 0x2cd298u: goto label_2cd298;
        case 0x2cd2a8u: goto label_2cd2a8;
        case 0x2cd2c8u: goto label_2cd2c8;
        case 0x2cd2e4u: goto label_2cd2e4;
        case 0x2cd304u: goto label_2cd304;
        case 0x2cd310u: goto label_2cd310;
        case 0x2cd32cu: goto label_2cd32c;
        case 0x2cd334u: goto label_2cd334;
        case 0x2cd33cu: goto label_2cd33c;
        case 0x2cd350u: goto label_2cd350;
        case 0x2cd360u: goto label_2cd360;
        case 0x2cd368u: goto label_2cd368;
        case 0x2cd370u: goto label_2cd370;
        case 0x2cd380u: goto label_2cd380;
        case 0x2cd3a0u: goto label_2cd3a0;
        default: break;
    }

    ctx->pc = 0x2cd028u;

    // 0x2cd028: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2cd028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2cd02c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2cd02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2cd030: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2cd030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2cd034: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x2cd034u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x2cd038: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x2cd038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x2cd03c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2cd03cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd040: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x2cd040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x2cd044: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2cd044u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd048: 0xafa80010  sw          $t0, 0x10($sp)
    ctx->pc = 0x2cd048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 8));
    // 0x2cd04c: 0x26044ef0  addiu       $a0, $s0, 0x4EF0
    ctx->pc = 0x2cd04cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20208));
    // 0x2cd050: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2cd050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2cd054: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2cd054u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd058: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x2cd058u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x2cd05c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x2cd05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x2cd060: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x2cd060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x2cd064: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x2cd064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x2cd068: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x2cd068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x2cd06c: 0xafa7000c  sw          $a3, 0xC($sp)
    ctx->pc = 0x2cd06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    // 0x2cd070: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2cd070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2cd074: 0xc0aed14  jal         func_2BB450
    ctx->pc = 0x2CD074u;
    SET_GPR_U32(ctx, 31, 0x2CD07Cu);
    ctx->pc = 0x2CD078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD074u;
    // 0x2cd078: 0x8cd40004  lw          $s4, 0x4($a2) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB450u, 0x2CD074u, 0x2CD07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD07Cu;
label_2cd07c:
    // 0x2cd07c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2cd07cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cd080: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2cd080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2cd084: 0x8c62b4a8  lw          $v0, -0x4B58($v1)
    ctx->pc = 0x2cd084u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FB4A8u));
    // 0x2cd088: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2cd088u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2cd08c: 0x2852823  subu        $a1, $s4, $a1
    ctx->pc = 0x2cd08cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x2cd090: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2cd090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2cd094: 0xafb40014  sw          $s4, 0x14($sp)
    ctx->pc = 0x2cd094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 20));
    // 0x2cd098: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2cd098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2cd09c: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2cd09cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2cd0a0: 0xa04032fc  sb          $zero, 0x32FC($v0)
    ctx->pc = 0x2cd0a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 13052), (uint8_t)GPR_U32(ctx, 0));
    // 0x2cd0a4: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x2CD0A4u;
    {
        const bool branch_taken_0x2cd0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD0A4u;
        // 0x2cd0a8: 0x60b82d  daddu       $s7, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd0a4) {
            ctx->pc = 0x2CD2D0u;
            goto label_2cd2d0;
        }
    }
    ctx->pc = 0x2CD0ACu;
    // 0x2cd0ac: 0x0  nop
    ctx->pc = 0x2cd0acu;
    // NOP
label_2cd0b0:
    // 0x2cd0b0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD0B0u;
    {
        const bool branch_taken_0x2cd0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD0B0u;
        // 0x2cd0b4: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd0b0) {
            ctx->pc = 0x2CD0C4u;
            goto label_2cd0c4;
        }
    }
    ctx->pc = 0x2CD0B8u;
    // 0x2cd0b8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2cd0b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cd0bc: 0x285282a  slt         $a1, $s4, $a1
    ctx->pc = 0x2cd0bcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2cd0c0: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x2cd0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
label_2cd0c4:
    // 0x2cd0c4: 0x8c62b4a0  lw          $v0, -0x4B60($v1)
    ctx->pc = 0x2cd0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948000)));
    // 0x2cd0c8: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x2cd0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2cd0cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2cd0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cd0d0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2CD0D0u;
    {
        const bool branch_taken_0x2cd0d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD0D0u;
        // 0x2cd0d4: 0xac64b4a0  sw          $a0, -0x4B60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294948000), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd0d0) {
            ctx->pc = 0x2CD158u;
            goto label_2cd158;
        }
    }
    ctx->pc = 0x2CD0D8u;
    // 0x2cd0d8: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x2cd0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2cd0dc: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2CD0DCu;
    {
        const bool branch_taken_0x2cd0dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD0DCu;
        // 0x2cd0e0: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd0dc) {
            ctx->pc = 0x2CD158u;
            goto label_2cd158;
        }
    }
    ctx->pc = 0x2CD0E4u;
    // 0x2cd0e4: 0x8c62b4a4  lw          $v0, -0x4B5C($v1)
    ctx->pc = 0x2cd0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948004)));
    // 0x2cd0e8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2cd0e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2cd0ec: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2CD0ECu;
    {
        const bool branch_taken_0x2cd0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD0ECu;
        // 0x2cd0f0: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd0ec) {
            ctx->pc = 0x2CD158u;
            goto label_2cd158;
        }
    }
    ctx->pc = 0x2CD0F4u;
    // 0x2cd0f4: 0x26104d40  addiu       $s0, $s0, 0x4D40
    ctx->pc = 0x2cd0f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19776));
    // 0x2cd0f8: 0xc0ae65e  jal         func_2B9978
    ctx->pc = 0x2CD0F8u;
    SET_GPR_U32(ctx, 31, 0x2CD100u);
    ctx->pc = 0x2CD0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD0F8u;
    // 0x2cd0fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9978u, 0x2CD0F8u, 0x2CD100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD100u;
label_2cd100:
    // 0x2cd100: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2cd100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2cd104: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2cd104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2cd108: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2CD108u;
    {
        const bool branch_taken_0x2cd108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2CD10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD108u;
        // 0x2cd10c: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd108) {
            ctx->pc = 0x2CD164u;
            goto label_2cd164;
        }
    }
    ctx->pc = 0x2CD110u;
    // 0x2cd110: 0x24642450  addiu       $a0, $v1, 0x2450
    ctx->pc = 0x2cd110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x2cd114: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2cd114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2cd118: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2cd118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2cd11c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD11Cu;
    {
        const bool branch_taken_0x2cd11c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD11Cu;
        // 0x2cd120: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd11c) {
            ctx->pc = 0x2CD130u;
            goto label_2cd130;
        }
    }
    ctx->pc = 0x2CD124u;
    // 0x2cd124: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2cd124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2cd128: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x2cd128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x2cd12c: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x2cd12cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2cd130:
    // 0x2cd130: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x2CD130u;
    {
        const bool branch_taken_0x2cd130 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD130u;
        // 0x2cd134: 0x8ee2b4a8  lw          $v0, -0x4B58($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd130) {
            ctx->pc = 0x2CD164u;
            goto label_2cd164;
        }
    }
    ctx->pc = 0x2CD138u;
    // 0x2cd138: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2cd138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2cd13c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2cd13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd140: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x2cd140u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd144: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2cd144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2cd148: 0xc0abe46  jal         func_2AF918
    ctx->pc = 0x2CD148u;
    SET_GPR_U32(ctx, 31, 0x2CD150u);
    ctx->pc = 0x2CD14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD148u;
    // 0x2cd14c: 0xa04532fc  sb          $a1, 0x32FC($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 13052), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF918u, 0x2CD148u, 0x2CD150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD150u;
label_2cd150:
    // 0x2cd150: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD150u;
    {
        const bool branch_taken_0x2cd150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD150u;
        // 0x2cd154: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd150) {
            ctx->pc = 0x2CD168u;
            goto label_2cd168;
        }
    }
    ctx->pc = 0x2CD158u;
label_2cd158:
    // 0x2cd158: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x2cd158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2cd15c: 0xc0abc30  jal         func_2AF0C0
    ctx->pc = 0x2CD15Cu;
    SET_GPR_U32(ctx, 31, 0x2CD164u);
    ctx->pc = 0x2CD160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD15Cu;
    // 0x2cd160: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF0C0u, 0x2CD15Cu, 0x2CD164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD164u;
label_2cd164:
    // 0x2cd164: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x2cd164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_2cd168:
    // 0x2cd168: 0xc0aed32  jal         func_2BB4C8
    ctx->pc = 0x2CD168u;
    SET_GPR_U32(ctx, 31, 0x2CD170u);
    ctx->pc = 0x2CD16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD168u;
    // 0x2cd16c: 0x24444ef0  addiu       $a0, $v0, 0x4EF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB4C8u, 0x2CD168u, 0x2CD170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD170u;
label_2cd170:
    // 0x2cd170: 0x17c00017  bnez        $fp, . + 4 + (0x17 << 2)
    ctx->pc = 0x2CD170u;
    {
        const bool branch_taken_0x2cd170 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD170u;
        // 0x2cd174: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd170) {
            ctx->pc = 0x2CD1D0u;
            goto label_2cd1d0;
        }
    }
    ctx->pc = 0x2CD178u;
    // 0x2cd178: 0xc0b37a2  jal         func_2CDE88
    ctx->pc = 0x2CD178u;
    SET_GPR_U32(ctx, 31, 0x2CD180u);
    ctx->pc = 0x2CD17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD178u;
    // 0x2cd17c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDE88u, 0x2CD178u, 0x2CD180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD180u;
label_2cd180:
    // 0x2cd180: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x2cd180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2cd184: 0x18a00012  blez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CD184u;
    {
        const bool branch_taken_0x2cd184 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2CD188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD184u;
        // 0x2cd188: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd184) {
            ctx->pc = 0x2CD1D0u;
            goto label_2cd1d0;
        }
    }
    ctx->pc = 0x2CD18Cu;
    // 0x2cd18c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2cd18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2cd190: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2cd190u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2cd194: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2CD194u;
    {
        const bool branch_taken_0x2cd194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD194u;
        // 0x2cd198: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd194) {
            ctx->pc = 0x2CD1D0u;
            goto label_2cd1d0;
        }
    }
    ctx->pc = 0x2CD19Cu;
    // 0x2cd19c: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x2cd19cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x2cd1a0: 0xc0b3868  jal         func_2CE1A0
    ctx->pc = 0x2CD1A0u;
    SET_GPR_U32(ctx, 31, 0x2CD1A8u);
    ctx->pc = 0x2CD1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD1A0u;
    // 0x2cd1a4: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE1A0u, 0x2CD1A0u, 0x2CD1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD1A8u;
label_2cd1a8:
    // 0x2cd1a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cd1a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd1ac: 0x6000007  bltz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CD1ACu;
    {
        const bool branch_taken_0x2cd1ac = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2CD1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD1ACu;
        // 0x2cd1b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd1ac) {
            ctx->pc = 0x2CD1CCu;
            goto label_2cd1cc;
        }
    }
    ctx->pc = 0x2CD1B4u;
    // 0x2cd1b4: 0xc0b37ae  jal         func_2CDEB8
    ctx->pc = 0x2CD1B4u;
    SET_GPR_U32(ctx, 31, 0x2CD1BCu);
    ctx->pc = 0x2CD1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD1B4u;
    // 0x2cd1b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDEB8u, 0x2CD1B4u, 0x2CD1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD1BCu;
label_2cd1bc:
    // 0x2cd1bc: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2cd1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2cd1c0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2cd1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2cd1c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2CD1C4u;
    {
        const bool branch_taken_0x2cd1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD1C4u;
        // 0x2cd1c8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd1c4) {
            ctx->pc = 0x2CD1D0u;
            goto label_2cd1d0;
        }
    }
    ctx->pc = 0x2CD1CCu;
label_2cd1cc:
    // 0x2cd1cc: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x2cd1ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cd1d0:
    // 0x2cd1d0: 0xc0b34f8  jal         func_2CD3E0
    ctx->pc = 0x2CD1D0u;
    SET_GPR_U32(ctx, 31, 0x2CD1D8u);
    ctx->pc = 0x2CD1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD1D0u;
    // 0x2cd1d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD3E0u, 0x2CD1D0u, 0x2CD1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD1D8u;
label_2cd1d8:
    // 0x2cd1d8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2cd1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2cd1dc: 0x27b30004  addiu       $s3, $sp, 0x4
    ctx->pc = 0x2cd1dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x2cd1e0: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x2cd1e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2cd1e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cd1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2cd1e8:
    // 0x2cd1e8: 0xc0b37c0  jal         func_2CDF00
    ctx->pc = 0x2CD1E8u;
    SET_GPR_U32(ctx, 31, 0x2CD1F0u);
    ctx->pc = 0x2CD1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD1E8u;
    // 0x2cd1ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDF00u, 0x2CD1E8u, 0x2CD1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD1F0u;
label_2cd1f0:
    // 0x2cd1f0: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2CD1F0u;
    {
        const bool branch_taken_0x2cd1f0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2CD1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD1F0u;
        // 0x2cd1f4: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd1f0) {
            ctx->pc = 0x2CD220u;
            goto label_2cd220;
        }
    }
    ctx->pc = 0x2CD1F8u;
    // 0x2cd1f8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2cd1f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd1fc: 0x8e280008  lw          $t0, 0x8($s1)
    ctx->pc = 0x2cd1fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2cd200: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2cd200u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd204: 0xc0e2756  jal         func_389D58
    ctx->pc = 0x2CD204u;
    SET_GPR_U32(ctx, 31, 0x2CD20Cu);
    ctx->pc = 0x2CD208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD204u;
    // 0x2cd208: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389D58u, 0x2CD204u, 0x2CD20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD20Cu;
label_2cd20c:
    // 0x2cd20c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2cd20cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd210: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2cd210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd214: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2cd214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd218: 0xc0b37d2  jal         func_2CDF48
    ctx->pc = 0x2CD218u;
    SET_GPR_U32(ctx, 31, 0x2CD220u);
    ctx->pc = 0x2CD21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD218u;
    // 0x2cd21c: 0x295a023  subu        $s4, $s4, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDF48u, 0x2CD218u, 0x2CD220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD220u;
label_2cd220:
    // 0x2cd220: 0x13c00005  beqz        $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD220u;
    {
        const bool branch_taken_0x2cd220 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD220u;
        // 0x2cd224: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd220) {
            ctx->pc = 0x2CD238u;
            goto label_2cd238;
        }
    }
    ctx->pc = 0x2CD228u;
    // 0x2cd228: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD228u;
    {
        const bool branch_taken_0x2cd228 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD228u;
        // 0x2cd22c: 0x2a0200c8  slti        $v0, $s0, 0xC8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)200) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd228) {
            ctx->pc = 0x2CD238u;
            goto label_2cd238;
        }
    }
    ctx->pc = 0x2CD230u;
    // 0x2cd230: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2CD230u;
    {
        const bool branch_taken_0x2cd230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD230u;
        // 0x2cd234: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd230) {
            ctx->pc = 0x2CD1E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd1e8;
        }
    }
    ctx->pc = 0x2CD238u;
label_2cd238:
    // 0x2cd238: 0x8ee2b4a8  lw          $v0, -0x4B58($s7)
    ctx->pc = 0x2cd238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948008)));
    // 0x2cd23c: 0x3c100067  lui         $s0, 0x67
    ctx->pc = 0x2cd23cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)103 << 16));
    // 0x2cd240: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2cd240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2cd244: 0x8c4330ac  lw          $v1, 0x30AC($v0)
    ctx->pc = 0x2cd244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12460)));
    // 0x2cd248: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD248u;
    {
        const bool branch_taken_0x2cd248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD248u;
        // 0x2cd24c: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd248) {
            ctx->pc = 0x2CD25Cu;
            goto label_2cd25c;
        }
    }
    ctx->pc = 0x2CD250u;
    // 0x2cd250: 0xc0b3660  jal         func_2CD980
    ctx->pc = 0x2CD250u;
    SET_GPR_U32(ctx, 31, 0x2CD258u);
    ctx->pc = 0x2CD980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD980u, 0x2CD250u, 0x2CD258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD258u;
label_2cd258:
    // 0x2cd258: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x2cd258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2cd25c:
    // 0x2cd25c: 0x14a0001d  bnez        $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x2CD25Cu;
    {
        const bool branch_taken_0x2cd25c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD25Cu;
        // 0x2cd260: 0x2a820005  slti        $v0, $s4, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd25c) {
            ctx->pc = 0x2CD2D4u;
            goto label_2cd2d4;
        }
    }
    ctx->pc = 0x2CD264u;
    // 0x2cd264: 0x8ee2b4a8  lw          $v0, -0x4B58($s7)
    ctx->pc = 0x2cd264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948008)));
    // 0x2cd268: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2cd268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2cd26c: 0x34843094  ori         $a0, $a0, 0x3094
    ctx->pc = 0x2cd26cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12436);
    // 0x2cd270: 0xc0b4112  jal         func_2D0448
    ctx->pc = 0x2CD270u;
    SET_GPR_U32(ctx, 31, 0x2CD278u);
    ctx->pc = 0x2CD274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD270u;
    // 0x2cd274: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0448u, 0x2CD270u, 0x2CD278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD278u;
label_2cd278:
    // 0x2cd278: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CD278u;
    {
        const bool branch_taken_0x2cd278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD278u;
        // 0x2cd27c: 0x8ee2b4a8  lw          $v0, -0x4B58($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd278) {
            ctx->pc = 0x2CD2D0u;
            goto label_2cd2d0;
        }
    }
    ctx->pc = 0x2CD280u;
    // 0x2cd280: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2cd280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2cd284: 0x8c4330ac  lw          $v1, 0x30AC($v0)
    ctx->pc = 0x2cd284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12460)));
    // 0x2cd288: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD288u;
    {
        const bool branch_taken_0x2cd288 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd288) {
            ctx->pc = 0x2CD2A0u;
            goto label_2cd2a0;
        }
    }
    ctx->pc = 0x2CD290u;
    // 0x2cd290: 0xc0b3504  jal         func_2CD410
    ctx->pc = 0x2CD290u;
    SET_GPR_U32(ctx, 31, 0x2CD298u);
    ctx->pc = 0x2CD410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD410u, 0x2CD290u, 0x2CD298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD298u;
label_2cd298:
    // 0x2cd298: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2CD298u;
    {
        const bool branch_taken_0x2cd298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD298u;
        // 0x2cd29c: 0x2a820005  slti        $v0, $s4, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd298) {
            ctx->pc = 0x2CD2D4u;
            goto label_2cd2d4;
        }
    }
    ctx->pc = 0x2CD2A0u;
label_2cd2a0:
    // 0x2cd2a0: 0xc0b2fba  jal         func_2CBEE8
    ctx->pc = 0x2CD2A0u;
    SET_GPR_U32(ctx, 31, 0x2CD2A8u);
    ctx->pc = 0x2CD2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD2A0u;
    // 0x2cd2a4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBEE8u, 0x2CD2A0u, 0x2CD2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD2A8u;
label_2cd2a8:
    // 0x2cd2a8: 0x8ee5b4a8  lw          $a1, -0x4B58($s7)
    ctx->pc = 0x2cd2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948008)));
    // 0x2cd2ac: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x2cd2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2cd2b0: 0x8c4330ac  lw          $v1, 0x30AC($v0)
    ctx->pc = 0x2cd2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12460)));
    // 0x2cd2b4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD2B4u;
    {
        const bool branch_taken_0x2cd2b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD2B4u;
        // 0x2cd2b8: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd2b4) {
            ctx->pc = 0x2CD2C8u;
            goto label_2cd2c8;
        }
    }
    ctx->pc = 0x2CD2BCu;
    // 0x2cd2bc: 0x34843038  ori         $a0, $a0, 0x3038
    ctx->pc = 0x2cd2bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12344);
    // 0x2cd2c0: 0xc0b2bbc  jal         func_2CAEF0
    ctx->pc = 0x2CD2C0u;
    SET_GPR_U32(ctx, 31, 0x2CD2C8u);
    ctx->pc = 0x2CD2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD2C0u;
    // 0x2cd2c4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAEF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAEF0u, 0x2CD2C0u, 0x2CD2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD2C8u;
label_2cd2c8:
    // 0x2cd2c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cd2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd2cc: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2cd2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_2cd2d0:
    // 0x2cd2d0: 0x2a820005  slti        $v0, $s4, 0x5
    ctx->pc = 0x2cd2d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
label_2cd2d4:
    // 0x2cd2d4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CD2D4u;
    {
        const bool branch_taken_0x2cd2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD2D4u;
        // 0x2cd2d8: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd2d4) {
            ctx->pc = 0x2CD2F8u;
            goto label_2cd2f8;
        }
    }
    ctx->pc = 0x2CD2DCu;
    // 0x2cd2dc: 0xc0b3f30  jal         func_2CFCC0
    ctx->pc = 0x2CD2DCu;
    SET_GPR_U32(ctx, 31, 0x2CD2E4u);
    ctx->pc = 0x2CD2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD2DCu;
    // 0x2cd2e0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFCC0u, 0x2CD2DCu, 0x2CD2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD2E4u;
label_2cd2e4:
    // 0x2cd2e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2cd2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2cd2e8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD2E8u;
    {
        const bool branch_taken_0x2cd2e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CD2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD2E8u;
        // 0x2cd2ec: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd2e8) {
            ctx->pc = 0x2CD2F8u;
            goto label_2cd2f8;
        }
    }
    ctx->pc = 0x2CD2F0u;
    // 0x2cd2f0: 0x13c0ff6f  beqz        $fp, . + 4 + (-0x91 << 2)
    ctx->pc = 0x2CD2F0u;
    {
        const bool branch_taken_0x2cd2f0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD2F0u;
        // 0x2cd2f4: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd2f0) {
            ctx->pc = 0x2CD0B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd0b0;
        }
    }
    ctx->pc = 0x2CD2F8u;
label_2cd2f8:
    // 0x2cd2f8: 0x3c100067  lui         $s0, 0x67
    ctx->pc = 0x2cd2f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)103 << 16));
    // 0x2cd2fc: 0xc0aed30  jal         func_2BB4C0
    ctx->pc = 0x2CD2FCu;
    SET_GPR_U32(ctx, 31, 0x2CD304u);
    ctx->pc = 0x2CD300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD2FCu;
    // 0x2cd300: 0x24a44ef0  addiu       $a0, $a1, 0x4EF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 20208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB4C0u, 0x2CD2FCu, 0x2CD304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD304u;
label_2cd304:
    // 0x2cd304: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2CD304u;
    {
        const bool branch_taken_0x2cd304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd304) {
            ctx->pc = 0x2CD334u;
            goto label_2cd334;
        }
    }
    ctx->pc = 0x2CD30Cu;
    // 0x2cd30c: 0x0  nop
    ctx->pc = 0x2cd30cu;
    // NOP
label_2cd310:
    // 0x2cd310: 0x8ee2b4a8  lw          $v0, -0x4B58($s7)
    ctx->pc = 0x2cd310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948008)));
    // 0x2cd314: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2cd314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2cd318: 0x8c4330ac  lw          $v1, 0x30AC($v0)
    ctx->pc = 0x2cd318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12460)));
    // 0x2cd31c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD31Cu;
    {
        const bool branch_taken_0x2cd31c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd31c) {
            ctx->pc = 0x2CD32Cu;
            goto label_2cd32c;
        }
    }
    ctx->pc = 0x2CD324u;
    // 0x2cd324: 0xc0b3660  jal         func_2CD980
    ctx->pc = 0x2CD324u;
    SET_GPR_U32(ctx, 31, 0x2CD32Cu);
    ctx->pc = 0x2CD980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD980u, 0x2CD324u, 0x2CD32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD32Cu;
label_2cd32c:
    // 0x2cd32c: 0xc0b34f8  jal         func_2CD3E0
    ctx->pc = 0x2CD32Cu;
    SET_GPR_U32(ctx, 31, 0x2CD334u);
    ctx->pc = 0x2CD3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD3E0u, 0x2CD32Cu, 0x2CD334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD334u;
label_2cd334:
    // 0x2cd334: 0xc0b3f52  jal         func_2CFD48
    ctx->pc = 0x2CD334u;
    SET_GPR_U32(ctx, 31, 0x2CD33Cu);
    ctx->pc = 0x2CD338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD334u;
    // 0x2cd338: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFD48u, 0x2CD334u, 0x2CD33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD33Cu;
label_2cd33c:
    // 0x2cd33c: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2CD33Cu;
    {
        const bool branch_taken_0x2cd33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD33Cu;
        // 0x2cd340: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd33c) {
            ctx->pc = 0x2CD310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd310;
        }
    }
    ctx->pc = 0x2CD344u;
    // 0x2cd344: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x2cd344u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x2cd348: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2CD348u;
    {
        const bool branch_taken_0x2cd348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD348u;
        // 0x2cd34c: 0x3c100067  lui         $s0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd348) {
            ctx->pc = 0x2CD368u;
            goto label_2cd368;
        }
    }
    ctx->pc = 0x2CD350u;
label_2cd350:
    // 0x2cd350: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD350u;
    {
        const bool branch_taken_0x2cd350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd350) {
            ctx->pc = 0x2CD360u;
            goto label_2cd360;
        }
    }
    ctx->pc = 0x2CD358u;
    // 0x2cd358: 0xc0b3660  jal         func_2CD980
    ctx->pc = 0x2CD358u;
    SET_GPR_U32(ctx, 31, 0x2CD360u);
    ctx->pc = 0x2CD980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD980u, 0x2CD358u, 0x2CD360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD360u;
label_2cd360:
    // 0x2cd360: 0xc0b34f8  jal         func_2CD3E0
    ctx->pc = 0x2CD360u;
    SET_GPR_U32(ctx, 31, 0x2CD368u);
    ctx->pc = 0x2CD3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD3E0u, 0x2CD360u, 0x2CD368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD368u;
label_2cd368:
    // 0x2cd368: 0xc0b3f88  jal         func_2CFE20
    ctx->pc = 0x2CD368u;
    SET_GPR_U32(ctx, 31, 0x2CD370u);
    ctx->pc = 0x2CD36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD368u;
    // 0x2cd36c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFE20u, 0x2CD368u, 0x2CD370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD370u;
label_2cd370:
    // 0x2cd370: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2CD370u;
    {
        const bool branch_taken_0x2cd370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd370) {
            ctx->pc = 0x2CD398u;
            goto label_2cd398;
        }
    }
    ctx->pc = 0x2CD378u;
    // 0x2cd378: 0xc0b3f30  jal         func_2CFCC0
    ctx->pc = 0x2CD378u;
    SET_GPR_U32(ctx, 31, 0x2CD380u);
    ctx->pc = 0x2CD37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD378u;
    // 0x2cd37c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFCC0u, 0x2CD378u, 0x2CD380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD380u;
label_2cd380:
    // 0x2cd380: 0x10520005  beq         $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD380u;
    {
        const bool branch_taken_0x2cd380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2CD384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD380u;
        // 0x2cd384: 0x8e22b4a8  lw          $v0, -0x4B58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd380) {
            ctx->pc = 0x2CD398u;
            goto label_2cd398;
        }
    }
    ctx->pc = 0x2CD388u;
    // 0x2cd388: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2cd388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2cd38c: 0x8c4330a0  lw          $v1, 0x30A0($v0)
    ctx->pc = 0x2cd38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12448)));
    // 0x2cd390: 0x5460ffef  bnel        $v1, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2CD390u;
    {
        const bool branch_taken_0x2cd390 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd390) {
            ctx->pc = 0x2CD394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD390u;
            // 0x2cd394: 0x8c4230ac  lw          $v0, 0x30AC($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12460)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cd350;
        }
    }
    ctx->pc = 0x2CD398u;
label_2cd398:
    // 0x2cd398: 0xc0b2fd4  jal         func_2CBF50
    ctx->pc = 0x2CD398u;
    SET_GPR_U32(ctx, 31, 0x2CD3A0u);
    ctx->pc = 0x2CBF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBF50u, 0x2CD398u, 0x2CD3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD3A0u;
label_2cd3a0:
    // 0x2cd3a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2cd3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cd3a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2cd3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cd3a8: 0x7e100a  movz        $v0, $v1, $fp
    ctx->pc = 0x2cd3a8u;
    if (GPR_U64(ctx, 30) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2cd3ac: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2cd3acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cd3b0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2cd3b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2cd3b4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2cd3b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cd3b8: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2cd3b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2cd3bc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2cd3bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cd3c0: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x2cd3c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cd3c4: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x2cd3c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cd3c8: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x2cd3c8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cd3cc: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x2cd3ccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cd3d0: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x2cd3d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cd3d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD3D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD3D4u;
        // 0x2cd3d8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD3D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD3DCu;
    // 0x2cd3dc: 0x0  nop
    ctx->pc = 0x2cd3dcu;
    // NOP
    ctx->pc = 0x2cd3e0u;
}
