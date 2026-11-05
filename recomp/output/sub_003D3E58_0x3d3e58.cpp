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

// Function: sub_003D3E58
// Address: 0x3d3e58 - 0x3d4100
void sub_003D3E58_0x3d3e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D3E58_0x3d3e58");
#endif

    switch (ctx->pc) {
        case 0x3d3e94u: goto label_3d3e94;
        case 0x3d3ea4u: goto label_3d3ea4;
        case 0x3d3f70u: goto label_3d3f70;
        case 0x3d3f80u: goto label_3d3f80;
        case 0x3d3f90u: goto label_3d3f90;
        case 0x3d3fa0u: goto label_3d3fa0;
        case 0x3d4018u: goto label_3d4018;
        case 0x3d4070u: goto label_3d4070;
        case 0x3d40d4u: goto label_3d40d4;
        default: break;
    }

    ctx->pc = 0x3d3e58u;

    // 0x3d3e58: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x3d3e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x3d3e5c: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x3d3e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x3d3e60: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x3d3e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x3d3e64: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3d3e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3d3e68: 0xffb700e0  sd          $s7, 0xE0($sp)
    ctx->pc = 0x3d3e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 23));
    // 0x3d3e6c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3d3e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3e70: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x3d3e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x3d3e74: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x3d3e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x3d3e78: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x3d3e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x3d3e7c: 0xffb500c0  sd          $s5, 0xC0($sp)
    ctx->pc = 0x3d3e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
    // 0x3d3e80: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x3d3e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x3d3e84: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x3d3e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x3d3e88: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x3d3e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x3d3e8c: 0xc0f4eae  jal         func_3D3AB8
    ctx->pc = 0x3D3E8Cu;
    SET_GPR_U32(ctx, 31, 0x3D3E94u);
    ctx->pc = 0x3D3E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3E8Cu;
    // 0x3d3e90: 0xffb10080  sd          $s1, 0x80($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3AB8u, 0x3D3E8Cu, 0x3D3E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3E94u;
label_3d3e94:
    // 0x3d3e94: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x3d3e94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3d3e98: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x3d3e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x3d3e9c: 0xc0f4eae  jal         func_3D3AB8
    ctx->pc = 0x3D3E9Cu;
    SET_GPR_U32(ctx, 31, 0x3D3EA4u);
    ctx->pc = 0x3D3EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3E9Cu;
    // 0x3d3ea0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D3AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3AB8u, 0x3D3E9Cu, 0x3D3EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3EA4u;
label_3d3ea4:
    // 0x3d3ea4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3d3ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d3ea8: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x3d3ea8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3d3eac: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3D3EACu;
    {
        const bool branch_taken_0x3d3eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3EACu;
        // 0x3d3eb0: 0x27b70040  addiu       $s7, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3eac) {
            ctx->pc = 0x3D3F08u;
            goto label_3d3f08;
        }
    }
    ctx->pc = 0x3D3EB4u;
    // 0x3d3eb4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x3d3eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d3eb8: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x3d3eb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3d3ebc: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x3D3EBCu;
    {
        const bool branch_taken_0x3d3ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d3ebc) {
            ctx->pc = 0x3D3EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D3EBCu;
            // 0x3d3ec0: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D3F30u;
            goto label_3d3f30;
        }
    }
    ctx->pc = 0x3D3EC4u;
    // 0x3d3ec4: 0x38820004  xori        $v0, $a0, 0x4
    ctx->pc = 0x3d3ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
    // 0x3d3ec8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D3EC8u;
    {
        const bool branch_taken_0x3d3ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3EC8u;
        // 0x3d3ecc: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3ec8) {
            ctx->pc = 0x3D3EE4u;
            goto label_3d3ee4;
        }
    }
    ctx->pc = 0x3D3ED0u;
    // 0x3d3ed0: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x3d3ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x3d3ed4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3D3ED4u;
    {
        const bool branch_taken_0x3d3ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3ED4u;
        // 0x3d3ed8: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3ed4) {
            ctx->pc = 0x3D3EF4u;
            goto label_3d3ef4;
        }
    }
    ctx->pc = 0x3D3EDCu;
    // 0x3d3edc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3D3EDCu;
    {
        const bool branch_taken_0x3d3edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3EDCu;
        // 0x3d3ee0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3edc) {
            ctx->pc = 0x3D3F10u;
            goto label_3d3f10;
        }
    }
    ctx->pc = 0x3D3EE4u;
label_3d3ee4:
    // 0x3d3ee4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D3EE4u;
    {
        const bool branch_taken_0x3d3ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3EE4u;
        // 0x3d3ee8: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3ee4) {
            ctx->pc = 0x3D3F00u;
            goto label_3d3f00;
        }
    }
    ctx->pc = 0x3D3EECu;
    // 0x3d3eec: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3D3EECu;
    {
        const bool branch_taken_0x3d3eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3EECu;
        // 0x3d3ef0: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3eec) {
            ctx->pc = 0x3D3F30u;
            goto label_3d3f30;
        }
    }
    ctx->pc = 0x3D3EF4u;
label_3d3ef4:
    // 0x3d3ef4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x3d3ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x3d3ef8: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x3D3EF8u;
    {
        const bool branch_taken_0x3d3ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3EF8u;
        // 0x3d3efc: 0x24448e30  addiu       $a0, $v0, -0x71D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3ef8) {
            ctx->pc = 0x3D40CCu;
            goto label_3d40cc;
        }
    }
    ctx->pc = 0x3D3F00u;
label_3d3f00:
    // 0x3d3f00: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D3F00u;
    {
        const bool branch_taken_0x3d3f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3F00u;
        // 0x3d3f04: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3f00) {
            ctx->pc = 0x3D3F24u;
            goto label_3d3f24;
        }
    }
    ctx->pc = 0x3D3F08u;
label_3d3f08:
    // 0x3d3f08: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3d3f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3d3f0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d3f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3d3f10:
    // 0x3d3f10: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x3d3f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x3d3f14: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x3d3f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x3d3f18: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3d3f18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3d3f1c: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x3D3F1Cu;
    {
        const bool branch_taken_0x3d3f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3F1Cu;
        // 0x3d3f20: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3f1c) {
            ctx->pc = 0x3D40CCu;
            goto label_3d40cc;
        }
    }
    ctx->pc = 0x3D3F24u;
label_3d3f24:
    // 0x3d3f24: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D3F24u;
    {
        const bool branch_taken_0x3d3f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D3F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3F24u;
        // 0x3d3f28: 0xdfb30010  ld          $s3, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3f24) {
            ctx->pc = 0x3D3F48u;
            goto label_3d3f48;
        }
    }
    ctx->pc = 0x3D3F2Cu;
    // 0x3d3f2c: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x3d3f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_3d3f30:
    // 0x3d3f30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d3f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3f34: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3d3f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3d3f38: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x3d3f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x3d3f3c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3d3f3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3d3f40: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x3D3F40u;
    {
        const bool branch_taken_0x3d3f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D3F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3F40u;
        // 0x3d3f44: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3f40) {
            ctx->pc = 0x3D40CCu;
            goto label_3d40cc;
        }
    }
    ctx->pc = 0x3D3F48u;
label_3d3f48:
    // 0x3d3f48: 0x3c16ffff  lui         $s6, 0xFFFF
    ctx->pc = 0x3d3f48u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65535 << 16));
    // 0x3d3f4c: 0x16b03e  dsrl32      $s6, $s6, 0
    ctx->pc = 0x3d3f4cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> (32 + 0));
    // 0x3d3f50: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3d3f50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d3f54: 0x2768024  and         $s0, $s3, $s6
    ctx->pc = 0x3d3f54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & GPR_U64(ctx, 22));
    // 0x3d3f58: 0x256a824  and         $s5, $s2, $s6
    ctx->pc = 0x3d3f58u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 18) & GPR_U64(ctx, 22));
    // 0x3d3f5c: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x3d3f5cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x3d3f60: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x3d3f60u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x3d3f64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d3f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3f68: 0xc0f4b84  jal         func_3D2E10
    ctx->pc = 0x3D3F68u;
    SET_GPR_U32(ctx, 31, 0x3D3F70u);
    ctx->pc = 0x3D3F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3F68u;
    // 0x3d3f6c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D2E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2E10u, 0x3D3F68u, 0x3D3F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3F70u;
label_3d3f70:
    // 0x3d3f70: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3d3f70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3f74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d3f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3f78: 0xc0f4b84  jal         func_3D2E10
    ctx->pc = 0x3D3F78u;
    SET_GPR_U32(ctx, 31, 0x3D3F80u);
    ctx->pc = 0x3D3F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3F78u;
    // 0x3d3f7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D2E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2E10u, 0x3D3F78u, 0x3D3F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3F80u;
label_3d3f80:
    // 0x3d3f80: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3d3f80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3f84: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3d3f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3f88: 0xc0f4b84  jal         func_3D2E10
    ctx->pc = 0x3D3F88u;
    SET_GPR_U32(ctx, 31, 0x3D3F90u);
    ctx->pc = 0x3D3F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3F88u;
    // 0x3d3f8c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D2E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2E10u, 0x3D3F88u, 0x3D3F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3F90u;
label_3d3f90:
    // 0x3d3f90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d3f90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3f94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d3f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d3f98: 0xc0f4b84  jal         func_3D2E10
    ctx->pc = 0x3D3F98u;
    SET_GPR_U32(ctx, 31, 0x3D3FA0u);
    ctx->pc = 0x3D3F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D3F98u;
    // 0x3d3f9c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D2E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2E10u, 0x3D3F98u, 0x3D3FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D3FA0u;
label_3d3fa0:
    // 0x3d3fa0: 0x230802d  daddu       $s0, $s1, $s0
    ctx->pc = 0x3d3fa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x3d3fa4: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x3d3fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3d3fa8: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x3d3fa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3d3fac: 0x211882b  sltu        $s1, $s0, $s1
    ctx->pc = 0x3d3facu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3d3fb0: 0x284202d  daddu       $a0, $s4, $a0
    ctx->pc = 0x3d3fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 4));
    // 0x3d3fb4: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x3d3fb4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x3d3fb8: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x3d3fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3d3fbc: 0x2168024  and         $s0, $s0, $s6
    ctx->pc = 0x3d3fbcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 22));
    // 0x3d3fc0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3d3fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3d3fc4: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x3d3fc4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3d3fc8: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x3d3fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x3d3fcc: 0x94a02b  sltu        $s4, $a0, $s4
    ctx->pc = 0x3d3fccu;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x3d3fd0: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x3d3fd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x3d3fd4: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x3d3fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x3d3fd8: 0x661826  xor         $v1, $v1, $a2
    ctx->pc = 0x3d3fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
    // 0x3d3fdc: 0x2348825  or          $s1, $s1, $s4
    ctx->pc = 0x3d3fdcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 20));
    // 0x3d3fe0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3d3fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x3d3fe4: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x3d3fe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x3d3fe8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x3d3fe8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3d3fec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3d3fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3d3ff0: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x3d3ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x3d3ff4: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x3d3ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x3d3ff8: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x3d3ff8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3d3ffc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3D3FFCu;
    {
        const bool branch_taken_0x3d3ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D3FFCu;
        // 0x3d4000: 0xafa50048  sw          $a1, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d3ffc) {
            ctx->pc = 0x3D4044u;
            goto label_3d4044;
        }
    }
    ctx->pc = 0x3D4004u;
    // 0x3d4004: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x3d4004u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3d4008: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x3d4008u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x3d400c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3d400cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3d4010: 0x318fa  dsrl        $v1, $v1, 3
    ctx->pc = 0x3d4010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 3);
    // 0x3d4014: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x3d4014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_3d4018:
    // 0x3d4018: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3d4018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3d401c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3d401cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3d4020: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D4020u;
    {
        const bool branch_taken_0x3d4020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4020u;
        // 0x3d4024: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4020) {
            ctx->pc = 0x3D4030u;
            goto label_3d4030;
        }
    }
    ctx->pc = 0x3D4028u;
    // 0x3d4028: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x3d4028u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x3d402c: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x3d402cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_3d4030:
    // 0x3d4030: 0x11887a  dsrl        $s1, $s1, 1
    ctx->pc = 0x3d4030u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> 1);
    // 0x3d4034: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x3d4034u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3d4038: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3D4038u;
    {
        const bool branch_taken_0x3d4038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D403Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4038u;
        // 0x3d403c: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4038) {
            ctx->pc = 0x3D4018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d4018;
        }
    }
    ctx->pc = 0x3D4040u;
    // 0x3d4040: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x3d4040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
label_3d4044:
    // 0x3d4044: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3d4044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3d4048: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x3d4048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x3d404c: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x3d404cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3d4050: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3D4050u;
    {
        const bool branch_taken_0x3d4050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D4054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4050u;
        // 0x3d4054: 0x322300ff  andi        $v1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4050) {
            ctx->pc = 0x3D4098u;
            goto label_3d4098;
        }
    }
    ctx->pc = 0x3D4058u;
    // 0x3d4058: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x3d4058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3d405c: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x3d405cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3d4060: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x3d4060u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x3d4064: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3d4064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d4068: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x3d4068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3d406c: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x3d406cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
label_3d4070:
    // 0x3d4070: 0x118878  dsll        $s1, $s1, 1
    ctx->pc = 0x3d4070u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 1);
    // 0x3d4074: 0x881824  and         $v1, $a0, $t0
    ctx->pc = 0x3d4074u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x3d4078: 0x2271025  or          $v0, $s1, $a3
    ctx->pc = 0x3d4078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 7));
    // 0x3d407c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3d407cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3d4080: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x3d4080u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x3d4084: 0xd1102b  sltu        $v0, $a2, $s1
    ctx->pc = 0x3d4084u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3d4088: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3D4088u;
    {
        const bool branch_taken_0x3d4088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4088u;
        // 0x3d408c: 0x42078  dsll        $a0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4088) {
            ctx->pc = 0x3D4070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d4070;
        }
    }
    ctx->pc = 0x3D4090u;
    // 0x3d4090: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x3d4090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x3d4094: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x3d4094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_3d4098:
    // 0x3d4098: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x3d4098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3d409c: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D409Cu;
    {
        const bool branch_taken_0x3d409c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3d409c) {
            ctx->pc = 0x3D40A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D409Cu;
            // 0x3d40a0: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D40C0u;
            goto label_3d40c0;
        }
    }
    ctx->pc = 0x3D40A4u;
    // 0x3d40a4: 0x32220100  andi        $v0, $s1, 0x100
    ctx->pc = 0x3d40a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)256);
    // 0x3d40a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D40A8u;
    {
        const bool branch_taken_0x3d40a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D40ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D40A8u;
        // 0x3d40ac: 0x66220080  daddiu      $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d40a8) {
            ctx->pc = 0x3D40B8u;
            goto label_3d40b8;
        }
    }
    ctx->pc = 0x3D40B0u;
    // 0x3d40b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3D40B0u;
    {
        const bool branch_taken_0x3d40b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D40B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D40B0u;
        // 0x3d40b4: 0x66310080  daddiu      $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d40b0) {
            ctx->pc = 0x3D40BCu;
            goto label_3d40bc;
        }
    }
    ctx->pc = 0x3D40B8u;
label_3d40b8:
    // 0x3d40b8: 0x44880b  movn        $s1, $v0, $a0
    ctx->pc = 0x3d40b8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_3d40bc:
    // 0x3d40bc: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x3d40bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_3d40c0:
    // 0x3d40c0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3d40c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3d40c4: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x3d40c4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x3d40c8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3d40c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3d40cc:
    // 0x3d40cc: 0xc0f4e62  jal         func_3D3988
    ctx->pc = 0x3D40CCu;
    SET_GPR_U32(ctx, 31, 0x3D40D4u);
    ctx->pc = 0x3D3988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D3988u, 0x3D40CCu, 0x3D40D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D40D4u;
label_3d40d4:
    // 0x3d40d4: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x3d40d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3d40d8: 0xdfb700e0  ld          $s7, 0xE0($sp)
    ctx->pc = 0x3d40d8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3d40dc: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x3d40dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3d40e0: 0xdfb500c0  ld          $s5, 0xC0($sp)
    ctx->pc = 0x3d40e0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3d40e4: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x3d40e4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3d40e8: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x3d40e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3d40ec: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x3d40ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3d40f0: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x3d40f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3d40f4: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x3d40f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3d40f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D40F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D40FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D40F8u;
        // 0x3d40fc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D40F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4100u;
}
