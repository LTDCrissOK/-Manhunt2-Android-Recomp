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

// Function: sub_00304D18
// Address: 0x304d18 - 0x304db8
void sub_00304D18_0x304d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304D18_0x304d18");
#endif

    ctx->pc = 0x304d18u;

    // 0x304d18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x304d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x304d1c: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x304d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
    // 0x304d20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x304d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x304d24: 0x24636560  addiu       $v1, $v1, 0x6560
    ctx->pc = 0x304d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25952));
    // 0x304d28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x304d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x304d2c: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x304d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x304d30: 0x3c05005a  lui         $a1, 0x5A
    ctx->pc = 0x304d30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)90 << 16));
    // 0x304d34: 0x3c06005a  lui         $a2, 0x5A
    ctx->pc = 0x304d34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)90 << 16));
    // 0x304d38: 0x3c07005a  lui         $a3, 0x5A
    ctx->pc = 0x304d38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)90 << 16));
    // 0x304d3c: 0x3c08005a  lui         $t0, 0x5A
    ctx->pc = 0x304d3cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)90 << 16));
    // 0x304d40: 0x3c09005a  lui         $t1, 0x5A
    ctx->pc = 0x304d40u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)90 << 16));
    // 0x304d44: 0x8c6f0010  lw          $t7, 0x10($v1)
    ctx->pc = 0x304d44u;
    SET_GPR_S32(ctx, 15, (int32_t)FAST_READ32(0x5A6570u));
    // 0x304d48: 0x3c110048  lui         $s1, 0x48
    ctx->pc = 0x304d48u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)72 << 16));
    // 0x304d4c: 0x24846580  addiu       $a0, $a0, 0x6580
    ctx->pc = 0x304d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25984));
    // 0x304d50: 0x24a565a0  addiu       $a1, $a1, 0x65A0
    ctx->pc = 0x304d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26016));
    // 0x304d54: 0x24c66620  addiu       $a2, $a2, 0x6620
    ctx->pc = 0x304d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26144));
    // 0x304d58: 0x24e765c0  addiu       $a3, $a3, 0x65C0
    ctx->pc = 0x304d58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 26048));
    // 0x304d5c: 0x250865e0  addiu       $t0, $t0, 0x65E0
    ctx->pc = 0x304d5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 26080));
    // 0x304d60: 0x25296600  addiu       $t1, $t1, 0x6600
    ctx->pc = 0x304d60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 26112));
    // 0x304d64: 0x8e222c20  lw          $v0, 0x2C20($s1)
    ctx->pc = 0x304d64u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482C20u));
    // 0x304d68: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x304d68u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5A6590u));
    // 0x304d6c: 0x8caa0010  lw          $t2, 0x10($a1)
    ctx->pc = 0x304d6cu;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x5A65B0u));
    // 0x304d70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x304d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x304d74: 0x8ccb0010  lw          $t3, 0x10($a2)
    ctx->pc = 0x304d74u;
    SET_GPR_S32(ctx, 11, (int32_t)FAST_READ32(0x5A6630u));
    // 0x304d78: 0x8cec0010  lw          $t4, 0x10($a3)
    ctx->pc = 0x304d78u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x5A65D0u));
    // 0x304d7c: 0x8d0d0010  lw          $t5, 0x10($t0)
    ctx->pc = 0x304d7cu;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x5A65F0u));
    // 0x304d80: 0x8d2e0010  lw          $t6, 0x10($t1)
    ctx->pc = 0x304d80u;
    SET_GPR_S32(ctx, 14, (int32_t)FAST_READ32(0x5A6610u));
    // 0x304d84: 0xac6f0014  sw          $t7, 0x14($v1)
    ctx->pc = 0x304d84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x5A6574u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A6574u, _value); } while (0);
    // 0x304d88: 0xac900014  sw          $s0, 0x14($a0)
    ctx->pc = 0x304d88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x5A6594u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A6594u, _value); } while (0);
    // 0x304d8c: 0xacaa0014  sw          $t2, 0x14($a1)
    ctx->pc = 0x304d8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 10)); ps2TraceGuestWrite(rdram, 0x5A65B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A65B4u, _value); } while (0);
    // 0x304d90: 0xaccb0014  sw          $t3, 0x14($a2)
    ctx->pc = 0x304d90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x5A6634u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A6634u, _value); } while (0);
    // 0x304d94: 0xacec0014  sw          $t4, 0x14($a3)
    ctx->pc = 0x304d94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x5A65D4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A65D4u, _value); } while (0);
    // 0x304d98: 0xad0d0014  sw          $t5, 0x14($t0)
    ctx->pc = 0x304d98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x5A65F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A65F4u, _value); } while (0);
    // 0x304d9c: 0xad2e0014  sw          $t6, 0x14($t1)
    ctx->pc = 0x304d9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 14)); ps2TraceGuestWrite(rdram, 0x5A6614u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5A6614u, _value); } while (0);
    // 0x304da0: 0xae222c20  sw          $v0, 0x2C20($s1)
    ctx->pc = 0x304da0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x482C20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482C20u, _value); } while (0);
    // 0x304da4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x304da4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304da8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x304da8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x304dac: 0x3e00008  jr          $ra
    ctx->pc = 0x304DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304DACu;
        // 0x304db0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304DB4u;
    // 0x304db4: 0x0  nop
    ctx->pc = 0x304db4u;
    // NOP
    ctx->pc = 0x304db8u;
}
