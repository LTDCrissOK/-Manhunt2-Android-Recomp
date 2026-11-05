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

// Function: sub_00244BA0
// Address: 0x244ba0 - 0x244d08
void sub_00244BA0_0x244ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244BA0_0x244ba0");
#endif

    switch (ctx->pc) {
        case 0x244bccu: goto label_244bcc;
        case 0x244be4u: goto label_244be4;
        case 0x244becu: goto label_244bec;
        case 0x244c34u: goto label_244c34;
        case 0x244c48u: goto label_244c48;
        case 0x244c58u: goto label_244c58;
        case 0x244c94u: goto label_244c94;
        case 0x244cc4u: goto label_244cc4;
        case 0x244cd8u: goto label_244cd8;
        case 0x244cecu: goto label_244cec;
        default: break;
    }

    ctx->pc = 0x244ba0u;

    // 0x244ba0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x244ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x244ba4: 0x24050445  addiu       $a1, $zero, 0x445
    ctx->pc = 0x244ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1093));
    // 0x244ba8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x244ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x244bac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x244bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x244bb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x244bb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244bb4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x244bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x244bb8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x244bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x244bbc: 0x8e020338  lw          $v0, 0x338($s0)
    ctx->pc = 0x244bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x244bc0: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x244bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x244bc4: 0xc0c3254  jal         func_30C950
    ctx->pc = 0x244BC4u;
    SET_GPR_U32(ctx, 31, 0x244BCCu);
    ctx->pc = 0x244BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244BC4u;
    // 0x244bc8: 0x8c5200a0  lw          $s2, 0xA0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C950u, 0x244BC4u, 0x244BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244BCCu;
label_244bcc:
    // 0x244bcc: 0x8e030338  lw          $v1, 0x338($s0)
    ctx->pc = 0x244bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x244bd0: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x244bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
    // 0x244bd4: 0x24a56cf0  addiu       $a1, $a1, 0x6CF0
    ctx->pc = 0x244bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27888));
    // 0x244bd8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x244bd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244bdc: 0xc073fde  jal         func_1CFF78
    ctx->pc = 0x244BDCu;
    SET_GPR_U32(ctx, 31, 0x244BE4u);
    ctx->pc = 0x244BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244BDCu;
    // 0x244be0: 0x8c6400a0  lw          $a0, 0xA0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF78u, 0x244BDCu, 0x244BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244BE4u;
label_244be4:
    // 0x244be4: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x244BE4u;
    SET_GPR_U32(ctx, 31, 0x244BECu);
    ctx->pc = 0x244BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244BE4u;
    // 0x244be8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x244BE4u, 0x244BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244BECu;
label_244bec:
    // 0x244bec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x244becu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244bf0: 0x5220003f  beql        $s1, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x244BF0u;
    {
        const bool branch_taken_0x244bf0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x244bf0) {
            ctx->pc = 0x244BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244BF0u;
            // 0x244bf4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244CF0u;
            goto label_244cf0;
        }
    }
    ctx->pc = 0x244BF8u;
    // 0x244bf8: 0x8e030338  lw          $v1, 0x338($s0)
    ctx->pc = 0x244bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x244bfc: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x244bfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x244c00: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x244c00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x244c04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x244c04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x244c08: 0x8c6200a0  lw          $v0, 0xA0($v1)
    ctx->pc = 0x244c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x244c0c: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x244c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244c10: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x244c10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244c14: 0x0  nop
    ctx->pc = 0x244c14u;
    // NOP
    // 0x244c18: 0x45000031  bc1f        . + 4 + (0x31 << 2)
    ctx->pc = 0x244C18u;
    {
        const bool branch_taken_0x244c18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x244C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C18u;
        // 0x244c1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244c18) {
            ctx->pc = 0x244CE0u;
            goto label_244ce0;
        }
    }
    ctx->pc = 0x244C20u;
    // 0x244c20: 0x8e250264  lw          $a1, 0x264($s1)
    ctx->pc = 0x244c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x244c24: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x244C24u;
    {
        const bool branch_taken_0x244c24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x244C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C24u;
        // 0x244c28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244c24) {
            ctx->pc = 0x244C34u;
            goto label_244c34;
        }
    }
    ctx->pc = 0x244C2Cu;
    // 0x244c2c: 0xc0984bc  jal         func_2612F0
    ctx->pc = 0x244C2Cu;
    SET_GPR_U32(ctx, 31, 0x244C34u);
    ctx->pc = 0x244C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244C2Cu;
    // 0x244c30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2612F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2612F0u, 0x244C2Cu, 0x244C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244C34u;
label_244c34:
    // 0x244c34: 0x8e24025c  lw          $a0, 0x25C($s1)
    ctx->pc = 0x244c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
    // 0x244c38: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x244C38u;
    {
        const bool branch_taken_0x244c38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x244c38) {
            ctx->pc = 0x244C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244C38u;
            // 0x244c3c: 0x8e2200b8  lw          $v0, 0xB8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244C5Cu;
            goto label_244c5c;
        }
    }
    ctx->pc = 0x244C40u;
    // 0x244c40: 0xc073e86  jal         func_1CFA18
    ctx->pc = 0x244C40u;
    SET_GPR_U32(ctx, 31, 0x244C48u);
    ctx->pc = 0x244C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244C40u;
    // 0x244c44: 0xc64c001c  lwc1        $f12, 0x1C($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x244C40u, 0x244C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244C48u;
label_244c48:
    // 0x244c48: 0x8e24025c  lw          $a0, 0x25C($s1)
    ctx->pc = 0x244c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
    // 0x244c4c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x244c4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x244c50: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x244C50u;
    SET_GPR_U32(ctx, 31, 0x244C58u);
    ctx->pc = 0x244C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244C50u;
    // 0x244c54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x244C50u, 0x244C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244C58u;
label_244c58:
    // 0x244c58: 0x8e2200b8  lw          $v0, 0xB8($s1)
    ctx->pc = 0x244c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_244c5c:
    // 0x244c5c: 0xc641001c  lwc1        $f1, 0x1C($s2)
    ctx->pc = 0x244c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x244c60: 0xc440024c  lwc1        $f0, 0x24C($v0)
    ctx->pc = 0x244c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x244c64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x244c64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x244c68: 0x0  nop
    ctx->pc = 0x244c68u;
    // NOP
    // 0x244c6c: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x244C6Cu;
    {
        const bool branch_taken_0x244c6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x244C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C6Cu;
        // 0x244c70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244c6c) {
            ctx->pc = 0x244CCCu;
            goto label_244ccc;
        }
    }
    ctx->pc = 0x244C74u;
    // 0x244c74: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x244c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x244c78: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x244c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x244c7c: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x244C7Cu;
    {
        const bool branch_taken_0x244c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x244c7c) {
            ctx->pc = 0x244C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244C7Cu;
            // 0x244c80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244CF0u;
            goto label_244cf0;
        }
    }
    ctx->pc = 0x244C84u;
    // 0x244c84: 0x8e020338  lw          $v0, 0x338($s0)
    ctx->pc = 0x244c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x244c88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x244c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244c8c: 0xc091b3c  jal         func_246CF0
    ctx->pc = 0x244C8Cu;
    SET_GPR_U32(ctx, 31, 0x244C94u);
    ctx->pc = 0x244C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244C8Cu;
    // 0x244c90: 0x8c4400a0  lw          $a0, 0xA0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246CF0u, 0x244C8Cu, 0x244C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244C94u;
label_244c94:
    // 0x244c94: 0x8e030338  lw          $v1, 0x338($s0)
    ctx->pc = 0x244c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x244c98: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x244c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x244c9c: 0x8c6200a0  lw          $v0, 0xA0($v1)
    ctx->pc = 0x244c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x244ca0: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x244ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x244ca4: 0x8e030338  lw          $v1, 0x338($s0)
    ctx->pc = 0x244ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x244ca8: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x244ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x244cac: 0x54440010  bnel        $v0, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x244CACu;
    {
        const bool branch_taken_0x244cac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x244cac) {
            ctx->pc = 0x244CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244CACu;
            // 0x244cb0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244CF0u;
            goto label_244cf0;
        }
    }
    ctx->pc = 0x244CB4u;
    // 0x244cb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244cb8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x244cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x244cbc: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x244CBCu;
    SET_GPR_U32(ctx, 31, 0x244CC4u);
    ctx->pc = 0x244CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244CBCu;
    // 0x244cc0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x244CBCu, 0x244CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244CC4u;
label_244cc4:
    // 0x244cc4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x244CC4u;
    {
        const bool branch_taken_0x244cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244CC4u;
        // 0x244cc8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244cc4) {
            ctx->pc = 0x244CF0u;
            goto label_244cf0;
        }
    }
    ctx->pc = 0x244CCCu;
label_244ccc:
    // 0x244ccc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x244cccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x244cd0: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x244CD0u;
    SET_GPR_U32(ctx, 31, 0x244CD8u);
    ctx->pc = 0x244CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244CD0u;
    // 0x244cd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x244CD0u, 0x244CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244CD8u;
label_244cd8:
    // 0x244cd8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x244CD8u;
    {
        const bool branch_taken_0x244cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244CD8u;
        // 0x244cdc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244cd8) {
            ctx->pc = 0x244CF0u;
            goto label_244cf0;
        }
    }
    ctx->pc = 0x244CE0u;
label_244ce0:
    // 0x244ce0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x244ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x244ce4: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x244CE4u;
    SET_GPR_U32(ctx, 31, 0x244CECu);
    ctx->pc = 0x244CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244CE4u;
    // 0x244ce8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x244CE4u, 0x244CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244CECu;
label_244cec:
    // 0x244cec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x244cecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_244cf0:
    // 0x244cf0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x244cf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x244cf4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x244cf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x244cf8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x244cf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x244cfc: 0x3e00008  jr          $ra
    ctx->pc = 0x244CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244CFCu;
        // 0x244d00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244CFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244D04u;
    // 0x244d04: 0x0  nop
    ctx->pc = 0x244d04u;
    // NOP
    ctx->pc = 0x244d08u;
}
