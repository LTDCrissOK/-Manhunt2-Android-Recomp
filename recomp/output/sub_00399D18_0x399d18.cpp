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

// Function: sub_00399D18
// Address: 0x399d18 - 0x399d80
void sub_00399D18_0x399d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399D18_0x399d18");
#endif

    switch (ctx->pc) {
        case 0x399d2cu: goto label_399d2c;
        default: break;
    }

    ctx->pc = 0x399d18u;

    // 0x399d18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x399d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x399d1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x399d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x399d20: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x399d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x399d24: 0xc0e6a60  jal         func_39A980
    ctx->pc = 0x399D24u;
    SET_GPR_U32(ctx, 31, 0x399D2Cu);
    ctx->pc = 0x399D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399D24u;
    // 0x399d28: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A980u, 0x399D24u, 0x399D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399D2Cu;
label_399d2c:
    // 0x399d2c: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x399d2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x399d30: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x399d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x399d34: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x399d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x399d38: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x399d38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x399d3c: 0x34840200  ori         $a0, $a0, 0x200
    ctx->pc = 0x399d3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)512);
    // 0x399d40: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x399d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x399d44: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x399D44u;
    {
        const bool branch_taken_0x399d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x399D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399D44u;
        // 0x399d48: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399d44) {
            ctx->pc = 0x399D68u;
            goto label_399d68;
        }
    }
    ctx->pc = 0x399D4Cu;
    // 0x399d4c: 0x8203004b  lb          $v1, 0x4B($s0)
    ctx->pc = 0x399d4cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 75)));
    // 0x399d50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x399d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x399d54: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x399D54u;
    {
        const bool branch_taken_0x399d54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x399D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399D54u;
        // 0x399d58: 0xa202004c  sb          $v0, 0x4C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399d54) {
            ctx->pc = 0x399D70u;
            goto label_399d70;
        }
    }
    ctx->pc = 0x399D5Cu;
    // 0x399d5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x399D5Cu;
    {
        const bool branch_taken_0x399d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399D5Cu;
        // 0x399d60: 0xa200004b  sb          $zero, 0x4B($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 75), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399d5c) {
            ctx->pc = 0x399D70u;
            goto label_399d70;
        }
    }
    ctx->pc = 0x399D64u;
    // 0x399d64: 0x0  nop
    ctx->pc = 0x399d64u;
    // NOP
label_399d68:
    // 0x399d68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x399d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x399d6c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x399d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_399d70:
    // 0x399d70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x399d70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x399d74: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x399d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x399d78: 0x80e6a66  j           func_39A998
    ctx->pc = 0x399D78u;
    ctx->pc = 0x399D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399D78u;
    // 0x399d7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A998u;
    sub_0039A998_0x39a998(rdram, ctx, runtime); return;
    ctx->pc = 0x399D80u;
}
