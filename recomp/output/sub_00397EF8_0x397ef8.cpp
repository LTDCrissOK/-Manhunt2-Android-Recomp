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

// Function: sub_00397EF8
// Address: 0x397ef8 - 0x398068
void sub_00397EF8_0x397ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397EF8_0x397ef8");
#endif

    switch (ctx->pc) {
        case 0x397f40u: goto label_397f40;
        case 0x397f88u: goto label_397f88;
        case 0x397f94u: goto label_397f94;
        case 0x397fa4u: goto label_397fa4;
        case 0x397fc8u: goto label_397fc8;
        case 0x397fe4u: goto label_397fe4;
        case 0x397ff8u: goto label_397ff8;
        case 0x398024u: goto label_398024;
        default: break;
    }

    ctx->pc = 0x397ef8u;

    // 0x397ef8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x397ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x397efc: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x397efcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x397f00: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x397f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x397f04: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x397f04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397f08: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x397f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x397f0c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x397f0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397f10: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x397f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x397f14: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x397f14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397f18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x397f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x397f1c: 0x24e39220  addiu       $v1, $a3, -0x6DE0
    ctx->pc = 0x397f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939168));
    // 0x397f20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x397f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x397f24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x397f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397f28: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x397f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x397f2c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x397f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x397f30: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x397f30u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x409220u));
    // 0x397f34: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x397F34u;
    {
        const bool branch_taken_0x397f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x397F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397F34u;
        // 0x397f38: 0x8e900000  lw          $s0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397f34) {
            ctx->pc = 0x397F64u;
            goto label_397f64;
        }
    }
    ctx->pc = 0x397F3Cu;
    // 0x397f3c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x397f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_397f40:
    // 0x397f40: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x397f40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x397f44: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x397F44u;
    {
        const bool branch_taken_0x397f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x397F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397F44u;
        // 0x397f48: 0x246300ac  addiu       $v1, $v1, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397f44) {
            ctx->pc = 0x397F64u;
            goto label_397f64;
        }
    }
    ctx->pc = 0x397F4Cu;
    // 0x397f4c: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x397f4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x397f50: 0x0  nop
    ctx->pc = 0x397f50u;
    // NOP
    // 0x397f54: 0x0  nop
    ctx->pc = 0x397f54u;
    // NOP
    // 0x397f58: 0x0  nop
    ctx->pc = 0x397f58u;
    // NOP
    // 0x397f5c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x397F5Cu;
    {
        const bool branch_taken_0x397f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x397f5c) {
            ctx->pc = 0x397F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397F5Cu;
            // 0x397f60: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_397f40;
        }
    }
    ctx->pc = 0x397F64u;
label_397f64:
    // 0x397f64: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x397f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x397f68: 0x10830035  beq         $a0, $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x397F68u;
    {
        const bool branch_taken_0x397f68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x397F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397F68u;
        // 0x397f6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397f68) {
            ctx->pc = 0x398040u;
            goto label_398040;
        }
    }
    ctx->pc = 0x397F70u;
    // 0x397f70: 0x240200ac  addiu       $v0, $zero, 0xAC
    ctx->pc = 0x397f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    // 0x397f74: 0x24e39220  addiu       $v1, $a3, -0x6DE0
    ctx->pc = 0x397f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939168));
    // 0x397f78: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x397f78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x397f7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x397f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397f80: 0xc0ead5a  jal         func_3AB568
    ctx->pc = 0x397F80u;
    SET_GPR_U32(ctx, 31, 0x397F88u);
    ctx->pc = 0x397F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397F80u;
    // 0x397f84: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB568u, 0x397F80u, 0x397F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397F88u;
label_397f88:
    // 0x397f88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x397f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397f8c: 0xc0ead5c  jal         func_3AB570
    ctx->pc = 0x397F8Cu;
    SET_GPR_U32(ctx, 31, 0x397F94u);
    ctx->pc = 0x397F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397F8Cu;
    // 0x397f90: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB570u, 0x397F8Cu, 0x397F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397F94u;
label_397f94:
    // 0x397f94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x397f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397f98: 0x287c2  srl         $s0, $v0, 31
    ctx->pc = 0x397f98u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x397f9c: 0xc0ead5e  jal         func_3AB578
    ctx->pc = 0x397F9Cu;
    SET_GPR_U32(ctx, 31, 0x397FA4u);
    ctx->pc = 0x397FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397F9Cu;
    // 0x397fa0: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB578u, 0x397F9Cu, 0x397FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397FA4u;
label_397fa4:
    // 0x397fa4: 0x23fc2  srl         $a3, $v0, 31
    ctx->pc = 0x397fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x397fa8: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x397fa8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x397fac: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x397facu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x397fb0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x397fb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397fb4: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x397fb4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
    // 0x397fb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x397fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397fbc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x397fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397fc0: 0xc0eb6b8  jal         func_3ADAE0
    ctx->pc = 0x397FC0u;
    SET_GPR_U32(ctx, 31, 0x397FC8u);
    ctx->pc = 0x397FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397FC0u;
    // 0x397fc4: 0xc73821  addu        $a3, $a2, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ADAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ADAE0u, 0x397FC0u, 0x397FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397FC8u;
label_397fc8:
    // 0x397fc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x397fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397fcc: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x397FCCu;
    {
        const bool branch_taken_0x397fcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x397FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397FCCu;
        // 0x397fd0: 0xae440004  sw          $a0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397fcc) {
            ctx->pc = 0x398040u;
            goto label_398040;
        }
    }
    ctx->pc = 0x397FD4u;
    // 0x397fd4: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x397fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x397fd8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x397fd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397fdc: 0xc0eb854  jal         func_3AE150
    ctx->pc = 0x397FDCu;
    SET_GPR_U32(ctx, 31, 0x397FE4u);
    ctx->pc = 0x397FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397FDCu;
    // 0x397fe0: 0x24a584e8  addiu       $a1, $a1, -0x7B18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE150u, 0x397FDCu, 0x397FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397FE4u;
label_397fe4:
    // 0x397fe4: 0xae550008  sw          $s5, 0x8($s2)
    ctx->pc = 0x397fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 21));
    // 0x397fe8: 0xa2530002  sb          $s3, 0x2($s2)
    ctx->pc = 0x397fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 19));
    // 0x397fec: 0x1a60000a  blez        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x397FECu;
    {
        const bool branch_taken_0x397fec = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x397FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397FECu;
        // 0x397ff0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397fec) {
            ctx->pc = 0x398018u;
            goto label_398018;
        }
    }
    ctx->pc = 0x397FF4u;
    // 0x397ff4: 0x2647000c  addiu       $a3, $s2, 0xC
    ctx->pc = 0x397ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_397ff8:
    // 0x397ff8: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x397ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x397ffc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x397ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x398000: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x398000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x398004: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x398004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x398008: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x398008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39800c: 0xd3282a  slt         $a1, $a2, $s3
    ctx->pc = 0x39800cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x398010: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x398010u;
    {
        const bool branch_taken_0x398010 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x398014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398010u;
        // 0x398014: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398010) {
            ctx->pc = 0x397FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_397ff8;
        }
    }
    ctx->pc = 0x398018u;
label_398018:
    // 0x398018: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x398018u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x39801c: 0xc0e5fae  jal         func_397EB8
    ctx->pc = 0x39801Cu;
    SET_GPR_U32(ctx, 31, 0x398024u);
    ctx->pc = 0x398020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39801Cu;
    // 0x398020: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397EB8u, 0x39801Cu, 0x398024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398024u;
label_398024:
    // 0x398024: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x398024u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
    // 0x398028: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x398028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39802c: 0xae40004c  sw          $zero, 0x4C($s2)
    ctx->pc = 0x39802cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
    // 0x398030: 0xae400050  sw          $zero, 0x50($s2)
    ctx->pc = 0x398030u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
    // 0x398034: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x398034u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
    // 0x398038: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x398038u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x39803c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x39803cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_398040:
    // 0x398040: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x398040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x398044: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x398044u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x398048: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x398048u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39804c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x39804cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x398050: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x398050u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x398054: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x398054u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x398058: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x398058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39805c: 0x3e00008  jr          $ra
    ctx->pc = 0x39805Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39805Cu;
        // 0x398060: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39805Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398064u;
    // 0x398064: 0x0  nop
    ctx->pc = 0x398064u;
    // NOP
    ctx->pc = 0x398068u;
}
