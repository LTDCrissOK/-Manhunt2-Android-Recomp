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

// Function: sub_001A4E30
// Address: 0x1a4e30 - 0x1a4f18
void sub_001A4E30_0x1a4e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4E30_0x1a4e30");
#endif

    switch (ctx->pc) {
        case 0x1a4e30u: goto label_1a4e30;
        case 0x1a4e34u: goto label_1a4e34;
        case 0x1a4e38u: goto label_1a4e38;
        case 0x1a4e3cu: goto label_1a4e3c;
        case 0x1a4e40u: goto label_1a4e40;
        case 0x1a4e44u: goto label_1a4e44;
        case 0x1a4e48u: goto label_1a4e48;
        case 0x1a4e4cu: goto label_1a4e4c;
        case 0x1a4e50u: goto label_1a4e50;
        case 0x1a4e54u: goto label_1a4e54;
        case 0x1a4e58u: goto label_1a4e58;
        case 0x1a4e5cu: goto label_1a4e5c;
        case 0x1a4e60u: goto label_1a4e60;
        case 0x1a4e64u: goto label_1a4e64;
        case 0x1a4e68u: goto label_1a4e68;
        case 0x1a4e6cu: goto label_1a4e6c;
        case 0x1a4e70u: goto label_1a4e70;
        case 0x1a4e74u: goto label_1a4e74;
        case 0x1a4e78u: goto label_1a4e78;
        case 0x1a4e7cu: goto label_1a4e7c;
        case 0x1a4e80u: goto label_1a4e80;
        case 0x1a4e84u: goto label_1a4e84;
        case 0x1a4e88u: goto label_1a4e88;
        case 0x1a4e8cu: goto label_1a4e8c;
        case 0x1a4e90u: goto label_1a4e90;
        case 0x1a4e94u: goto label_1a4e94;
        case 0x1a4e98u: goto label_1a4e98;
        case 0x1a4e9cu: goto label_1a4e9c;
        case 0x1a4ea0u: goto label_1a4ea0;
        case 0x1a4ea4u: goto label_1a4ea4;
        case 0x1a4ea8u: goto label_1a4ea8;
        case 0x1a4eacu: goto label_1a4eac;
        case 0x1a4eb0u: goto label_1a4eb0;
        case 0x1a4eb4u: goto label_1a4eb4;
        case 0x1a4eb8u: goto label_1a4eb8;
        case 0x1a4ebcu: goto label_1a4ebc;
        case 0x1a4ec0u: goto label_1a4ec0;
        case 0x1a4ec4u: goto label_1a4ec4;
        case 0x1a4ec8u: goto label_1a4ec8;
        case 0x1a4eccu: goto label_1a4ecc;
        case 0x1a4ed0u: goto label_1a4ed0;
        case 0x1a4ed4u: goto label_1a4ed4;
        case 0x1a4ed8u: goto label_1a4ed8;
        case 0x1a4edcu: goto label_1a4edc;
        case 0x1a4ee0u: goto label_1a4ee0;
        case 0x1a4ee4u: goto label_1a4ee4;
        case 0x1a4ee8u: goto label_1a4ee8;
        case 0x1a4eecu: goto label_1a4eec;
        case 0x1a4ef0u: goto label_1a4ef0;
        case 0x1a4ef4u: goto label_1a4ef4;
        case 0x1a4ef8u: goto label_1a4ef8;
        case 0x1a4efcu: goto label_1a4efc;
        case 0x1a4f00u: goto label_1a4f00;
        case 0x1a4f04u: goto label_1a4f04;
        case 0x1a4f08u: goto label_1a4f08;
        case 0x1a4f0cu: goto label_1a4f0c;
        case 0x1a4f10u: goto label_1a4f10;
        case 0x1a4f14u: goto label_1a4f14;
        default: break;
    }

    ctx->pc = 0x1a4e30u;

label_1a4e30:
    // 0x1a4e30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a4e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1a4e34:
    // 0x1a4e34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a4e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a4e38:
    // 0x1a4e38: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a4e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1a4e3c:
    // 0x1a4e3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a4e3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a4e40:
    // 0x1a4e40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a4e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a4e44:
    // 0x1a4e44: 0x24110012  addiu       $s1, $zero, 0x12
    ctx->pc = 0x1a4e44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1a4e48:
    // 0x1a4e48: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a4e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a4e4c:
    // 0x1a4e4c: 0x5051002e  beql        $v0, $s1, . + 4 + (0x2E << 2)
label_1a4e50:
    if (ctx->pc == 0x1A4E50u) {
        ctx->pc = 0x1A4E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E4Cu;
        // 0x1a4e50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4E54u;
        goto label_1a4e54;
    }
    ctx->pc = 0x1A4E4Cu;
    {
        const bool branch_taken_0x1a4e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1a4e4c) {
            ctx->pc = 0x1A4E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A4E4Cu;
            // 0x1a4e50: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A4F08u;
            goto label_1a4f08;
        }
    }
    ctx->pc = 0x1A4E54u;
label_1a4e54:
    // 0x1a4e54: 0xc0691d6  jal         func_1A4758
label_1a4e58:
    if (ctx->pc == 0x1A4E58u) {
        ctx->pc = 0x1A4E5Cu;
        goto label_1a4e5c;
    }
    ctx->pc = 0x1A4E54u;
    SET_GPR_U32(ctx, 31, 0x1A4E5Cu);
    ctx->pc = 0x1A4758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4758u, 0x1A4E54u, 0x1A4E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4E5Cu;
label_1a4e5c:
    // 0x1a4e5c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1a4e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a4e60:
    // 0x1a4e60: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1a4e64:
    if (ctx->pc == 0x1A4E64u) {
        ctx->pc = 0x1A4E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E60u;
        // 0x1a4e64: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4E68u;
        goto label_1a4e68;
    }
    ctx->pc = 0x1A4E60u;
    {
        const bool branch_taken_0x1a4e60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E60u;
        // 0x1a4e64: 0xae110010  sw          $s1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4e60) {
            ctx->pc = 0x1A4E78u;
            goto label_1a4e78;
        }
    }
    ctx->pc = 0x1A4E68u;
label_1a4e68:
    // 0x1a4e68: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1a4e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1a4e6c:
    // 0x1a4e6c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1a4e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1a4e70:
    // 0x1a4e70: 0x40f809  jalr        $v0
label_1a4e74:
    if (ctx->pc == 0x1A4E74u) {
        ctx->pc = 0x1A4E78u;
        goto label_1a4e78;
    }
    ctx->pc = 0x1A4E70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4E78u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4E70u, 0x1A4E78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4E78u;
label_1a4e78:
    // 0x1a4e78: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1a4e78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1a4e7c:
    // 0x1a4e7c: 0xc061a12  jal         func_186848
label_1a4e80:
    if (ctx->pc == 0x1A4E80u) {
        ctx->pc = 0x1A4E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E7Cu;
        // 0x1a4e80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4E84u;
        goto label_1a4e84;
    }
    ctx->pc = 0x1A4E7Cu;
    SET_GPR_U32(ctx, 31, 0x1A4E84u);
    ctx->pc = 0x1A4E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4E7Cu;
    // 0x1a4e80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1A4E7Cu, 0x1A4E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4E84u;
label_1a4e84:
    // 0x1a4e84: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x1a4e84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_1a4e88:
    // 0x1a4e88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a4e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a4e8c:
    // 0x1a4e8c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1a4e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1a4e90:
    // 0x1a4e90: 0x40f809  jalr        $v0
label_1a4e94:
    if (ctx->pc == 0x1A4E94u) {
        ctx->pc = 0x1A4E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E90u;
        // 0x1a4e94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4E98u;
        goto label_1a4e98;
    }
    ctx->pc = 0x1A4E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4E98u);
        ctx->pc = 0x1A4E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E90u;
        // 0x1a4e94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4E90u, 0x1A4E98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4E98u;
label_1a4e98:
    // 0x1a4e98: 0xc061a16  jal         func_186858
label_1a4e9c:
    if (ctx->pc == 0x1A4E9Cu) {
        ctx->pc = 0x1A4E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4E98u;
        // 0x1a4e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4EA0u;
        goto label_1a4ea0;
    }
    ctx->pc = 0x1A4E98u;
    SET_GPR_U32(ctx, 31, 0x1A4EA0u);
    ctx->pc = 0x1A4E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4E98u;
    // 0x1a4e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1A4E98u, 0x1A4EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4EA0u;
label_1a4ea0:
    // 0x1a4ea0: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x1a4ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_1a4ea4:
    // 0x1a4ea4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1a4ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_1a4ea8:
    // 0x1a4ea8: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1a4ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_1a4eac:
    // 0x1a4eac: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1a4eb0:
    if (ctx->pc == 0x1A4EB0u) {
        ctx->pc = 0x1A4EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4EACu;
        // 0x1a4eb0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4EB4u;
        goto label_1a4eb4;
    }
    ctx->pc = 0x1A4EACu;
    {
        const bool branch_taken_0x1a4eac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A4EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4EACu;
        // 0x1a4eb0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4eac) {
            ctx->pc = 0x1A4EC8u;
            goto label_1a4ec8;
        }
    }
    ctx->pc = 0x1A4EB4u;
label_1a4eb4:
    // 0x1a4eb4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a4eb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a4eb8:
    // 0x1a4eb8: 0x0  nop
    ctx->pc = 0x1a4eb8u;
    // NOP
label_1a4ebc:
    // 0x1a4ebc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a4ebcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1a4ec0:
    // 0x1a4ec0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a4ec4:
    if (ctx->pc == 0x1A4EC4u) {
        ctx->pc = 0x1A4EC8u;
        goto label_1a4ec8;
    }
    ctx->pc = 0x1A4EC0u;
    {
        const bool branch_taken_0x1a4ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4ec0) {
            ctx->pc = 0x1A4EE0u;
            goto label_1a4ee0;
        }
    }
    ctx->pc = 0x1A4EC8u;
label_1a4ec8:
    // 0x1a4ec8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a4ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a4ecc:
    // 0x1a4ecc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a4eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a4ed0:
    // 0x1a4ed0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a4ed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a4ed4:
    // 0x1a4ed4: 0x0  nop
    ctx->pc = 0x1a4ed4u;
    // NOP
label_1a4ed8:
    // 0x1a4ed8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a4ed8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1a4edc:
    // 0x1a4edc: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a4edcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a4ee0:
    // 0x1a4ee0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a4ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1a4ee4:
    // 0x1a4ee4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a4ee4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1a4ee8:
    // 0x1a4ee8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a4ee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a4eec:
    // 0x1a4eec: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1a4eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_1a4ef0:
    // 0x1a4ef0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1a4ef0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1a4ef4:
    // 0x1a4ef4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a4ef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a4ef8:
    // 0x1a4ef8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a4ef8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1a4efc:
    // 0x1a4efc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a4efcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a4f00:
    // 0x1a4f00: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x1a4f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_1a4f04:
    // 0x1a4f04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a4f04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a4f08:
    // 0x1a4f08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a4f08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1a4f0c:
    // 0x1a4f0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a4f0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a4f10:
    // 0x1a4f10: 0x3e00008  jr          $ra
label_1a4f14:
    if (ctx->pc == 0x1A4F14u) {
        ctx->pc = 0x1A4F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F10u;
        // 0x1a4f14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4F18u;
        goto label_fallthrough_0x1a4f10;
    }
    ctx->pc = 0x1A4F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4F10u;
        // 0x1a4f14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a4f10:
    ctx->pc = 0x1A4F18u;
}
