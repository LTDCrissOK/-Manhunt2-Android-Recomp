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

// Function: sub_002D9AD8
// Address: 0x2d9ad8 - 0x2d9d40
void sub_002D9AD8_0x2d9ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9AD8_0x2d9ad8");
#endif

    switch (ctx->pc) {
        case 0x2d9b48u: goto label_2d9b48;
        case 0x2d9b74u: goto label_2d9b74;
        case 0x2d9b88u: goto label_2d9b88;
        case 0x2d9b98u: goto label_2d9b98;
        case 0x2d9ba0u: goto label_2d9ba0;
        case 0x2d9bb4u: goto label_2d9bb4;
        case 0x2d9bbcu: goto label_2d9bbc;
        case 0x2d9bc8u: goto label_2d9bc8;
        case 0x2d9c60u: goto label_2d9c60;
        case 0x2d9c6cu: goto label_2d9c6c;
        case 0x2d9c7cu: goto label_2d9c7c;
        case 0x2d9c94u: goto label_2d9c94;
        case 0x2d9ca0u: goto label_2d9ca0;
        case 0x2d9cc8u: goto label_2d9cc8;
        case 0x2d9cd4u: goto label_2d9cd4;
        default: break;
    }

    ctx->pc = 0x2d9ad8u;

    // 0x2d9ad8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2d9ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2d9adc: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x2d9adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x2d9ae0: 0xffb700c8  sd          $s7, 0xC8($sp)
    ctx->pc = 0x2d9ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 23));
    // 0x2d9ae4: 0x24424778  addiu       $v0, $v0, 0x4778
    ctx->pc = 0x2d9ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18296));
    // 0x2d9ae8: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x2d9ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x2d9aec: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2d9aecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9af0: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x2d9af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x2d9af4: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x2d9af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x2d9af8: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x2d9af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x2d9afc: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x2d9afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x2d9b00: 0xffb500b8  sd          $s5, 0xB8($sp)
    ctx->pc = 0x2d9b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 21));
    // 0x2d9b04: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x2d9b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x2d9b08: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x2d9b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
    // 0x2d9b0c: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x2d9b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
    // 0x2d9b10: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2d9b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x2d9b14: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2d9b14u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4B477Cu));
    // 0x2d9b18: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2d9b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x2d9b1c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2d9b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2d9b20: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2d9b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2d9b24: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2d9b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x2d9b28: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x2d9b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x2d9b2c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2d9b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2d9b30: 0x10600076  beqz        $v1, . + 4 + (0x76 << 2)
    ctx->pc = 0x2D9B30u;
    {
        const bool branch_taken_0x2d9b30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9B30u;
        // 0x2d9b34: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9b30) {
            ctx->pc = 0x2D9D0Cu;
            goto label_2d9d0c;
        }
    }
    ctx->pc = 0x2D9B38u;
    // 0x2d9b38: 0x3c1e0047  lui         $fp, 0x47
    ctx->pc = 0x2d9b38u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)71 << 16));
    // 0x2d9b3c: 0x27b60020  addiu       $s6, $sp, 0x20
    ctx->pc = 0x2d9b3cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d9b40: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2d9b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d9b44: 0x0  nop
    ctx->pc = 0x2d9b44u;
    // NOP
label_2d9b48:
    // 0x2d9b48: 0x8ee40000  lw          $a0, 0x0($s7)
    ctx->pc = 0x2d9b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2d9b4c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x2d9b4cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d9b50: 0x27c71388  addiu       $a3, $fp, 0x1388
    ctx->pc = 0x2d9b50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 5000));
    // 0x2d9b54: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x2d9b54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d9b58: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x2d9b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d9b5c: 0x80e30008  lb          $v1, 0x8($a3)
    ctx->pc = 0x2d9b5cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2d9b60: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x2d9b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d9b64: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x2d9b64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d9b68: 0xa3a30028  sb          $v1, 0x28($sp)
    ctx->pc = 0x2d9b68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 3));
    // 0x2d9b6c: 0xc0d758e  jal         func_35D638
    ctx->pc = 0x2D9B6Cu;
    SET_GPR_U32(ctx, 31, 0x2D9B74u);
    ctx->pc = 0x2D9B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9B6Cu;
    // 0x2d9b70: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D638u, 0x2D9B6Cu, 0x2D9B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9B74u;
label_2d9b74:
    // 0x2d9b74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d9b74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9b78: 0x12200056  beqz        $s1, . + 4 + (0x56 << 2)
    ctx->pc = 0x2D9B78u;
    {
        const bool branch_taken_0x2d9b78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9B78u;
        // 0x2d9b7c: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9b78) {
            ctx->pc = 0x2D9CD4u;
            goto label_2d9cd4;
        }
    }
    ctx->pc = 0x2D9B80u;
    // 0x2d9b80: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x2D9B80u;
    SET_GPR_U32(ctx, 31, 0x2D9B88u);
    ctx->pc = 0x2D9B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9B80u;
    // 0x2d9b84: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x2D9B80u, 0x2D9B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9B88u;
label_2d9b88:
    // 0x2d9b88: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x2d9b88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9b8c: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x2d9b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2d9b90: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x2D9B90u;
    SET_GPR_U32(ctx, 31, 0x2D9B98u);
    ctx->pc = 0x2D9B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9B90u;
    // 0x2d9b94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x2D9B90u, 0x2D9B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9B98u;
label_2d9b98:
    // 0x2d9b98: 0xc0d75ae  jal         func_35D6B8
    ctx->pc = 0x2D9B98u;
    SET_GPR_U32(ctx, 31, 0x2D9BA0u);
    ctx->pc = 0x2D9B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9B98u;
    // 0x2d9b9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D6B8u, 0x2D9B98u, 0x2D9BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9BA0u;
label_2d9ba0:
    // 0x2d9ba0: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x2d9ba0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2d9ba4: 0x8e450228  lw          $a1, 0x228($s2)
    ctx->pc = 0x2d9ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 552)));
    // 0x2d9ba8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d9ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9bac: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x2D9BACu;
    SET_GPR_U32(ctx, 31, 0x2D9BB4u);
    ctx->pc = 0x2D9BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9BACu;
    // 0x2d9bb0: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x2D9BACu, 0x2D9BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9BB4u;
label_2d9bb4:
    // 0x2d9bb4: 0xc0d75ae  jal         func_35D6B8
    ctx->pc = 0x2D9BB4u;
    SET_GPR_U32(ctx, 31, 0x2D9BBCu);
    ctx->pc = 0x2D9BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9BB4u;
    // 0x2d9bb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D6B8u, 0x2D9BB4u, 0x2D9BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9BBCu;
label_2d9bbc:
    // 0x2d9bbc: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2d9bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d9bc0: 0xc0d758e  jal         func_35D638
    ctx->pc = 0x2D9BC0u;
    SET_GPR_U32(ctx, 31, 0x2D9BC8u);
    ctx->pc = 0x2D9BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9BC0u;
    // 0x2d9bc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D638u, 0x2D9BC0u, 0x2D9BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9BC8u;
label_2d9bc8:
    // 0x2d9bc8: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x2D9BC8u;
    {
        const bool branch_taken_0x2d9bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9BC8u;
        // 0x2d9bcc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9bc8) {
            ctx->pc = 0x2D9C8Cu;
            goto label_2d9c8c;
        }
    }
    ctx->pc = 0x2D9BD0u;
    // 0x2d9bd0: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2d9bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2d9bd4: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x2d9bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x2d9bd8: 0x244713f0  addiu       $a3, $v0, 0x13F0
    ctx->pc = 0x2d9bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 5104));
    // 0x2d9bdc: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x2d9bdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2d9be0: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x2d9be0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2d9be4: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x2d9be4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2d9be8: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x2d9be8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2d9bec: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x2d9becu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2d9bf0: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x2d9bf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2d9bf4: 0xb3a40057  sdl         $a0, 0x57($sp)
    ctx->pc = 0x2d9bf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d9bf8: 0xb7a40050  sdr         $a0, 0x50($sp)
    ctx->pc = 0x2d9bf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d9bfc: 0xb3a5005f  sdl         $a1, 0x5F($sp)
    ctx->pc = 0x2d9bfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d9c00: 0xb7a50058  sdr         $a1, 0x58($sp)
    ctx->pc = 0x2d9c00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d9c04: 0xb3a60067  sdl         $a2, 0x67($sp)
    ctx->pc = 0x2d9c04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d9c08: 0xb7a60060  sdr         $a2, 0x60($sp)
    ctx->pc = 0x2d9c08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d9c0c: 0x8ce40018  lw          $a0, 0x18($a3)
    ctx->pc = 0x2d9c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x471408u));
    // 0x2d9c10: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x2d9c10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
    // 0x2d9c14: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2d9c14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9c18: 0x24661470  addiu       $a2, $v1, 0x1470
    ctx->pc = 0x2d9c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 5232));
    // 0x2d9c1c: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x2d9c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d9c20: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x2d9c20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d9c24: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x2d9c24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2d9c28: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x2d9c28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2d9c2c: 0x68c50017  ldl         $a1, 0x17($a2)
    ctx->pc = 0x2d9c2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2d9c30: 0x6cc50010  ldr         $a1, 0x10($a2)
    ctx->pc = 0x2d9c30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2d9c34: 0xb3a20077  sdl         $v0, 0x77($sp)
    ctx->pc = 0x2d9c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d9c38: 0xb7a20070  sdr         $v0, 0x70($sp)
    ctx->pc = 0x2d9c38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d9c3c: 0xb3a4007f  sdl         $a0, 0x7F($sp)
    ctx->pc = 0x2d9c3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d9c40: 0xb7a40078  sdr         $a0, 0x78($sp)
    ctx->pc = 0x2d9c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d9c44: 0xb3a50087  sdl         $a1, 0x87($sp)
    ctx->pc = 0x2d9c44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d9c48: 0xb7a50080  sdr         $a1, 0x80($sp)
    ctx->pc = 0x2d9c48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d9c4c: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x2d9c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x471488u));
    // 0x2d9c50: 0xafa20088  sw          $v0, 0x88($sp)
    ctx->pc = 0x2d9c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
    // 0x2d9c54: 0x27b20070  addiu       $s2, $sp, 0x70
    ctx->pc = 0x2d9c54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2d9c58: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x2d9c58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d9c5c: 0x0  nop
    ctx->pc = 0x2d9c5cu;
    // NOP
label_2d9c60:
    // 0x2d9c60: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2d9c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2d9c64: 0xc0d758e  jal         func_35D638
    ctx->pc = 0x2D9C64u;
    SET_GPR_U32(ctx, 31, 0x2D9C6Cu);
    ctx->pc = 0x2D9C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9C64u;
    // 0x2d9c68: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D638u, 0x2D9C64u, 0x2D9C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9C6Cu;
label_2d9c6c:
    // 0x2d9c6c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2d9c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d9c70: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x2d9c70u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d9c74: 0xc0d758e  jal         func_35D638
    ctx->pc = 0x2D9C74u;
    SET_GPR_U32(ctx, 31, 0x2D9C7Cu);
    ctx->pc = 0x2D9C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9C74u;
    // 0x2d9c78: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D638u, 0x2D9C74u, 0x2D9C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9C7Cu;
label_2d9c7c:
    // 0x2d9c7c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D9C7Cu;
    {
        const bool branch_taken_0x2d9c7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9C7Cu;
        // 0x2d9c80: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9c7c) {
            ctx->pc = 0x2D9CA8u;
            goto label_2d9ca8;
        }
    }
    ctx->pc = 0x2D9C84u;
    // 0x2d9c84: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D9C84u;
    {
        const bool branch_taken_0x2d9c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9C84u;
        // 0x2d9c88: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9c84) {
            ctx->pc = 0x2D9CA8u;
            goto label_2d9ca8;
        }
    }
    ctx->pc = 0x2D9C8Cu;
label_2d9c8c:
    // 0x2d9c8c: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2D9C8Cu;
    SET_GPR_U32(ctx, 31, 0x2D9C94u);
    ctx->pc = 0x2D9C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9C8Cu;
    // 0x2d9c90: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2D9C8Cu, 0x2D9C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9C94u;
label_2d9c94:
    // 0x2d9c94: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d9c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9c98: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2D9C98u;
    SET_GPR_U32(ctx, 31, 0x2D9CA0u);
    ctx->pc = 0x2D9C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9C98u;
    // 0x2d9c9c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2D9C98u, 0x2D9CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9CA0u;
label_2d9ca0:
    // 0x2d9ca0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2D9CA0u;
    {
        const bool branch_taken_0x2d9ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9CA0u;
        // 0x2d9ca4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9ca0) {
            ctx->pc = 0x2D9D10u;
            goto label_2d9d10;
        }
    }
    ctx->pc = 0x2D9CA8u;
label_2d9ca8:
    // 0x2d9ca8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2d9ca8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2d9cac: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2d9cacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2d9cb0: 0x2e620007  sltiu       $v0, $s3, 0x7
    ctx->pc = 0x2d9cb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2d9cb4: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2D9CB4u;
    {
        const bool branch_taken_0x2d9cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9CB4u;
        // 0x2d9cb8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9cb4) {
            ctx->pc = 0x2D9C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d9c60;
        }
    }
    ctx->pc = 0x2D9CBCu;
    // 0x2d9cbc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d9cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9cc0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2D9CC0u;
    SET_GPR_U32(ctx, 31, 0x2D9CC8u);
    ctx->pc = 0x2D9CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9CC0u;
    // 0x2d9cc4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2D9CC0u, 0x2D9CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9CC8u;
label_2d9cc8:
    // 0x2d9cc8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d9cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9ccc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2D9CCCu;
    SET_GPR_U32(ctx, 31, 0x2D9CD4u);
    ctx->pc = 0x2D9CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9CCCu;
    // 0x2d9cd0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2D9CCCu, 0x2D9CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9CD4u;
label_2d9cd4:
    // 0x2d9cd4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2d9cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2d9cd8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D9CD8u;
    {
        const bool branch_taken_0x2d9cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9cd8) {
            ctx->pc = 0x2D9CDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9CD8u;
            // 0x2d9cdc: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9CECu;
            goto label_2d9cec;
        }
    }
    ctx->pc = 0x2D9CE0u;
    // 0x2d9ce0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2d9ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2d9ce4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D9CE4u;
    {
        const bool branch_taken_0x2d9ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9CE4u;
        // 0x2d9ce8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9ce4) {
            ctx->pc = 0x2D9CFCu;
            goto label_2d9cfc;
        }
    }
    ctx->pc = 0x2D9CECu;
label_2d9cec:
    // 0x2d9cec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D9CECu;
    {
        const bool branch_taken_0x2d9cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9CECu;
        // 0x2d9cf0: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9cec) {
            ctx->pc = 0x2D9D00u;
            goto label_2d9d00;
        }
    }
    ctx->pc = 0x2D9CF4u;
    // 0x2d9cf4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x2d9cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2d9cf8: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2d9cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_2d9cfc:
    // 0x2d9cfc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2d9cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2d9d00:
    // 0x2d9d00: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2d9d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2d9d04: 0x1462ff90  bne         $v1, $v0, . + 4 + (-0x70 << 2)
    ctx->pc = 0x2D9D04u;
    {
        const bool branch_taken_0x2d9d04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D9D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9D04u;
        // 0x2d9d08: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9d04) {
            ctx->pc = 0x2D9B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d9b48;
        }
    }
    ctx->pc = 0x2D9D0Cu;
label_2d9d0c:
    // 0x2d9d0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d9d0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d9d10:
    // 0x2d9d10: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x2d9d10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d9d14: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x2d9d14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2d9d18: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x2d9d18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d9d1c: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x2d9d1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2d9d20: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x2d9d20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d9d24: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x2d9d24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2d9d28: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x2d9d28u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d9d2c: 0xdfb700c8  ld          $s7, 0xC8($sp)
    ctx->pc = 0x2d9d2cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x2d9d30: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x2d9d30u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d9d34: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x2d9d34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2d9d38: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9D38u;
        // 0x2d9d3c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9D40u;
}
