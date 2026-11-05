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

// Function: sub_00119AD8
// Address: 0x119ad8 - 0x119b68
void sub_00119AD8_0x119ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119AD8_0x119ad8");
#endif

    switch (ctx->pc) {
        case 0x119b04u: goto label_119b04;
        case 0x119b20u: goto label_119b20;
        case 0x119b4cu: goto label_119b4c;
        default: break;
    }

    ctx->pc = 0x119ad8u;

    // 0x119ad8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x119ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x119adc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x119adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x119ae0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x119ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x119ae4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x119ae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119ae8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x119ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x119aec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x119aecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119af0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x119af0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119af4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x119af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x119af8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x119af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x119afc: 0xc046bc4  jal         func_11AF10
    ctx->pc = 0x119AFCu;
    SET_GPR_U32(ctx, 31, 0x119B04u);
    ctx->pc = 0x119B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119AFCu;
    // 0x119b00: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AF10u, 0x119AFCu, 0x119B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119B04u;
label_119b04:
    // 0x119b04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x119b04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119b08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x119b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119b0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x119b0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119b10: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x119b10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119b14: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x119b14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119b18: 0xc046b42  jal         func_11AD08
    ctx->pc = 0x119B18u;
    SET_GPR_U32(ctx, 31, 0x119B20u);
    ctx->pc = 0x119B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119B18u;
    // 0x119b1c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11AD08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11AD08u, 0x119B18u, 0x119B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119B20u;
label_119b20:
    // 0x119b20: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x119b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x119b24: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x119b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x119b28: 0x2022018  mult        $a0, $s0, $v0
    ctx->pc = 0x119b28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x119b2c: 0x918021  addu        $s0, $a0, $s1
    ctx->pc = 0x119b2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x119b30: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x119b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x119b34: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x119B34u;
    {
        const bool branch_taken_0x119b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x119B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119B34u;
        // 0x119b38: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119b34) {
            ctx->pc = 0x119B4Cu;
            goto label_119b4c;
        }
    }
    ctx->pc = 0x119B3Cu;
    // 0x119b3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x119b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119b40: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x119b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x119b44: 0xc0a34fe  jal         func_28D3F8
    ctx->pc = 0x119B44u;
    SET_GPR_U32(ctx, 31, 0x119B4Cu);
    ctx->pc = 0x119B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119B44u;
    // 0x119b48: 0xc44c0004  lwc1        $f12, 0x4($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D3F8u, 0x119B44u, 0x119B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119B4Cu;
label_119b4c:
    // 0x119b4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x119b4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119b50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x119b50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x119b54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x119b54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x119b58: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x119b58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x119b5c: 0x3e00008  jr          $ra
    ctx->pc = 0x119B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119B5Cu;
        // 0x119b60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119B5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119B64u;
    // 0x119b64: 0x0  nop
    ctx->pc = 0x119b64u;
    // NOP
    ctx->pc = 0x119b68u;
}
