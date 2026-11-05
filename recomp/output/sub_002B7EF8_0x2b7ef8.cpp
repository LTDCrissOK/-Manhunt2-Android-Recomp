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

// Function: sub_002B7EF8
// Address: 0x2b7ef8 - 0x2b8088
void sub_002B7EF8_0x2b7ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7EF8_0x2b7ef8");
#endif

    switch (ctx->pc) {
        case 0x2b7f20u: goto label_2b7f20;
        case 0x2b7f28u: goto label_2b7f28;
        case 0x2b7fa8u: goto label_2b7fa8;
        case 0x2b7fd8u: goto label_2b7fd8;
        case 0x2b7fecu: goto label_2b7fec;
        case 0x2b8000u: goto label_2b8000;
        case 0x2b8008u: goto label_2b8008;
        case 0x2b802cu: goto label_2b802c;
        case 0x2b8040u: goto label_2b8040;
        case 0x2b805cu: goto label_2b805c;
        default: break;
    }

    ctx->pc = 0x2b7ef8u;

    // 0x2b7ef8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b7ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b7efc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b7efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b7f00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b7f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b7f04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b7f04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7f08: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2b7f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2b7f0c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2b7f0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7f10: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2b7f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2b7f14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b7f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b7f18: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B7F18u;
    SET_GPR_U32(ctx, 31, 0x2B7F20u);
    ctx->pc = 0x2B7F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7F18u;
    // 0x2b7f1c: 0xae11590c  sw          $s1, 0x590C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 22796), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B7F18u, 0x2B7F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7F20u;
label_2b7f20:
    // 0x2b7f20: 0xc0ace0e  jal         func_2B3838
    ctx->pc = 0x2B7F20u;
    SET_GPR_U32(ctx, 31, 0x2B7F28u);
    ctx->pc = 0x2B7F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7F20u;
    // 0x2b7f24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3838u, 0x2B7F20u, 0x2B7F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7F28u;
label_2b7f28:
    // 0x2b7f28: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2b7f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2b7f2c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2b7f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b7f30: 0x14440009  bne         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B7F30u;
    {
        const bool branch_taken_0x2b7f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2B7F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F30u;
        // 0x2b7f34: 0x8c722b38  lw          $s2, 0x2B38($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7f30) {
            ctx->pc = 0x2B7F58u;
            goto label_2b7f58;
        }
    }
    ctx->pc = 0x2B7F38u;
    // 0x2b7f38: 0xae115910  sw          $s1, 0x5910($s0)
    ctx->pc = 0x2b7f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22800), GPR_U32(ctx, 17));
    // 0x2b7f3c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b7f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b7f40: 0xa040a928  sb          $zero, -0x56D8($v0)
    ctx->pc = 0x2b7f40u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA928u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FA928u, _value); } while (0);
    // 0x2b7f44: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2b7f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2b7f48: 0xac60a320  sw          $zero, -0x5CE0($v1)
    ctx->pc = 0x2b7f48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x66A320u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x66A320u, _value); } while (0);
    // 0x2b7f4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b7f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b7f50: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x2B7F50u;
    {
        const bool branch_taken_0x2b7f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F50u;
        // 0x2b7f54: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7f50) {
            ctx->pc = 0x2B8068u;
            goto label_2b8068;
        }
    }
    ctx->pc = 0x2B7F58u;
label_2b7f58:
    // 0x2b7f58: 0x16510037  bne         $s2, $s1, . + 4 + (0x37 << 2)
    ctx->pc = 0x2B7F58u;
    {
        const bool branch_taken_0x2b7f58 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 17));
        ctx->pc = 0x2B7F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F58u;
        // 0x2b7f5c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7f58) {
            ctx->pc = 0x2B8038u;
            goto label_2b8038;
        }
    }
    ctx->pc = 0x2B7F60u;
    // 0x2b7f60: 0x8e1158f8  lw          $s1, 0x58F8($s0)
    ctx->pc = 0x2b7f60u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 22776)));
    // 0x2b7f64: 0x1222002e  beq         $s1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x2B7F64u;
    {
        const bool branch_taken_0x2b7f64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B7F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F64u;
        // 0x2b7f68: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7f64) {
            ctx->pc = 0x2B8020u;
            goto label_2b8020;
        }
    }
    ctx->pc = 0x2B7F6Cu;
    // 0x2b7f6c: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x2b7f6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2b7f70: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B7F70u;
    {
        const bool branch_taken_0x2b7f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7f70) {
            ctx->pc = 0x2B7F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B7F70u;
            // 0x2b7f74: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B7F88u;
            goto label_2b7f88;
        }
    }
    ctx->pc = 0x2B7F78u;
    // 0x2b7f78: 0x12320026  beq         $s1, $s2, . + 4 + (0x26 << 2)
    ctx->pc = 0x2B7F78u;
    {
        const bool branch_taken_0x2b7f78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        ctx->pc = 0x2B7F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F78u;
        // 0x2b7f7c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7f78) {
            ctx->pc = 0x2B8014u;
            goto label_2b8014;
        }
    }
    ctx->pc = 0x2B7F80u;
    // 0x2b7f80: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2B7F80u;
    {
        const bool branch_taken_0x2b7f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F80u;
        // 0x2b7f84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7f80) {
            ctx->pc = 0x2B8024u;
            goto label_2b8024;
        }
    }
    ctx->pc = 0x2B7F88u;
label_2b7f88:
    // 0x2b7f88: 0x16220025  bne         $s1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2B7F88u;
    {
        const bool branch_taken_0x2b7f88 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B7F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7F88u;
        // 0x2b7f8c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7f88) {
            ctx->pc = 0x2B8020u;
            goto label_2b8020;
        }
    }
    ctx->pc = 0x2B7F90u;
    // 0x2b7f90: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x2b7f90u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x2b7f94: 0x9262a929  lbu         $v0, -0x56D7($s3)
    ctx->pc = 0x2b7f94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3FA929u));
    // 0x2b7f98: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B7F98u;
    {
        const bool branch_taken_0x2b7f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b7f98) {
            ctx->pc = 0x2B7FE4u;
            goto label_2b7fe4;
        }
    }
    ctx->pc = 0x2B7FA0u;
    // 0x2b7fa0: 0xc0ad6ae  jal         func_2B5AB8
    ctx->pc = 0x2B7FA0u;
    SET_GPR_U32(ctx, 31, 0x2B7FA8u);
    ctx->pc = 0x2B7FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7FA0u;
    // 0x2b7fa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5AB8u, 0x2B7FA0u, 0x2B7FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7FA8u;
label_2b7fa8:
    // 0x2b7fa8: 0x3c030052  lui         $v1, 0x52
    ctx->pc = 0x2b7fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)82 << 16));
    // 0x2b7fac: 0xae00591c  sw          $zero, 0x591C($s0)
    ctx->pc = 0x2b7facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22812), GPR_U32(ctx, 0));
    // 0x2b7fb0: 0x2463ac80  addiu       $v1, $v1, -0x5380
    ctx->pc = 0x2b7fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945920));
    // 0x2b7fb4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b7fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b7fb8: 0xac72591c  sw          $s2, 0x591C($v1)
    ctx->pc = 0x2b7fb8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x52059Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x52059Cu, _value); } while (0);
    // 0x2b7fbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b7fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7fc0: 0xa052a928  sb          $s2, -0x56D8($v0)
    ctx->pc = 0x2b7fc0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x3FA928u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FA928u, _value); } while (0);
    // 0x2b7fc4: 0x2405002a  addiu       $a1, $zero, 0x2A
    ctx->pc = 0x2b7fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x2b7fc8: 0xa260a929  sb          $zero, -0x56D7($s3)
    ctx->pc = 0x2b7fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4294945065), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b7fcc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b7fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b7fd0: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B7FD0u;
    SET_GPR_U32(ctx, 31, 0x2B7FD8u);
    ctx->pc = 0x2B7FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7FD0u;
    // 0x2b7fd4: 0xac7158f8  sw          $s1, 0x58F8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 22776), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B7FD0u, 0x2B7FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7FD8u;
label_2b7fd8:
    // 0x2b7fd8: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2b7fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2b7fdc: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2B7FDCu;
    {
        const bool branch_taken_0x2b7fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7FDCu;
        // 0x2b7fe0: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7fdc) {
            ctx->pc = 0x2B8064u;
            goto label_2b8064;
        }
    }
    ctx->pc = 0x2B7FE4u;
label_2b7fe4:
    // 0x2b7fe4: 0xc0ad6ae  jal         func_2B5AB8
    ctx->pc = 0x2B7FE4u;
    SET_GPR_U32(ctx, 31, 0x2B7FECu);
    ctx->pc = 0x2B7FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7FE4u;
    // 0x2b7fe8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5AB8u, 0x2B7FE4u, 0x2B7FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7FECu;
label_2b7fec:
    // 0x2b7fec: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2b7fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2b7ff0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b7ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b7ff4: 0xa060a930  sb          $zero, -0x56D0($v1)
    ctx->pc = 0x2b7ff4u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA930u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FA930u, _value); } while (0);
    // 0x2b7ff8: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x2B7FF8u;
    SET_GPR_U32(ctx, 31, 0x2B8000u);
    ctx->pc = 0x2B7FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7FF8u;
    // 0x2b7ffc: 0xa040a928  sb          $zero, -0x56D8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294945064), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x2B7FF8u, 0x2B8000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8000u;
label_2b8000:
    // 0x2b8000: 0xc0a7142  jal         func_29C508
    ctx->pc = 0x2B8000u;
    SET_GPR_U32(ctx, 31, 0x2B8008u);
    ctx->pc = 0x2B8004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8000u;
    // 0x2b8004: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C508u, 0x2B8000u, 0x2B8008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8008u;
label_2b8008:
    // 0x2b8008: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x2b8008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2b800c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2B800Cu;
    {
        const bool branch_taken_0x2b800c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B800Cu;
        // 0x2b8010: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b800c) {
            ctx->pc = 0x2B8064u;
            goto label_2b8064;
        }
    }
    ctx->pc = 0x2B8014u;
label_2b8014:
    // 0x2b8014: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2b8014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2b8018: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2B8018u;
    {
        const bool branch_taken_0x2b8018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8018u;
        // 0x2b801c: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8018) {
            ctx->pc = 0x2B8064u;
            goto label_2b8064;
        }
    }
    ctx->pc = 0x2B8020u;
label_2b8020:
    // 0x2b8020: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b8020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b8024:
    // 0x2b8024: 0xc0ad6ae  jal         func_2B5AB8
    ctx->pc = 0x2B8024u;
    SET_GPR_U32(ctx, 31, 0x2B802Cu);
    ctx->pc = 0x2B8028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8024u;
    // 0x2b8028: 0xa040a928  sb          $zero, -0x56D8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294945064), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5AB8u, 0x2B8024u, 0x2B802Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B802Cu;
label_2b802c:
    // 0x2b802c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2b802cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2b8030: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B8030u;
    {
        const bool branch_taken_0x2b8030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B8034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8030u;
        // 0x2b8034: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8030) {
            ctx->pc = 0x2B8064u;
            goto label_2b8064;
        }
    }
    ctx->pc = 0x2B8038u;
label_2b8038:
    // 0x2b8038: 0xc0ad684  jal         func_2B5A10
    ctx->pc = 0x2B8038u;
    SET_GPR_U32(ctx, 31, 0x2B8040u);
    ctx->pc = 0x2B803Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8038u;
    // 0x2b803c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5A10u, 0x2B8038u, 0x2B8040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B8040u;
label_2b8040:
    // 0x2b8040: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B8040u;
    {
        const bool branch_taken_0x2b8040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B8044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8040u;
        // 0x2b8044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8040) {
            ctx->pc = 0x2B8050u;
            goto label_2b8050;
        }
    }
    ctx->pc = 0x2B8048u;
    // 0x2b8048: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B8048u;
    {
        const bool branch_taken_0x2b8048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B8048u;
        // 0x2b804c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b8048) {
            ctx->pc = 0x2B8068u;
            goto label_2b8068;
        }
    }
    ctx->pc = 0x2B8050u;
label_2b8050:
    // 0x2b8050: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b8050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b8054: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B8054u;
    SET_GPR_U32(ctx, 31, 0x2B805Cu);
    ctx->pc = 0x2B8058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B8054u;
    // 0x2b8058: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B8054u, 0x2B805Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B805Cu;
label_2b805c:
    // 0x2b805c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2b805cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b8060: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b8060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b8064:
    // 0x2b8064: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b8064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2b8068:
    // 0x2b8068: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b8068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b806c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b806cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b8070: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2b8070u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b8074: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2b8074u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2b8078: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b8078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b807c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B807Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B8080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B807Cu;
        // 0x2b8080: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B807Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B8084u;
    // 0x2b8084: 0x0  nop
    ctx->pc = 0x2b8084u;
    // NOP
    ctx->pc = 0x2b8088u;
}
