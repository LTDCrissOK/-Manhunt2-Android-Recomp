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

// Function: sub_00304F40
// Address: 0x304f40 - 0x304fa8
void sub_00304F40_0x304f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304F40_0x304f40");
#endif

    switch (ctx->pc) {
        case 0x304f5cu: goto label_304f5c;
        default: break;
    }

    ctx->pc = 0x304f40u;

    // 0x304f40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x304f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x304f44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x304f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x304f48: 0x3c10005a  lui         $s0, 0x5A
    ctx->pc = 0x304f48u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)90 << 16));
    // 0x304f4c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x304f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x304f50: 0x26106560  addiu       $s0, $s0, 0x6560
    ctx->pc = 0x304f50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25952));
    // 0x304f54: 0xc0c129e  jal         func_304A78
    ctx->pc = 0x304F54u;
    SET_GPR_U32(ctx, 31, 0x304F5Cu);
    ctx->pc = 0x304F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304F54u;
    // 0x304f58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x304A78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x304A78u, 0x304F54u, 0x304F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x304F5Cu;
label_304f5c:
    // 0x304f5c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x304f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x304f60: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x304f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x304f64: 0x8043bb58  lb          $v1, -0x44A8($v0)
    ctx->pc = 0x304f64u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x3FBB58u));
    // 0x304f68: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x304F68u;
    {
        const bool branch_taken_0x304f68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x304F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304F68u;
        // 0x304f6c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304f68) {
            ctx->pc = 0x304F88u;
            goto label_304f88;
        }
    }
    ctx->pc = 0x304F70u;
    // 0x304f70: 0x8043bb59  lb          $v1, -0x44A7($v0)
    ctx->pc = 0x304f70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294949721)));
    // 0x304f74: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x304F74u;
    {
        const bool branch_taken_0x304f74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x304F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304F74u;
        // 0x304f78: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304f74) {
            ctx->pc = 0x304F88u;
            goto label_304f88;
        }
    }
    ctx->pc = 0x304F7Cu;
    // 0x304f7c: 0x8043bb5a  lb          $v1, -0x44A6($v0)
    ctx->pc = 0x304f7cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294949722)));
    // 0x304f80: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x304F80u;
    {
        const bool branch_taken_0x304f80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x304F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304F80u;
        // 0x304f84: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304f80) {
            ctx->pc = 0x304F98u;
            goto label_304f98;
        }
    }
    ctx->pc = 0x304F88u;
label_304f88:
    // 0x304f88: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x304f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x304f8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x304f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304f90: 0xac62bb54  sw          $v0, -0x44AC($v1)
    ctx->pc = 0x304f90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FBB54u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBB54u, _value); } while (0);
    // 0x304f94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x304f94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_304f98:
    // 0x304f98: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x304f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x304f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x304F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304F9Cu;
        // 0x304fa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304FA4u;
    // 0x304fa4: 0x0  nop
    ctx->pc = 0x304fa4u;
    // NOP
    ctx->pc = 0x304fa8u;
}
