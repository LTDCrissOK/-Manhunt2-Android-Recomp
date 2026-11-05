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

// Function: sub_003A6AD8
// Address: 0x3a6ad8 - 0x3a6b60
void sub_003A6AD8_0x3a6ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6AD8_0x3a6ad8");
#endif

    ctx->pc = 0x3a6ad8u;

    // 0x3a6ad8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a6ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a6adc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3a6adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6ae0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A6AE0u;
    {
        const bool branch_taken_0x3a6ae0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6AE0u;
        // 0x3a6ae4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6ae0) {
            ctx->pc = 0x3A6B00u;
            goto label_3a6b00;
        }
    }
    ctx->pc = 0x3A6AE8u;
    // 0x3a6ae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a6ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a6aec: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a6aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a6af0: 0xa0403d58  sb          $zero, 0x3D58($v0)
    ctx->pc = 0x3a6af0u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x413D58u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x413D58u, _value); } while (0);
    // 0x3a6af4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6AF4u;
        // 0x3a6af8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6AFCu;
    // 0x3a6afc: 0x0  nop
    ctx->pc = 0x3a6afcu;
    // NOP
label_3a6b00:
    // 0x3a6b00: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x3a6b00u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a6b04: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x3a6b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x3a6b08: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3A6B08u;
    {
        const bool branch_taken_0x3a6b08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A6B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6B08u;
        // 0x3a6b0c: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6b08) {
            ctx->pc = 0x3A6B40u;
            goto label_3a6b40;
        }
    }
    ctx->pc = 0x3A6B10u;
    // 0x3a6b10: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3A6B10u;
    {
        const bool branch_taken_0x3a6b10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A6B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6B10u;
        // 0x3a6b14: 0x3c040041  lui         $a0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6b10) {
            ctx->pc = 0x3A6B40u;
            goto label_3a6b40;
        }
    }
    ctx->pc = 0x3A6B18u;
    // 0x3a6b18: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3a6b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3a6b1c: 0x2448de70  addiu       $t0, $v0, -0x2190
    ctx->pc = 0x3a6b1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958704));
    // 0x3a6b20: 0x24873d58  addiu       $a3, $a0, 0x3D58
    ctx->pc = 0x3a6b20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 15704));
    // 0x3a6b24: 0x81030000  lb          $v1, 0x0($t0)
    ctx->pc = 0x3a6b24u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x47DE70u));
    // 0x3a6b28: 0x81060001  lb          $a2, 0x1($t0)
    ctx->pc = 0x3a6b28u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x47DE71u));
    // 0x3a6b2c: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x3a6b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a6b30: 0xa0e60001  sb          $a2, 0x1($a3)
    ctx->pc = 0x3a6b30u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x3a6b34: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3A6B34u;
    {
        const bool branch_taken_0x3a6b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6B34u;
        // 0x3a6b38: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6b34) {
            ctx->pc = 0x3A6B4Cu;
            goto label_3a6b4c;
        }
    }
    ctx->pc = 0x3A6B3Cu;
    // 0x3a6b3c: 0x0  nop
    ctx->pc = 0x3a6b3cu;
    // NOP
label_3a6b40:
    // 0x3a6b40: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x3a6b40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x3a6b44: 0xa0803d58  sb          $zero, 0x3D58($a0)
    ctx->pc = 0x3a6b44u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x413D58u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x413D58u, _value); } while (0);
    // 0x3a6b48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a6b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a6b4c:
    // 0x3a6b4c: 0x24843d58  addiu       $a0, $a0, 0x3D58
    ctx->pc = 0x3a6b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15704));
    // 0x3a6b50: 0x80efbe8  j           func_3BEFA0
    ctx->pc = 0x3A6B50u;
    ctx->pc = 0x3A6B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6B50u;
    // 0x3a6b54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    sub_003BEFA0_0x3befa0(rdram, ctx, runtime); return;
    ctx->pc = 0x3A6B58u;
    // 0x3a6b58: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x3a6b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x3a6b5c: 0x0  nop
    ctx->pc = 0x3a6b5cu;
    // NOP
    ctx->pc = 0x3a6b60u;
}
