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

// Function: sub_003A1CB8
// Address: 0x3a1cb8 - 0x3a1d80
void sub_003A1CB8_0x3a1cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1CB8_0x3a1cb8");
#endif

    switch (ctx->pc) {
        case 0x3a1cf8u: goto label_3a1cf8;
        case 0x3a1d28u: goto label_3a1d28;
        case 0x3a1d34u: goto label_3a1d34;
        default: break;
    }

    ctx->pc = 0x3a1cb8u;

    // 0x3a1cb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a1cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a1cbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a1cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a1cc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a1cc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1cc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a1cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a1cc8: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A1CC8u;
    {
        const bool branch_taken_0x3a1cc8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1CC8u;
        // 0x3a1ccc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1cc8) {
            ctx->pc = 0x3A1CF0u;
            goto label_3a1cf0;
        }
    }
    ctx->pc = 0x3A1CD0u;
    // 0x3a1cd0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a1cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a1cd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a1cd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a1cd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a1cd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a1cdc: 0x2484c630  addiu       $a0, $a0, -0x39D0
    ctx->pc = 0x3a1cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952496));
    // 0x3a1ce0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a1ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a1ce4: 0x80e8688  j           func_3A1A20
    ctx->pc = 0x3A1CE4u;
    ctx->pc = 0x3A1CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1CE4u;
    // 0x3a1ce8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1A20u;
    sub_003A1A20_0x3a1a20(rdram, ctx, runtime); return;
    ctx->pc = 0x3A1CECu;
    // 0x3a1cec: 0x0  nop
    ctx->pc = 0x3a1cecu;
    // NOP
label_3a1cf0:
    // 0x3a1cf0: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x3A1CF0u;
    SET_GPR_U32(ctx, 31, 0x3A1CF8u);
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x3A1CF0u, 0x3A1CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1CF8u;
label_3a1cf8:
    // 0x3a1cf8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3a1cf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1cfc: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A1CFCu;
    {
        const bool branch_taken_0x3a1cfc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1CFCu;
        // 0x3a1d00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1cfc) {
            ctx->pc = 0x3A1D20u;
            goto label_3a1d20;
        }
    }
    ctx->pc = 0x3A1D04u;
    // 0x3a1d04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a1d04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a1d08: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3a1d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x3a1d0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a1d0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a1d10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a1d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a1d14: 0xa0406968  sb          $zero, 0x6968($v0)
    ctx->pc = 0x3a1d14u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x656968u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x656968u, _value); } while (0);
    // 0x3a1d18: 0x3e00008  jr          $ra
    ctx->pc = 0x3A1D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1D18u;
        // 0x3a1d1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1D20u;
label_3a1d20:
    // 0x3a1d20: 0xc0e8714  jal         func_3A1C50
    ctx->pc = 0x3A1D20u;
    SET_GPR_U32(ctx, 31, 0x3A1D28u);
    ctx->pc = 0x3A1C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1C50u, 0x3A1D20u, 0x3A1D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1D28u;
label_3a1d28:
    // 0x3a1d28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a1d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1d2c: 0xc0e8760  jal         func_3A1D80
    ctx->pc = 0x3A1D2Cu;
    SET_GPR_U32(ctx, 31, 0x3A1D34u);
    ctx->pc = 0x3A1D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1D2Cu;
    // 0x3a1d30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1D80u, 0x3A1D2Cu, 0x3A1D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1D34u;
label_3a1d34:
    // 0x3a1d34: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x3a1d34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x3a1d38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a1d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a1d3c: 0x24846968  addiu       $a0, $a0, 0x6968
    ctx->pc = 0x3a1d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26984));
    // 0x3a1d40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a1d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1d44: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A1D44u;
    {
        const bool branch_taken_0x3a1d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A1D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1D44u;
        // 0x3a1d48: 0x26260001  addiu       $a2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1d44) {
            ctx->pc = 0x3A1D60u;
            goto label_3a1d60;
        }
    }
    ctx->pc = 0x3A1D4Cu;
    // 0x3a1d4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a1d4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a1d50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a1d50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a1d54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a1d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a1d58: 0x80efa49  j           func_3BE924
    ctx->pc = 0x3A1D58u;
    ctx->pc = 0x3A1D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1D58u;
    // 0x3a1d5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    sub_003BE924_0x3be924(rdram, ctx, runtime); return;
    ctx->pc = 0x3A1D60u;
label_3a1d60:
    // 0x3a1d60: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a1d60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a1d64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a1d64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a1d68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a1d68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a1d6c: 0x2484c658  addiu       $a0, $a0, -0x39A8
    ctx->pc = 0x3a1d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952536));
    // 0x3a1d70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a1d70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a1d74: 0x80e8688  j           func_3A1A20
    ctx->pc = 0x3A1D74u;
    ctx->pc = 0x3A1D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1D74u;
    // 0x3a1d78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1A20u;
    sub_003A1A20_0x3a1a20(rdram, ctx, runtime); return;
    ctx->pc = 0x3A1D7Cu;
    // 0x3a1d7c: 0x0  nop
    ctx->pc = 0x3a1d7cu;
    // NOP
    ctx->pc = 0x3a1d80u;
}
