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

// Function: sub_002B2F40
// Address: 0x2b2f40 - 0x2b3068
void sub_002B2F40_0x2b2f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2F40_0x2b2f40");
#endif

    switch (ctx->pc) {
        case 0x2b2f40u: goto label_2b2f40;
        case 0x2b2f44u: goto label_2b2f44;
        case 0x2b2f48u: goto label_2b2f48;
        case 0x2b2f4cu: goto label_2b2f4c;
        case 0x2b2f50u: goto label_2b2f50;
        case 0x2b2f54u: goto label_2b2f54;
        case 0x2b2f58u: goto label_2b2f58;
        case 0x2b2f5cu: goto label_2b2f5c;
        case 0x2b2f60u: goto label_2b2f60;
        case 0x2b2f64u: goto label_2b2f64;
        case 0x2b2f68u: goto label_2b2f68;
        case 0x2b2f6cu: goto label_2b2f6c;
        case 0x2b2f70u: goto label_2b2f70;
        case 0x2b2f74u: goto label_2b2f74;
        case 0x2b2f78u: goto label_2b2f78;
        case 0x2b2f7cu: goto label_2b2f7c;
        case 0x2b2f80u: goto label_2b2f80;
        case 0x2b2f84u: goto label_2b2f84;
        case 0x2b2f88u: goto label_2b2f88;
        case 0x2b2f8cu: goto label_2b2f8c;
        case 0x2b2f90u: goto label_2b2f90;
        case 0x2b2f94u: goto label_2b2f94;
        case 0x2b2f98u: goto label_2b2f98;
        case 0x2b2f9cu: goto label_2b2f9c;
        case 0x2b2fa0u: goto label_2b2fa0;
        case 0x2b2fa4u: goto label_2b2fa4;
        case 0x2b2fa8u: goto label_2b2fa8;
        case 0x2b2facu: goto label_2b2fac;
        case 0x2b2fb0u: goto label_2b2fb0;
        case 0x2b2fb4u: goto label_2b2fb4;
        case 0x2b2fb8u: goto label_2b2fb8;
        case 0x2b2fbcu: goto label_2b2fbc;
        case 0x2b2fc0u: goto label_2b2fc0;
        case 0x2b2fc4u: goto label_2b2fc4;
        case 0x2b2fc8u: goto label_2b2fc8;
        case 0x2b2fccu: goto label_2b2fcc;
        case 0x2b2fd0u: goto label_2b2fd0;
        case 0x2b2fd4u: goto label_2b2fd4;
        case 0x2b2fd8u: goto label_2b2fd8;
        case 0x2b2fdcu: goto label_2b2fdc;
        case 0x2b2fe0u: goto label_2b2fe0;
        case 0x2b2fe4u: goto label_2b2fe4;
        case 0x2b2fe8u: goto label_2b2fe8;
        case 0x2b2fecu: goto label_2b2fec;
        case 0x2b2ff0u: goto label_2b2ff0;
        case 0x2b2ff4u: goto label_2b2ff4;
        case 0x2b2ff8u: goto label_2b2ff8;
        case 0x2b2ffcu: goto label_2b2ffc;
        case 0x2b3000u: goto label_2b3000;
        case 0x2b3004u: goto label_2b3004;
        case 0x2b3008u: goto label_2b3008;
        case 0x2b300cu: goto label_2b300c;
        case 0x2b3010u: goto label_2b3010;
        case 0x2b3014u: goto label_2b3014;
        case 0x2b3018u: goto label_2b3018;
        case 0x2b301cu: goto label_2b301c;
        case 0x2b3020u: goto label_2b3020;
        case 0x2b3024u: goto label_2b3024;
        case 0x2b3028u: goto label_2b3028;
        case 0x2b302cu: goto label_2b302c;
        case 0x2b3030u: goto label_2b3030;
        case 0x2b3034u: goto label_2b3034;
        case 0x2b3038u: goto label_2b3038;
        case 0x2b303cu: goto label_2b303c;
        case 0x2b3040u: goto label_2b3040;
        case 0x2b3044u: goto label_2b3044;
        case 0x2b3048u: goto label_2b3048;
        case 0x2b304cu: goto label_2b304c;
        case 0x2b3050u: goto label_2b3050;
        case 0x2b3054u: goto label_2b3054;
        case 0x2b3058u: goto label_2b3058;
        case 0x2b305cu: goto label_2b305c;
        case 0x2b3060u: goto label_2b3060;
        case 0x2b3064u: goto label_2b3064;
        default: break;
    }

    ctx->pc = 0x2b2f40u;

label_2b2f40:
    // 0x2b2f40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b2f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2b2f44:
    // 0x2b2f44: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2b2f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2b2f48:
    // 0x2b2f48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b2f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2b2f4c:
    // 0x2b2f4c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b2f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2b2f50:
    // 0x2b2f50: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b2f50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b2f54:
    // 0x2b2f54: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b2f54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2b2f58:
    // 0x2b2f58: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2b2f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_2b2f5c:
    // 0x2b2f5c: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x2b2f5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b2f60:
    // 0x2b2f60: 0xac90009c  sw          $s0, 0x9C($a0)
    ctx->pc = 0x2b2f60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 16));
label_2b2f64:
    // 0x2b2f64: 0x8c62cba8  lw          $v0, -0x3458($v1)
    ctx->pc = 0x2b2f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953896)));
label_2b2f68:
    // 0x2b2f68: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2b2f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2b2f6c:
    // 0x2b2f6c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2b2f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b2f70:
    // 0x2b2f70: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2b2f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2b2f74:
    // 0x2b2f74: 0x40f809  jalr        $v0
label_2b2f78:
    if (ctx->pc == 0x2B2F78u) {
        ctx->pc = 0x2B2F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2F74u;
        // 0x2b2f78: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2F7Cu;
        goto label_2b2f7c;
    }
    ctx->pc = 0x2B2F74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B2F7Cu);
        ctx->pc = 0x2B2F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2F74u;
        // 0x2b2f78: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2F74u, 0x2B2F7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B2F7Cu;
label_2b2f7c:
    // 0x2b2f7c: 0x2e030006  sltiu       $v1, $s0, 0x6
    ctx->pc = 0x2b2f7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2b2f80:
    // 0x2b2f80: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_2b2f84:
    if (ctx->pc == 0x2B2F84u) {
        ctx->pc = 0x2B2F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2F80u;
        // 0x2b2f84: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2F88u;
        goto label_2b2f88;
    }
    ctx->pc = 0x2B2F80u;
    {
        const bool branch_taken_0x2b2f80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2F80u;
        // 0x2b2f84: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2f80) {
            ctx->pc = 0x2B2FD4u;
            goto label_2b2fd4;
        }
    }
    ctx->pc = 0x2B2F88u;
label_2b2f88:
    // 0x2b2f88: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2b2f88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2b2f8c:
    // 0x2b2f8c: 0x2442f880  addiu       $v0, $v0, -0x780
    ctx->pc = 0x2b2f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965376));
label_2b2f90:
    // 0x2b2f90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b2f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b2f94:
    // 0x2b2f94: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b2f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b2f98:
    // 0x2b2f98: 0x800008  jr          $a0
label_2b2f9c:
    if (ctx->pc == 0x2B2F9Cu) {
        ctx->pc = 0x2B2FA0u;
        goto label_2b2fa0;
    }
    ctx->pc = 0x2B2F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B2FA0u: goto label_2b2fa0;
            case 0x2B2FA8u: goto label_2b2fa8;
            case 0x2B2FB0u: goto label_2b2fb0;
            case 0x2B2FB8u: goto label_2b2fb8;
            case 0x2B2FC0u: goto label_2b2fc0;
            case 0x2B2FC8u: goto label_2b2fc8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2F98u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B2FA0u;
label_2b2fa0:
    // 0x2b2fa0: 0x1000000a  b           . + 4 + (0xA << 2)
label_2b2fa4:
    if (ctx->pc == 0x2B2FA4u) {
        ctx->pc = 0x2B2FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2FA0u;
        // 0x2b2fa4: 0x24030065  addiu       $v1, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2FA8u;
        goto label_2b2fa8;
    }
    ctx->pc = 0x2B2FA0u;
    {
        const bool branch_taken_0x2b2fa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2FA0u;
        // 0x2b2fa4: 0x24030065  addiu       $v1, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2fa0) {
            ctx->pc = 0x2B2FCCu;
            goto label_2b2fcc;
        }
    }
    ctx->pc = 0x2B2FA8u;
label_2b2fa8:
    // 0x2b2fa8: 0x10000008  b           . + 4 + (0x8 << 2)
label_2b2fac:
    if (ctx->pc == 0x2B2FACu) {
        ctx->pc = 0x2B2FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2FA8u;
        // 0x2b2fac: 0x24030067  addiu       $v1, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2FB0u;
        goto label_2b2fb0;
    }
    ctx->pc = 0x2B2FA8u;
    {
        const bool branch_taken_0x2b2fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2FA8u;
        // 0x2b2fac: 0x24030067  addiu       $v1, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2fa8) {
            ctx->pc = 0x2B2FCCu;
            goto label_2b2fcc;
        }
    }
    ctx->pc = 0x2B2FB0u;
label_2b2fb0:
    // 0x2b2fb0: 0x10000006  b           . + 4 + (0x6 << 2)
label_2b2fb4:
    if (ctx->pc == 0x2B2FB4u) {
        ctx->pc = 0x2B2FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2FB0u;
        // 0x2b2fb4: 0x24030066  addiu       $v1, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2FB8u;
        goto label_2b2fb8;
    }
    ctx->pc = 0x2B2FB0u;
    {
        const bool branch_taken_0x2b2fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2FB0u;
        // 0x2b2fb4: 0x24030066  addiu       $v1, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2fb0) {
            ctx->pc = 0x2B2FCCu;
            goto label_2b2fcc;
        }
    }
    ctx->pc = 0x2B2FB8u;
label_2b2fb8:
    // 0x2b2fb8: 0x10000004  b           . + 4 + (0x4 << 2)
label_2b2fbc:
    if (ctx->pc == 0x2B2FBCu) {
        ctx->pc = 0x2B2FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2FB8u;
        // 0x2b2fbc: 0x24030069  addiu       $v1, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2FC0u;
        goto label_2b2fc0;
    }
    ctx->pc = 0x2B2FB8u;
    {
        const bool branch_taken_0x2b2fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2FB8u;
        // 0x2b2fbc: 0x24030069  addiu       $v1, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2fb8) {
            ctx->pc = 0x2B2FCCu;
            goto label_2b2fcc;
        }
    }
    ctx->pc = 0x2B2FC0u;
label_2b2fc0:
    // 0x2b2fc0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2b2fc4:
    if (ctx->pc == 0x2B2FC4u) {
        ctx->pc = 0x2B2FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2FC0u;
        // 0x2b2fc4: 0x24030073  addiu       $v1, $zero, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2FC8u;
        goto label_2b2fc8;
    }
    ctx->pc = 0x2B2FC0u;
    {
        const bool branch_taken_0x2b2fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2FC0u;
        // 0x2b2fc4: 0x24030073  addiu       $v1, $zero, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2fc0) {
            ctx->pc = 0x2B2FCCu;
            goto label_2b2fcc;
        }
    }
    ctx->pc = 0x2B2FC8u;
label_2b2fc8:
    // 0x2b2fc8: 0x2403006a  addiu       $v1, $zero, 0x6A
    ctx->pc = 0x2b2fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
label_2b2fcc:
    // 0x2b2fcc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b2fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2b2fd0:
    // 0x2b2fd0: 0xa043afb8  sb          $v1, -0x5048($v0)
    ctx->pc = 0x2b2fd0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294946744), (uint8_t)GPR_U32(ctx, 3));
label_2b2fd4:
    // 0x2b2fd4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_2b2fd8:
    if (ctx->pc == 0x2B2FD8u) {
        ctx->pc = 0x2B2FDCu;
        goto label_2b2fdc;
    }
    ctx->pc = 0x2B2FD4u;
    {
        const bool branch_taken_0x2b2fd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2fd4) {
            ctx->pc = 0x2B2FE4u;
            goto label_2b2fe4;
        }
    }
    ctx->pc = 0x2B2FDCu;
label_2b2fdc:
    // 0x2b2fdc: 0xc0a21d0  jal         func_288740
label_2b2fe0:
    if (ctx->pc == 0x2B2FE0u) {
        ctx->pc = 0x2B2FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2FDCu;
        // 0x2b2fe0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2FE4u;
        goto label_2b2fe4;
    }
    ctx->pc = 0x2B2FDCu;
    SET_GPR_U32(ctx, 31, 0x2B2FE4u);
    ctx->pc = 0x2B2FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2FDCu;
    // 0x2b2fe0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288740u, 0x2B2FDCu, 0x2B2FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2FE4u;
label_2b2fe4:
    // 0x2b2fe4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2b2fe8:
    if (ctx->pc == 0x2B2FE8u) {
        ctx->pc = 0x2B2FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2FE4u;
        // 0x2b2fe8: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2FECu;
        goto label_2b2fec;
    }
    ctx->pc = 0x2B2FE4u;
    {
        const bool branch_taken_0x2b2fe4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2FE4u;
        // 0x2b2fe8: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2fe4) {
            ctx->pc = 0x2B3028u;
            goto label_2b3028;
        }
    }
    ctx->pc = 0x2B2FECu;
label_2b2fec:
    // 0x2b2fec: 0x24504ed8  addiu       $s0, $v0, 0x4ED8
    ctx->pc = 0x2b2fecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 20184));
label_2b2ff0:
    // 0x2b2ff0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2b2ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2b2ff4:
    // 0x2b2ff4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2b2ff8:
    if (ctx->pc == 0x2B2FF8u) {
        ctx->pc = 0x2B2FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2FF4u;
        // 0x2b2ff8: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2FFCu;
        goto label_2b2ffc;
    }
    ctx->pc = 0x2B2FF4u;
    {
        const bool branch_taken_0x2b2ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2FF4u;
        // 0x2b2ff8: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2ff4) {
            ctx->pc = 0x2B3014u;
            goto label_2b3014;
        }
    }
    ctx->pc = 0x2B2FFCu;
label_2b2ffc:
    // 0x2b2ffc: 0xc0ae9f6  jal         func_2BA7D8
label_2b3000:
    if (ctx->pc == 0x2B3000u) {
        ctx->pc = 0x2B3004u;
        goto label_2b3004;
    }
    ctx->pc = 0x2B2FFCu;
    SET_GPR_U32(ctx, 31, 0x2B3004u);
    ctx->pc = 0x2BA7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA7D8u, 0x2B2FFCu, 0x2B3004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3004u;
label_2b3004:
    // 0x2b3004: 0xc0ae94a  jal         func_2BA528
label_2b3008:
    if (ctx->pc == 0x2B3008u) {
        ctx->pc = 0x2B3008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3004u;
        // 0x2b3008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B300Cu;
        goto label_2b300c;
    }
    ctx->pc = 0x2B3004u;
    SET_GPR_U32(ctx, 31, 0x2B300Cu);
    ctx->pc = 0x2B3008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3004u;
    // 0x2b3008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA528u, 0x2B3004u, 0x2B300Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B300Cu;
label_2b300c:
    // 0x2b300c: 0xc0aeac2  jal         func_2BAB08
label_2b3010:
    if (ctx->pc == 0x2B3010u) {
        ctx->pc = 0x2B3010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B300Cu;
        // 0x2b3010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3014u;
        goto label_2b3014;
    }
    ctx->pc = 0x2B300Cu;
    SET_GPR_U32(ctx, 31, 0x2B3014u);
    ctx->pc = 0x2B3010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B300Cu;
    // 0x2b3010: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAB08u, 0x2B300Cu, 0x2B3014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3014u;
label_2b3014:
    // 0x2b3014: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2b3014u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_2b3018:
    // 0x2b3018: 0xc0aea7c  jal         func_2BA9F0
label_2b301c:
    if (ctx->pc == 0x2B301Cu) {
        ctx->pc = 0x2B301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3018u;
        // 0x2b301c: 0x24844ec0  addiu       $a0, $a0, 0x4EC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3020u;
        goto label_2b3020;
    }
    ctx->pc = 0x2B3018u;
    SET_GPR_U32(ctx, 31, 0x2B3020u);
    ctx->pc = 0x2B301Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3018u;
    // 0x2b301c: 0x24844ec0  addiu       $a0, $a0, 0x4EC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BA9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BA9F0u, 0x2B3018u, 0x2B3020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3020u;
label_2b3020:
    // 0x2b3020: 0x10000009  b           . + 4 + (0x9 << 2)
label_2b3024:
    if (ctx->pc == 0x2B3024u) {
        ctx->pc = 0x2B3024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3020u;
        // 0x2b3024: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3028u;
        goto label_2b3028;
    }
    ctx->pc = 0x2B3020u;
    {
        const bool branch_taken_0x2b3020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3020u;
        // 0x2b3024: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3020) {
            ctx->pc = 0x2B3048u;
            goto label_2b3048;
        }
    }
    ctx->pc = 0x2B3028u;
label_2b3028:
    // 0x2b3028: 0x8e42cba8  lw          $v0, -0x3458($s2)
    ctx->pc = 0x2b3028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294953896)));
label_2b302c:
    // 0x2b302c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2b302cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2b3030:
    // 0x2b3030: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2b3030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b3034:
    // 0x2b3034: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2b3034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2b3038:
    // 0x2b3038: 0x40f809  jalr        $v0
label_2b303c:
    if (ctx->pc == 0x2B303Cu) {
        ctx->pc = 0x2B3040u;
        goto label_2b3040;
    }
    ctx->pc = 0x2B3038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B3040u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3038u, 0x2B3040u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B3040u;
label_2b3040:
    // 0x2b3040: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b3040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b3044:
    // 0x2b3044: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b3044u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b3048:
    // 0x2b3048: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b3048u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2b304c:
    // 0x2b304c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b304cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b3050:
    // 0x2b3050: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2b3050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2b3054:
    // 0x2b3054: 0x3e00008  jr          $ra
label_2b3058:
    if (ctx->pc == 0x2B3058u) {
        ctx->pc = 0x2B3058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3054u;
        // 0x2b3058: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B305Cu;
        goto label_2b305c;
    }
    ctx->pc = 0x2B3054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3054u;
        // 0x2b3058: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B305Cu;
label_2b305c:
    // 0x2b305c: 0x0  nop
    ctx->pc = 0x2b305cu;
    // NOP
label_2b3060:
    // 0x2b3060: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b3060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2b3064:
    // 0x2b3064: 0x0  nop
    ctx->pc = 0x2b3064u;
    // NOP
    ctx->pc = 0x2b3068u;
}
