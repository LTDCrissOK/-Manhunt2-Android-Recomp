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

// Function: sub_00374A80
// Address: 0x374a80 - 0x374b28
void sub_00374A80_0x374a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374A80_0x374a80");
#endif

    ctx->pc = 0x374a80u;

    // 0x374a80: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x374a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x374a84: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x374a84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x374a88: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x374a88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374a8c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x374a8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374a90: 0x24636050  addiu       $v1, $v1, 0x6050
    ctx->pc = 0x374a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24656));
    // 0x374a94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x374a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x374a98: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x374A98u;
    {
        const bool branch_taken_0x374a98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x374A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374A98u;
        // 0x374a9c: 0xdc470000  ld          $a3, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374a98) {
            ctx->pc = 0x374AB0u;
            goto label_374ab0;
        }
    }
    ctx->pc = 0x374AA0u;
    // 0x374aa0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x374aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x374aa4: 0x3442fdff  ori         $v0, $v0, 0xFDFF
    ctx->pc = 0x374aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65023);
    // 0x374aa8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x374AA8u;
    {
        const bool branch_taken_0x374aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374AA8u;
        // 0x374aac: 0xc23024  and         $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374aa8) {
            ctx->pc = 0x374AB4u;
            goto label_374ab4;
        }
    }
    ctx->pc = 0x374AB0u;
label_374ab0:
    // 0x374ab0: 0x34c60200  ori         $a2, $a2, 0x200
    ctx->pc = 0x374ab0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)512);
label_374ab4:
    // 0x374ab4: 0x3403fe00  ori         $v1, $zero, 0xFE00
    ctx->pc = 0x374ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x374ab8: 0x31c78  dsll        $v1, $v1, 17
    ctx->pc = 0x374ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 17);
    // 0x374abc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x374abcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x374ac0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x374ac0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x374ac4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x374ac4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x374ac8: 0x31bf8  dsll        $v1, $v1, 15
    ctx->pc = 0x374ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 15);
    // 0x374acc: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x374accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x374ad0: 0x25056050  addiu       $a1, $t0, 0x6050
    ctx->pc = 0x374ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 24656));
    // 0x374ad4: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x374ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x374ad8: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x374ad8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x374adc: 0x613fc  dsll32      $v0, $a2, 15
    ctx->pc = 0x374adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 15));
    // 0x374ae0: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x374ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x374ae4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x374ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x374ae8: 0x10e30005  beq         $a3, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x374AE8u;
    {
        const bool branch_taken_0x374ae8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x374AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374AE8u;
        // 0x374aec: 0xfca30000  sd          $v1, 0x0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374ae8) {
            ctx->pc = 0x374B00u;
            goto label_374b00;
        }
    }
    ctx->pc = 0x374AF0u;
    // 0x374af0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x374af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x374af4: 0x8c62cd00  lw          $v0, -0x3300($v1)
    ctx->pc = 0x374af4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FCD00u));
    // 0x374af8: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x374af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x374afc: 0xac62cd00  sw          $v0, -0x3300($v1)
    ctx->pc = 0x374afcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FCD00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FCD00u, _value); } while (0);
label_374b00:
    // 0x374b00: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x374b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x374b04: 0x3c03fffc  lui         $v1, 0xFFFC
    ctx->pc = 0x374b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65532 << 16));
    // 0x374b08: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x374b08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x374b0c: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x374b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x374b10: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x374b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x374b14: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x374b14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x374b18: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x374b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x374b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x374B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374B1Cu;
        // 0x374b20: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374B24u;
    // 0x374b24: 0x0  nop
    ctx->pc = 0x374b24u;
    // NOP
    ctx->pc = 0x374b28u;
}
