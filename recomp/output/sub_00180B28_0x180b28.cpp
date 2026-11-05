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

// Function: sub_00180B28
// Address: 0x180b28 - 0x180c30
void sub_00180B28_0x180b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180B28_0x180b28");
#endif

    switch (ctx->pc) {
        case 0x180c14u: goto label_180c14;
        case 0x180c20u: goto label_180c20;
        default: break;
    }

    ctx->pc = 0x180b28u;

    // 0x180b28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x180b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x180b2c: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x180b2cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180b30: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x180b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x180b34: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x180b34u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180b38: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x180b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x180b3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x180b3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180b40: 0x28a2000c  slti        $v0, $a1, 0xC
    ctx->pc = 0x180b40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x180b44: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x180B44u;
    {
        const bool branch_taken_0x180b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x180B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B44u;
        // 0x180b48: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180b44) {
            ctx->pc = 0x180B54u;
            goto label_180b54;
        }
    }
    ctx->pc = 0x180B4Cu;
    // 0x180b4c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x180B4Cu;
    {
        const bool branch_taken_0x180b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B4Cu;
        // 0x180b50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180b4c) {
            ctx->pc = 0x180C20u;
            goto label_180c20;
        }
    }
    ctx->pc = 0x180B54u;
label_180b54:
    // 0x180b54: 0x24a3fffd  addiu       $v1, $a1, -0x3
    ctx->pc = 0x180b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967293));
    // 0x180b58: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x180b58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x180b5c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x180B5Cu;
    {
        const bool branch_taken_0x180b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B5Cu;
        // 0x180b60: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180b5c) {
            ctx->pc = 0x180BD4u;
            goto label_180bd4;
        }
    }
    ctx->pc = 0x180B64u;
    // 0x180b64: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x180b64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x180b68: 0x2442f760  addiu       $v0, $v0, -0x8A0
    ctx->pc = 0x180b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965088));
    // 0x180b6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x180b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x180b70: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x180b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x180b74: 0x800008  jr          $a0
    ctx->pc = 0x180B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180B7Cu: goto label_180b7c;
            case 0x180B8Cu: goto label_180b8c;
            case 0x180BA4u: goto label_180ba4;
            case 0x180BBCu: goto label_180bbc;
            case 0x180BD4u: goto label_180bd4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180B74u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x180B7Cu;
label_180b7c:
    // 0x180b7c: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x180b7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x180b80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x180b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x180b84: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x180B84u;
    {
        const bool branch_taken_0x180b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B84u;
        // 0x180b88: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180b84) {
            ctx->pc = 0x180BD4u;
            goto label_180bd4;
        }
    }
    ctx->pc = 0x180B8Cu;
label_180b8c:
    // 0x180b8c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x180b8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x180b90: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x180b90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x180b94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x180b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x180b98: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x180b98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x180b9c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x180B9Cu;
    {
        const bool branch_taken_0x180b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180B9Cu;
        // 0x180ba0: 0xa2020000  sb          $v0, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180b9c) {
            ctx->pc = 0x180BD0u;
            goto label_180bd0;
        }
    }
    ctx->pc = 0x180BA4u;
label_180ba4:
    // 0x180ba4: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x180ba4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x180ba8: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x180ba8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x180bac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x180bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x180bb0: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x180bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x180bb4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x180BB4u;
    {
        const bool branch_taken_0x180bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180BB4u;
        // 0x180bb8: 0xa2020001  sb          $v0, 0x1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180bb4) {
            ctx->pc = 0x180BD0u;
            goto label_180bd0;
        }
    }
    ctx->pc = 0x180BBCu;
label_180bbc:
    // 0x180bbc: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x180bbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x180bc0: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x180bc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x180bc4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x180bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x180bc8: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x180bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x180bcc: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x180bccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_180bd0:
    // 0x180bd0: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x180bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
label_180bd4:
    // 0x180bd4: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x180bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x180bd8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x180bd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180bdc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x180bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x180be0: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x180be0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180be4: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x180be4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180be8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x180be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180bec: 0x68430037  ldl         $v1, 0x37($v0)
    ctx->pc = 0x180becu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x180bf0: 0x6c430030  ldr         $v1, 0x30($v0)
    ctx->pc = 0x180bf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x180bf4: 0x684a003f  ldl         $t2, 0x3F($v0)
    ctx->pc = 0x180bf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x180bf8: 0x6c4a0038  ldr         $t2, 0x38($v0)
    ctx->pc = 0x180bf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x180bfc: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x180bfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x180c00: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x180c00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x180c04: 0xb3aa000f  sdl         $t2, 0xF($sp)
    ctx->pc = 0x180c04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x180c08: 0xb7aa0008  sdr         $t2, 0x8($sp)
    ctx->pc = 0x180c08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x180c0c: 0xc06033e  jal         func_180CF8
    ctx->pc = 0x180C0Cu;
    SET_GPR_U32(ctx, 31, 0x180C14u);
    ctx->pc = 0x180C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180C0Cu;
    // 0x180c10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180CF8u, 0x180C0Cu, 0x180C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180C14u;
label_180c14:
    // 0x180c14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x180c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180c18: 0xc060316  jal         func_180C58
    ctx->pc = 0x180C18u;
    SET_GPR_U32(ctx, 31, 0x180C20u);
    ctx->pc = 0x180C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180C18u;
    // 0x180c1c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180C58u, 0x180C18u, 0x180C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180C20u;
label_180c20:
    // 0x180c20: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x180c20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180c24: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x180c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x180c28: 0x3e00008  jr          $ra
    ctx->pc = 0x180C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180C28u;
        // 0x180c2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180C28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180C30u;
}
