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

// Function: sub_00325B60
// Address: 0x325b60 - 0x325d48
void sub_00325B60_0x325b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325B60_0x325b60");
#endif

    switch (ctx->pc) {
        case 0x325bb4u: goto label_325bb4;
        case 0x325bd8u: goto label_325bd8;
        case 0x325becu: goto label_325bec;
        case 0x325bf4u: goto label_325bf4;
        case 0x325c10u: goto label_325c10;
        case 0x325c6cu: goto label_325c6c;
        case 0x325c74u: goto label_325c74;
        case 0x325cd8u: goto label_325cd8;
        case 0x325cf0u: goto label_325cf0;
        case 0x325d10u: goto label_325d10;
        case 0x325d1cu: goto label_325d1c;
        default: break;
    }

    ctx->pc = 0x325b60u;

    // 0x325b60: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x325b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x325b64: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x325b64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x325b68: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x325b68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD70u));
    // 0x325b6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x325b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x325b70: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x325b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x325b74: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x325b74u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x325b78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x325b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x325b7c: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x325b7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325b80: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x325b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x325b84: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x325b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x325b88: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x325B88u;
    {
        const bool branch_taken_0x325b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x325B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325B88u;
        // 0x325b8c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325b88) {
            ctx->pc = 0x325B9Cu;
            goto label_325b9c;
        }
    }
    ctx->pc = 0x325B90u;
    // 0x325b90: 0x8e22be30  lw          $v0, -0x41D0($s1)
    ctx->pc = 0x325b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950448)));
    // 0x325b94: 0x14400064  bnez        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x325B94u;
    {
        const bool branch_taken_0x325b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x325B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325B94u;
        // 0x325b98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325b94) {
            ctx->pc = 0x325D28u;
            goto label_325d28;
        }
    }
    ctx->pc = 0x325B9Cu;
label_325b9c:
    // 0x325b9c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x325b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x325ba0: 0x9062b821  lbu         $v0, -0x47DF($v1)
    ctx->pc = 0x325ba0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3FB821u));
    // 0x325ba4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x325BA4u;
    {
        const bool branch_taken_0x325ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x325ba4) {
            ctx->pc = 0x325BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x325BA4u;
            // 0x325ba8: 0xa060b821  sb          $zero, -0x47DF($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 4294948897), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x325BACu;
            goto label_325bac;
        }
    }
    ctx->pc = 0x325BACu;
label_325bac:
    // 0x325bac: 0xc0b6a64  jal         func_2DA990
    ctx->pc = 0x325BACu;
    SET_GPR_U32(ctx, 31, 0x325BB4u);
    ctx->pc = 0x2DA990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA990u, 0x325BACu, 0x325BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325BB4u;
label_325bb4:
    // 0x325bb4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x325bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x325bb8: 0x2442b0e0  addiu       $v0, $v0, -0x4F20
    ctx->pc = 0x325bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947040));
    // 0x325bbc: 0x8c436394  lw          $v1, 0x6394($v0)
    ctx->pc = 0x325bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x581474u));
    // 0x325bc0: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x325BC0u;
    {
        const bool branch_taken_0x325bc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x325bc0) {
            ctx->pc = 0x325BC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x325BC0u;
            // 0x325bc4: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x325BDCu;
            goto label_325bdc;
        }
    }
    ctx->pc = 0x325BC8u;
    // 0x325bc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x325bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325bcc: 0xac406394  sw          $zero, 0x6394($v0)
    ctx->pc = 0x325bccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25492), GPR_U32(ctx, 0));
    // 0x325bd0: 0xc0b7082  jal         func_2DC208
    ctx->pc = 0x325BD0u;
    SET_GPR_U32(ctx, 31, 0x325BD8u);
    ctx->pc = 0x325BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325BD0u;
    // 0x325bd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC208u, 0x325BD0u, 0x325BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325BD8u;
label_325bd8:
    // 0x325bd8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x325bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_325bdc:
    // 0x325bdc: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x325bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x325be0: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x325be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    // 0x325be4: 0xc049538  jal         func_1254E0
    ctx->pc = 0x325BE4u;
    SET_GPR_U32(ctx, 31, 0x325BECu);
    ctx->pc = 0x325BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325BE4u;
    // 0x325be8: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1254E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1254E0u, 0x325BE4u, 0x325BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325BECu;
label_325bec:
    // 0x325bec: 0xc0c0954  jal         func_302550
    ctx->pc = 0x325BECu;
    SET_GPR_U32(ctx, 31, 0x325BF4u);
    ctx->pc = 0x325BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325BECu;
    // 0x325bf0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302550u, 0x325BECu, 0x325BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325BF4u;
label_325bf4:
    // 0x325bf4: 0x8e04bd50  lw          $a0, -0x42B0($s0)
    ctx->pc = 0x325bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950224)));
    // 0x325bf8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x325bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x325bfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x325bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x325c00: 0x2484117c  addiu       $a0, $a0, 0x117C
    ctx->pc = 0x325c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4476));
    // 0x325c04: 0x9082001c  lbu         $v0, 0x1C($a0)
    ctx->pc = 0x325c04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x325c08: 0xc0b906c  jal         func_2E41B0
    ctx->pc = 0x325C08u;
    SET_GPR_U32(ctx, 31, 0x325C10u);
    ctx->pc = 0x325C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325C08u;
    // 0x325c0c: 0xa062be9d  sb          $v0, -0x4163($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294950557), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E41B0u, 0x325C08u, 0x325C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325C10u;
label_325c10:
    // 0x325c10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x325c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x325c14: 0x8e10bd50  lw          $s0, -0x42B0($s0)
    ctx->pc = 0x325c14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950224)));
    // 0x325c18: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x325C18u;
    {
        const bool branch_taken_0x325c18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x325C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325C18u;
        // 0x325c1c: 0xae22be30  sw          $v0, -0x41D0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294950448), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325c18) {
            ctx->pc = 0x325C74u;
            goto label_325c74;
        }
    }
    ctx->pc = 0x325C20u;
    // 0x325c20: 0x8e62bd70  lw          $v0, -0x4290($s3)
    ctx->pc = 0x325c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950256)));
    // 0x325c24: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x325c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x325c28: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x325C28u;
    {
        const bool branch_taken_0x325c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x325C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325C28u;
        // 0x325c2c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325c28) {
            ctx->pc = 0x325C78u;
            goto label_325c78;
        }
    }
    ctx->pc = 0x325C30u;
    // 0x325c30: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x325c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
    // 0x325c34: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x325c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x325c38: 0xae0211c0  sw          $v0, 0x11C0($s0)
    ctx->pc = 0x325c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 2));
    // 0x325c3c: 0x8e43bd50  lw          $v1, -0x42B0($s2)
    ctx->pc = 0x325c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950224)));
    // 0x325c40: 0x8c640334  lw          $a0, 0x334($v1)
    ctx->pc = 0x325c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 820)));
    // 0x325c44: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x325c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x325c48: 0x2462ffcf  addiu       $v0, $v1, -0x31
    ctx->pc = 0x325c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967247));
    // 0x325c4c: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x325c4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x325c50: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x325C50u;
    {
        const bool branch_taken_0x325c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x325C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325C50u;
        // 0x325c54: 0x2462ffb4  addiu       $v0, $v1, -0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325c50) {
            ctx->pc = 0x325C6Cu;
            goto label_325c6c;
        }
    }
    ctx->pc = 0x325C58u;
    // 0x325c58: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x325c58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x325c5c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x325C5Cu;
    {
        const bool branch_taken_0x325c5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x325c5c) {
            ctx->pc = 0x325C6Cu;
            goto label_325c6c;
        }
    }
    ctx->pc = 0x325C64u;
    // 0x325c64: 0xc0bc9d2  jal         func_2F2748
    ctx->pc = 0x325C64u;
    SET_GPR_U32(ctx, 31, 0x325C6Cu);
    ctx->pc = 0x325C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325C64u;
    // 0x325c68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2748u, 0x325C64u, 0x325C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325C6Cu;
label_325c6c:
    // 0x325c6c: 0xc0bb688  jal         func_2EDA20
    ctx->pc = 0x325C6Cu;
    SET_GPR_U32(ctx, 31, 0x325C74u);
    ctx->pc = 0x325C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325C6Cu;
    // 0x325c70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDA20u, 0x325C6Cu, 0x325C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325C74u;
label_325c74:
    // 0x325c74: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x325c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_325c78:
    // 0x325c78: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x325c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x325c7c: 0xc4402c48  lwc1        $f0, 0x2C48($v0)
    ctx->pc = 0x325c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x325c80: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x325c80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x325c84: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x325c84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x325c88: 0x3c05005b  lui         $a1, 0x5B
    ctx->pc = 0x325c88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)91 << 16));
    // 0x325c8c: 0xe460be64  swc1        $f0, -0x419C($v1)
    ctx->pc = 0x325c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3FBE64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBE64u, _value); } while (0); }
    // 0x325c90: 0x24a86de0  addiu       $t0, $a1, 0x6DE0
    ctx->pc = 0x325c90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 28128));
    // 0x325c94: 0xe4c0be70  swc1        $f0, -0x4190($a2)
    ctx->pc = 0x325c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3FBE70u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBE70u, _value); } while (0); }
    // 0x325c98: 0x8ce4bd48  lw          $a0, -0x42B8($a3)
    ctx->pc = 0x325c98u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x325c9c: 0x8c820100  lw          $v0, 0x100($a0)
    ctx->pc = 0x325c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x325ca0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x325ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x325ca4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x325ca4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x325ca8: 0xf8a16de0  sqc2        $vf1, 0x6DE0($a1)
    ctx->pc = 0x325ca8u;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[1])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x5B6DE0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x5B6DE0u, _value); } while (0);
    // 0x325cac: 0x8c830100  lw          $v1, 0x100($a0)
    ctx->pc = 0x325cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x325cb0: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x325cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x325cb4: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x325cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x325cb8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x325cb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x325cbc: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x325cbcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(FAST_READ128(0x5B6DE0u));
    // 0x325cc0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x325cc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x325cc4: 0xf8416dd0  sqc2        $vf1, 0x6DD0($v0)
    ctx->pc = 0x325cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 28112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x325cc8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x325cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x325ccc: 0x8e44bd50  lw          $a0, -0x42B0($s2)
    ctx->pc = 0x325cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294950224)));
    // 0x325cd0: 0xc0bb6c2  jal         func_2EDB08
    ctx->pc = 0x325CD0u;
    SET_GPR_U32(ctx, 31, 0x325CD8u);
    ctx->pc = 0x325CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325CD0u;
    // 0x325cd4: 0xac40aa88  sw          $zero, -0x5578($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945416), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB08u, 0x325CD0u, 0x325CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325CD8u;
label_325cd8:
    // 0x325cd8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x325cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x325cdc: 0x9043be9e  lbu         $v1, -0x4162($v0)
    ctx->pc = 0x325cdcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FBE9Eu));
    // 0x325ce0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x325CE0u;
    {
        const bool branch_taken_0x325ce0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x325CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325CE0u;
        // 0x325ce4: 0x8e62bd70  lw          $v0, -0x4290($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325ce0) {
            ctx->pc = 0x325CF8u;
            goto label_325cf8;
        }
    }
    ctx->pc = 0x325CE8u;
    // 0x325ce8: 0xc0a4758  jal         func_291D60
    ctx->pc = 0x325CE8u;
    SET_GPR_U32(ctx, 31, 0x325CF0u);
    ctx->pc = 0x291D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D60u, 0x325CE8u, 0x325CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325CF0u;
label_325cf0:
    // 0x325cf0: 0xa0400061  sb          $zero, 0x61($v0)
    ctx->pc = 0x325cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 97), (uint8_t)GPR_U32(ctx, 0));
    // 0x325cf4: 0x8e62bd70  lw          $v0, -0x4290($s3)
    ctx->pc = 0x325cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294950256)));
label_325cf8:
    // 0x325cf8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x325cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x325cfc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x325CFCu;
    {
        const bool branch_taken_0x325cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x325cfc) {
            ctx->pc = 0x325D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x325CFCu;
            // 0x325d00: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x325D14u;
            goto label_325d14;
        }
    }
    ctx->pc = 0x325D04u;
    // 0x325d04: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x325d04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x325d08: 0xc08038a  jal         func_200E28
    ctx->pc = 0x325D08u;
    SET_GPR_U32(ctx, 31, 0x325D10u);
    ctx->pc = 0x325D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325D08u;
    // 0x325d0c: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200E28u, 0x325D08u, 0x325D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325D10u;
label_325d10:
    // 0x325d10: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x325d10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_325d14:
    // 0x325d14: 0xc07f5ec  jal         func_1FD7B0
    ctx->pc = 0x325D14u;
    SET_GPR_U32(ctx, 31, 0x325D1Cu);
    ctx->pc = 0x325D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325D14u;
    // 0x325d18: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD7B0u, 0x325D14u, 0x325D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325D1Cu;
label_325d1c:
    // 0x325d1c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x325d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x325d20: 0xa062be9c  sb          $v0, -0x4164($v1)
    ctx->pc = 0x325d20u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FBE9Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FBE9Cu, _value); } while (0);
    // 0x325d24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x325d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_325d28:
    // 0x325d28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x325d28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x325d2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x325d2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x325d30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x325d30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x325d34: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x325d34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x325d38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x325d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x325d3c: 0x3e00008  jr          $ra
    ctx->pc = 0x325D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325D3Cu;
        // 0x325d40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325D44u;
    // 0x325d44: 0x0  nop
    ctx->pc = 0x325d44u;
    // NOP
    ctx->pc = 0x325d48u;
}
