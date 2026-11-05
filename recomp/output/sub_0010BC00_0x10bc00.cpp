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

// Function: sub_0010BC00
// Address: 0x10bc00 - 0x10bca8
void sub_0010BC00_0x10bc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BC00_0x10bc00");
#endif

    switch (ctx->pc) {
        case 0x10bc38u: goto label_10bc38;
        case 0x10bc54u: goto label_10bc54;
        case 0x10bc7cu: goto label_10bc7c;
        case 0x10bc8cu: goto label_10bc8c;
        default: break;
    }

    ctx->pc = 0x10bc00u;

    // 0x10bc00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10bc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10bc04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10bc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10bc08: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10bc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10bc0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10bc0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bc10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10bc10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10bc14: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10bc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10bc18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10bc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10bc1c: 0x922200cc  lbu         $v0, 0xCC($s1)
    ctx->pc = 0x10bc1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x10bc20: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x10BC20u;
    {
        const bool branch_taken_0x10bc20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC20u;
        // 0x10bc24: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bc20) {
            ctx->pc = 0x10BC8Cu;
            goto label_10bc8c;
        }
    }
    ctx->pc = 0x10BC28u;
    // 0x10bc28: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x10BC28u;
    {
        const bool branch_taken_0x10bc28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC28u;
        // 0x10bc2c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bc28) {
            ctx->pc = 0x10BC6Cu;
            goto label_10bc6c;
        }
    }
    ctx->pc = 0x10BC30u;
    // 0x10bc30: 0x2632000c  addiu       $s2, $s1, 0xC
    ctx->pc = 0x10bc30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x10bc34: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x10bc34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_10bc38:
    // 0x10bc38: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x10bc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x10bc3c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10bc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10bc40: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x10bc40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10bc44: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10BC44u;
    {
        const bool branch_taken_0x10bc44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC44u;
        // 0x10bc48: 0x26030001  addiu       $v1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bc44) {
            ctx->pc = 0x10BC58u;
            goto label_10bc58;
        }
    }
    ctx->pc = 0x10BC4Cu;
    // 0x10bc4c: 0xc043e2c  jal         func_10F8B0
    ctx->pc = 0x10BC4Cu;
    SET_GPR_U32(ctx, 31, 0x10BC54u);
    ctx->pc = 0x10BC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BC4Cu;
    // 0x10bc50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F8B0u, 0x10BC4Cu, 0x10BC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BC54u;
label_10bc54:
    // 0x10bc54: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x10bc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_10bc58:
    // 0x10bc58: 0x922200cc  lbu         $v0, 0xCC($s1)
    ctx->pc = 0x10bc58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 204)));
    // 0x10bc5c: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x10bc5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x10bc60: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x10bc60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10bc64: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x10BC64u;
    {
        const bool branch_taken_0x10bc64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10BC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC64u;
        // 0x10bc68: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bc64) {
            ctx->pc = 0x10BC38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10bc38;
        }
    }
    ctx->pc = 0x10BC6Cu;
label_10bc6c:
    // 0x10bc6c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x10bc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x10bc70: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x10bc70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bc74: 0xc04785a  jal         func_11E168
    ctx->pc = 0x10BC74u;
    SET_GPR_U32(ctx, 31, 0x10BC7Cu);
    ctx->pc = 0x10BC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BC74u;
    // 0x10bc78: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E168u, 0x10BC74u, 0x10BC7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BC7Cu;
label_10bc7c:
    // 0x10bc7c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10BC7Cu;
    {
        const bool branch_taken_0x10bc7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BC7Cu;
        // 0x10bc80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bc7c) {
            ctx->pc = 0x10BC90u;
            goto label_10bc90;
        }
    }
    ctx->pc = 0x10BC84u;
    // 0x10bc84: 0xc043e3c  jal         func_10F8F0
    ctx->pc = 0x10BC84u;
    SET_GPR_U32(ctx, 31, 0x10BC8Cu);
    ctx->pc = 0x10BC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BC84u;
    // 0x10bc88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F8F0u, 0x10BC84u, 0x10BC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BC8Cu;
label_10bc8c:
    // 0x10bc8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10bc8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10bc90:
    // 0x10bc90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10bc90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10bc94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10bc94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10bc98: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10bc98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10bc9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10bc9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10bca0: 0x3e00008  jr          $ra
    ctx->pc = 0x10BCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BCA0u;
        // 0x10bca4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BCA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BCA8u;
}
