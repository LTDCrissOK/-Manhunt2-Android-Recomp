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

// Function: sub_002A7108
// Address: 0x2a7108 - 0x2a7190
void sub_002A7108_0x2a7108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7108_0x2a7108");
#endif

    ctx->pc = 0x2a7108u;

    // 0x2a7108: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2a7108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a710c: 0x14a2001e  bne         $a1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2A710Cu;
    {
        const bool branch_taken_0x2a710c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A7110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A710Cu;
        // 0x2a7110: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a710c) {
            ctx->pc = 0x2A7188u;
            goto label_2a7188;
        }
    }
    ctx->pc = 0x2A7114u;
    // 0x2a7114: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2A7114u;
    {
        const bool branch_taken_0x2a7114 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7114u;
        // 0x2a7118: 0x3c06004c  lui         $a2, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7114) {
            ctx->pc = 0x2A7188u;
            goto label_2a7188;
        }
    }
    ctx->pc = 0x2A711Cu;
    // 0x2a711c: 0x3c07004c  lui         $a3, 0x4C
    ctx->pc = 0x2a711cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)76 << 16));
    // 0x2a7120: 0xa0c02330  sb          $zero, 0x2330($a2)
    ctx->pc = 0x2a7120u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 9008), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a7124: 0x24c22330  addiu       $v0, $a2, 0x2330
    ctx->pc = 0x2a7124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 9008));
    // 0x2a7128: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x2a7128u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x2a712c: 0x24e32348  addiu       $v1, $a3, 0x2348
    ctx->pc = 0x2a712cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 9032));
    // 0x2a7130: 0xa0e02348  sb          $zero, 0x2348($a3)
    ctx->pc = 0x2a7130u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4C2348u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4C2348u, _value); } while (0);
    // 0x2a7134: 0x3c08004c  lui         $t0, 0x4C
    ctx->pc = 0x2a7134u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)76 << 16));
    // 0x2a7138: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x2a7138u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4C235Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4C235Cu, _value); } while (0);
    // 0x2a713c: 0x25042360  addiu       $a0, $t0, 0x2360
    ctx->pc = 0x2a713cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 9056));
    // 0x2a7140: 0xa1002360  sb          $zero, 0x2360($t0)
    ctx->pc = 0x2a7140u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4C2360u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4C2360u, _value); } while (0);
    // 0x2a7144: 0x3c09004c  lui         $t1, 0x4C
    ctx->pc = 0x2a7144u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)76 << 16));
    // 0x2a7148: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2a7148u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4C2374u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4C2374u, _value); } while (0);
    // 0x2a714c: 0x25252378  addiu       $a1, $t1, 0x2378
    ctx->pc = 0x2a714cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 9080));
    // 0x2a7150: 0xa1202378  sb          $zero, 0x2378($t1)
    ctx->pc = 0x2a7150u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4C2378u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4C2378u, _value); } while (0);
    // 0x2a7154: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x2a7154u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4C238Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4C238Cu, _value); } while (0);
    // 0x2a7158: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2a7158u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2a715c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2a715cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2a7160: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2a7160u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x2a7164: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2a7164u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4C234Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4C234Cu, _value); } while (0);
    // 0x2a7168: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2a7168u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4C2350u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4C2350u, _value); } while (0);
    // 0x2a716c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2a716cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4C2354u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4C2354u, _value); } while (0);
    // 0x2a7170: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2a7170u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4C2364u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4C2364u, _value); } while (0);
    // 0x2a7174: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2a7174u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4C2368u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4C2368u, _value); } while (0);
    // 0x2a7178: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2a7178u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4C236Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4C236Cu, _value); } while (0);
    // 0x2a717c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2a717cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4C237Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4C237Cu, _value); } while (0);
    // 0x2a7180: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x2a7180u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4C2380u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4C2380u, _value); } while (0);
    // 0x2a7184: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x2a7184u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4C2384u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4C2384u, _value); } while (0);
label_2a7188:
    // 0x2a7188: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7188u;
        // 0x2a718c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7190u;
}
