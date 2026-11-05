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

// Function: sub_0016FC90
// Address: 0x16fc90 - 0x16fd60
void sub_0016FC90_0x16fc90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016FC90_0x16fc90");
#endif

    switch (ctx->pc) {
        case 0x16fcb8u: goto label_16fcb8;
        case 0x16fcf8u: goto label_16fcf8;
        default: break;
    }

    ctx->pc = 0x16fc90u;

    // 0x16fc90: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x16fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x16fc94: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x16fc94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fc98: 0x8c4307b0  lw          $v1, 0x7B0($v0)
    ctx->pc = 0x16fc98u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F07B0u));
    // 0x16fc9c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x16fc9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fca0: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x16FCA0u;
    {
        const bool branch_taken_0x16fca0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16FCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FCA0u;
        // 0x16fca4: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fca0) {
            ctx->pc = 0x16FCE4u;
            goto label_16fce4;
        }
    }
    ctx->pc = 0x16FCA8u;
    // 0x16fca8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16fca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fcac: 0x2488bd68  addiu       $t0, $a0, -0x4298
    ctx->pc = 0x16fcacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950248));
    // 0x16fcb0: 0x240635e3  addiu       $a2, $zero, 0x35E3
    ctx->pc = 0x16fcb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13795));
    // 0x16fcb4: 0x0  nop
    ctx->pc = 0x16fcb4u;
    // NOP
label_16fcb8:
    // 0x16fcb8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x16fcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x16fcbc: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x16fcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16fcc0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x16fcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x16fcc4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x16fcc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16fcc8: 0x2ca20005  sltiu       $v0, $a1, 0x5
    ctx->pc = 0x16fcc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x16fccc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16FCCCu;
    {
        const bool branch_taken_0x16fccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16FCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FCCCu;
        // 0x16fcd0: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fccc) {
            ctx->pc = 0x16FCB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16fcb8;
        }
    }
    ctx->pc = 0x16FCD4u;
    // 0x16fcd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16fcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fcd8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x16fcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x16fcdc: 0xa04007ac  sb          $zero, 0x7AC($v0)
    ctx->pc = 0x16fcdcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F07ACu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F07ACu, _value); } while (0);
    // 0x16fce0: 0xad2307b0  sw          $v1, 0x7B0($t1)
    ctx->pc = 0x16fce0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 1968), GPR_U32(ctx, 3));
label_16fce4:
    // 0x16fce4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x16fce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x16fce8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16fce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fcec: 0x2446bd68  addiu       $a2, $v0, -0x4298
    ctx->pc = 0x16fcecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950248));
    // 0x16fcf0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x16fcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16fcf4: 0x0  nop
    ctx->pc = 0x16fcf4u;
    // NOP
label_16fcf8:
    // 0x16fcf8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x16fcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x16fcfc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16fcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16fd00: 0x14670003  bne         $v1, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x16FD00u;
    {
        const bool branch_taken_0x16fd00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x16FD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FD00u;
        // 0x16fd04: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fd00) {
            ctx->pc = 0x16FD10u;
            goto label_16fd10;
        }
    }
    ctx->pc = 0x16FD08u;
    // 0x16fd08: 0x3e00008  jr          $ra
    ctx->pc = 0x16FD08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FD08u;
        // 0x16fd0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FD08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FD10u;
label_16fd10:
    // 0x16fd10: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x16fd10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x16fd14: 0x2ca30005  sltiu       $v1, $a1, 0x5
    ctx->pc = 0x16fd14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x16fd18: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x16FD18u;
    {
        const bool branch_taken_0x16fd18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16FD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FD18u;
        // 0x16fd1c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fd18) {
            ctx->pc = 0x16FCF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16fcf8;
        }
    }
    ctx->pc = 0x16FD20u;
    // 0x16fd20: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x16fd20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x16fd24: 0x2484bd68  addiu       $a0, $a0, -0x4298
    ctx->pc = 0x16fd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950248));
    // 0x16fd28: 0x90c207ac  lbu         $v0, 0x7AC($a2)
    ctx->pc = 0x16fd28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3F07ACu));
    // 0x16fd2c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x16fd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16fd30: 0x90c307ac  lbu         $v1, 0x7AC($a2)
    ctx->pc = 0x16fd30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3F07ACu));
    // 0x16fd34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16fd34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16fd38: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16fd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16fd3c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16fd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16fd40: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x16fd40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x16fd44: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x16fd44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x16fd48: 0x14850002  bne         $a0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x16FD48u;
    {
        const bool branch_taken_0x16fd48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x16FD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FD48u;
        // 0x16fd4c: 0xa0c307ac  sb          $v1, 0x7AC($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 1964), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fd48) {
            ctx->pc = 0x16FD54u;
            goto label_16fd54;
        }
    }
    ctx->pc = 0x16FD50u;
    // 0x16fd50: 0xa0c007ac  sb          $zero, 0x7AC($a2)
    ctx->pc = 0x16fd50u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1964), (uint8_t)GPR_U32(ctx, 0));
label_16fd54:
    // 0x16fd54: 0x3e00008  jr          $ra
    ctx->pc = 0x16FD54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FD54u;
        // 0x16fd58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16FD54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16FD5Cu;
    // 0x16fd5c: 0x0  nop
    ctx->pc = 0x16fd5cu;
    // NOP
    ctx->pc = 0x16fd60u;
}
