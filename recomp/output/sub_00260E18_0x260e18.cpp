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

// Function: sub_00260E18
// Address: 0x260e18 - 0x261000
void sub_00260E18_0x260e18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260E18_0x260e18");
#endif

    switch (ctx->pc) {
        case 0x260e6cu: goto label_260e6c;
        case 0x260e9cu: goto label_260e9c;
        case 0x260ed4u: goto label_260ed4;
        case 0x260ee4u: goto label_260ee4;
        case 0x260ef0u: goto label_260ef0;
        case 0x260f00u: goto label_260f00;
        case 0x260f0cu: goto label_260f0c;
        case 0x260f1cu: goto label_260f1c;
        case 0x260f28u: goto label_260f28;
        case 0x260f34u: goto label_260f34;
        case 0x260fe0u: goto label_260fe0;
        default: break;
    }

    ctx->pc = 0x260e18u;

    // 0x260e18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x260e18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x260e1c: 0x3c06004b  lui         $a2, 0x4B
    ctx->pc = 0x260e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)75 << 16));
    // 0x260e20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x260e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x260e24: 0x8cc245b0  lw          $v0, 0x45B0($a2)
    ctx->pc = 0x260e24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4B45B0u));
    // 0x260e28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x260e28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260e2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x260e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x260e30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x260e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x260e34: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x260e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x260e38: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x260E38u;
    {
        const bool branch_taken_0x260e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x260E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E38u;
        // 0x260e3c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260e38) {
            ctx->pc = 0x260E6Cu;
            goto label_260e6c;
        }
    }
    ctx->pc = 0x260E40u;
    // 0x260e40: 0x3c05004b  lui         $a1, 0x4B
    ctx->pc = 0x260e40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)75 << 16));
    // 0x260e44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x260e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x260e48: 0x24a245a0  addiu       $v0, $a1, 0x45A0
    ctx->pc = 0x260e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 17824));
    // 0x260e4c: 0xacc345b0  sw          $v1, 0x45B0($a2)
    ctx->pc = 0x260e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 17840), GPR_U32(ctx, 3));
    // 0x260e50: 0xaca045a0  sw          $zero, 0x45A0($a1)
    ctx->pc = 0x260e50u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4B45A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B45A0u, _value); } while (0);
    // 0x260e54: 0x3c040026  lui         $a0, 0x26
    ctx->pc = 0x260e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)38 << 16));
    // 0x260e58: 0x24840e10  addiu       $a0, $a0, 0xE10
    ctx->pc = 0x260e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3600));
    // 0x260e5c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x260e5cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4B45ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B45ACu, _value); } while (0);
    // 0x260e60: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x260e60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4B45A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4B45A4u, _value); } while (0);
    // 0x260e64: 0xc0f0278  jal         func_3C09E0
    ctx->pc = 0x260E64u;
    SET_GPR_U32(ctx, 31, 0x260E6Cu);
    ctx->pc = 0x260E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260E64u;
    // 0x260e68: 0xac400008  sw          $zero, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C09E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09E0u, 0x260E64u, 0x260E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260E6Cu;
label_260e6c:
    // 0x260e6c: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x260e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x260e70: 0x8e300234  lw          $s0, 0x234($s1)
    ctx->pc = 0x260e70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x260e74: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x260e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260e78: 0x8e030334  lw          $v1, 0x334($s0)
    ctx->pc = 0x260e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x260e7c: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x260e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
    // 0x260e80: 0x24930040  addiu       $s3, $a0, 0x40
    ctx->pc = 0x260e80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x260e84: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x260e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x260e88: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x260E88u;
    {
        const bool branch_taken_0x260e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x260E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E88u;
        // 0x260e8c: 0x8c7201cc  lw          $s2, 0x1CC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 460)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260e88) {
            ctx->pc = 0x260EB4u;
            goto label_260eb4;
        }
    }
    ctx->pc = 0x260E90u;
    // 0x260e90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x260e90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260e94: 0xc098fb4  jal         func_263ED0
    ctx->pc = 0x260E94u;
    SET_GPR_U32(ctx, 31, 0x260E9Cu);
    ctx->pc = 0x260E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260E94u;
    // 0x260e98: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263ED0u, 0x260E94u, 0x260E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260E9Cu;
label_260e9c:
    // 0x260e9c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x260E9Cu;
    {
        const bool branch_taken_0x260e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E9Cu;
        // 0x260ea0: 0x121880  sll         $v1, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260e9c) {
            ctx->pc = 0x260EB4u;
            goto label_260eb4;
        }
    }
    ctx->pc = 0x260EA4u;
    // 0x260ea4: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x260ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
    // 0x260ea8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x260ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x260eac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x260EACu;
    {
        const bool branch_taken_0x260eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260EACu;
        // 0x260eb0: 0x8c4503dc  lw          $a1, 0x3DC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 988)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260eac) {
            ctx->pc = 0x260EB8u;
            goto label_260eb8;
        }
    }
    ctx->pc = 0x260EB4u;
label_260eb4:
    // 0x260eb4: 0x24050433  addiu       $a1, $zero, 0x433
    ctx->pc = 0x260eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1075));
label_260eb8:
    // 0x260eb8: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x260eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x260ebc: 0x14a2000e  bne         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x260EBCu;
    {
        const bool branch_taken_0x260ebc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x260ebc) {
            ctx->pc = 0x260EF8u;
            goto label_260ef8;
        }
    }
    ctx->pc = 0x260EC4u;
    // 0x260ec4: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x260ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x260ec8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x260ec8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260ecc: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x260ECCu;
    SET_GPR_U32(ctx, 31, 0x260ED4u);
    ctx->pc = 0x260ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260ECCu;
    // 0x260ed0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x260ECCu, 0x260ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260ED4u;
label_260ed4:
    // 0x260ed4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x260ED4u;
    {
        const bool branch_taken_0x260ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260ED4u;
        // 0x260ed8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260ed4) {
            ctx->pc = 0x260EE8u;
            goto label_260ee8;
        }
    }
    ctx->pc = 0x260EDCu;
    // 0x260edc: 0xc0c4900  jal         func_312400
    ctx->pc = 0x260EDCu;
    SET_GPR_U32(ctx, 31, 0x260EE4u);
    ctx->pc = 0x260EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260EDCu;
    // 0x260ee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x260EDCu, 0x260EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260EE4u;
label_260ee4:
    // 0x260ee4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x260ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_260ee8:
    // 0x260ee8: 0xc0b1680  jal         func_2C5A00
    ctx->pc = 0x260EE8u;
    SET_GPR_U32(ctx, 31, 0x260EF0u);
    ctx->pc = 0x260EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260EE8u;
    // 0x260eec: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5A00u, 0x260EE8u, 0x260EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260EF0u;
label_260ef0:
    // 0x260ef0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x260EF0u;
    {
        const bool branch_taken_0x260ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260EF0u;
        // 0x260ef4: 0x8e220104  lw          $v0, 0x104($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260ef0) {
            ctx->pc = 0x260F2Cu;
            goto label_260f2c;
        }
    }
    ctx->pc = 0x260EF8u;
label_260ef8:
    // 0x260ef8: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x260EF8u;
    SET_GPR_U32(ctx, 31, 0x260F00u);
    ctx->pc = 0x260EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260EF8u;
    // 0x260efc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x260EF8u, 0x260F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260F00u;
label_260f00:
    // 0x260f00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x260f00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260f04: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x260F04u;
    SET_GPR_U32(ctx, 31, 0x260F0Cu);
    ctx->pc = 0x260F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260F04u;
    // 0x260f08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x260F04u, 0x260F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260F0Cu;
label_260f0c:
    // 0x260f0c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x260F0Cu;
    {
        const bool branch_taken_0x260f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x260f0c) {
            ctx->pc = 0x260F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260F0Cu;
            // 0x260f10: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x260F20u;
            goto label_260f20;
        }
    }
    ctx->pc = 0x260F14u;
    // 0x260f14: 0xc0c4900  jal         func_312400
    ctx->pc = 0x260F14u;
    SET_GPR_U32(ctx, 31, 0x260F1Cu);
    ctx->pc = 0x260F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260F14u;
    // 0x260f18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x260F14u, 0x260F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260F1Cu;
label_260f1c:
    // 0x260f1c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x260f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_260f20:
    // 0x260f20: 0xc0b1680  jal         func_2C5A00
    ctx->pc = 0x260F20u;
    SET_GPR_U32(ctx, 31, 0x260F28u);
    ctx->pc = 0x260F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260F20u;
    // 0x260f24: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5A00u, 0x260F20u, 0x260F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260F28u;
label_260f28:
    // 0x260f28: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x260f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_260f2c:
    // 0x260f2c: 0xc0c48da  jal         func_312368
    ctx->pc = 0x260F2Cu;
    SET_GPR_U32(ctx, 31, 0x260F34u);
    ctx->pc = 0x260F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260F2Cu;
    // 0x260f30: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x260F2Cu, 0x260F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260F34u;
label_260f34:
    // 0x260f34: 0x8e230234  lw          $v1, 0x234($s1)
    ctx->pc = 0x260f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x260f38: 0x8c6300c0  lw          $v1, 0xC0($v1)
    ctx->pc = 0x260f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x260f3c: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x260f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x260f40: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x260F40u;
    {
        const bool branch_taken_0x260f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x260F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F40u;
        // 0x260f44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260f40) {
            ctx->pc = 0x260F54u;
            goto label_260f54;
        }
    }
    ctx->pc = 0x260F48u;
    // 0x260f48: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x260f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x260f4c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x260F4Cu;
    {
        const bool branch_taken_0x260f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x260f4c) {
            ctx->pc = 0x260F58u;
            goto label_260f58;
        }
    }
    ctx->pc = 0x260F54u;
label_260f54:
    // 0x260f54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x260f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_260f58:
    // 0x260f58: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x260F58u;
    {
        const bool branch_taken_0x260f58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x260F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F58u;
        // 0x260f5c: 0x8e2200c0  lw          $v0, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260f58) {
            ctx->pc = 0x260F68u;
            goto label_260f68;
        }
    }
    ctx->pc = 0x260F60u;
    // 0x260f60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x260F60u;
    {
        const bool branch_taken_0x260f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F60u;
        // 0x260f64: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x260f60) {
            ctx->pc = 0x260F70u;
            goto label_260f70;
        }
    }
    ctx->pc = 0x260F68u;
label_260f68:
    // 0x260f68: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x260f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x260f6c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x260f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_260f70:
    // 0x260f70: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x260F70u;
    {
        const bool branch_taken_0x260f70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x260F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F70u;
        // 0x260f74: 0xae2200c0  sw          $v0, 0xC0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260f70) {
            ctx->pc = 0x260F84u;
            goto label_260f84;
        }
    }
    ctx->pc = 0x260F78u;
    // 0x260f78: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x260f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x260f7c: 0x8c4395a0  lw          $v1, -0x6A60($v0)
    ctx->pc = 0x260f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F95A0u));
    // 0x260f80: 0xae2300dc  sw          $v1, 0xDC($s1)
    ctx->pc = 0x260f80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 3));
label_260f84:
    // 0x260f84: 0x8e24025c  lw          $a0, 0x25C($s1)
    ctx->pc = 0x260f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
    // 0x260f88: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x260F88u;
    {
        const bool branch_taken_0x260f88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x260F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F88u;
        // 0x260f8c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260f88) {
            ctx->pc = 0x260FE4u;
            goto label_260fe4;
        }
    }
    ctx->pc = 0x260F90u;
    // 0x260f90: 0x8e2300c0  lw          $v1, 0xC0($s1)
    ctx->pc = 0x260f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x260f94: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x260f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x260f98: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x260F98u;
    {
        const bool branch_taken_0x260f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x260F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F98u;
        // 0x260f9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260f98) {
            ctx->pc = 0x260FACu;
            goto label_260fac;
        }
    }
    ctx->pc = 0x260FA0u;
    // 0x260fa0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x260fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x260fa4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x260FA4u;
    {
        const bool branch_taken_0x260fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x260fa4) {
            ctx->pc = 0x260FB0u;
            goto label_260fb0;
        }
    }
    ctx->pc = 0x260FACu;
label_260fac:
    // 0x260fac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x260facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_260fb0:
    // 0x260fb0: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x260FB0u;
    {
        const bool branch_taken_0x260fb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x260FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260FB0u;
        // 0x260fb4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260fb0) {
            ctx->pc = 0x260FE4u;
            goto label_260fe4;
        }
    }
    ctx->pc = 0x260FB8u;
    // 0x260fb8: 0x9482002a  lhu         $v0, 0x2A($a0)
    ctx->pc = 0x260fb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x260fbc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x260fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x260fc0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x260FC0u;
    {
        const bool branch_taken_0x260fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260FC0u;
        // 0x260fc4: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260fc0) {
            ctx->pc = 0x260FE4u;
            goto label_260fe4;
        }
    }
    ctx->pc = 0x260FC8u;
    // 0x260fc8: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x260fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x260fcc: 0xc44c2b30  lwc1        $f12, 0x2B30($v0)
    ctx->pc = 0x260fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x260fd0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x260fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x260fd4: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x260fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x260fd8: 0xc07466e  jal         func_1D19B8
    ctx->pc = 0x260FD8u;
    SET_GPR_U32(ctx, 31, 0x260FE0u);
    ctx->pc = 0x260FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260FD8u;
    // 0x260fdc: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19B8u, 0x260FD8u, 0x260FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260FE0u;
label_260fe0:
    // 0x260fe0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x260fe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_260fe4:
    // 0x260fe4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x260fe4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x260fe8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x260fe8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x260fec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x260fecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x260ff0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x260ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x260ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x260FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260FF4u;
        // 0x260ff8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260FFCu;
    // 0x260ffc: 0x0  nop
    ctx->pc = 0x260ffcu;
    // NOP
    ctx->pc = 0x261000u;
}
