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

// Function: sub_0013EAC0
// Address: 0x13eac0 - 0x13ec90
void sub_0013EAC0_0x13eac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013EAC0_0x13eac0");
#endif

    switch (ctx->pc) {
        case 0x13eaf8u: goto label_13eaf8;
        case 0x13eb40u: goto label_13eb40;
        case 0x13eb88u: goto label_13eb88;
        case 0x13ebe0u: goto label_13ebe0;
        default: break;
    }

    ctx->pc = 0x13eac0u;

    // 0x13eac0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x13eac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x13eac4: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x13eac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x13eac8: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x13eac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x13eacc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13eaccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ead0: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x13ead0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x13ead4: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x13ead4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x13ead8: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x13ead8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x13eadc: 0xffb500b8  sd          $s5, 0xB8($sp)
    ctx->pc = 0x13eadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 21));
    // 0x13eae0: 0xffb600c0  sd          $s6, 0xC0($sp)
    ctx->pc = 0x13eae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 22));
    // 0x13eae4: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x13eae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
    // 0x13eae8: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x13eae8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x13eaec: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x13eaecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x13eaf0: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x13EAF0u;
    SET_GPR_U32(ctx, 31, 0x13EAF8u);
    ctx->pc = 0x13EAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EAF0u;
    // 0x13eaf4: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x13EAF0u, 0x13EAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EAF8u;
label_13eaf8:
    // 0x13eaf8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13eaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x13eafc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13eafcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13eb00: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x13eb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x13eb04: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x13eb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13eb08: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x13eb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x13eb0c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x13eb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x13eb10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13eb10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13eb14: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x13eb14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13eb18: 0x8c820108  lw          $v0, 0x108($a0)
    ctx->pc = 0x13eb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x13eb1c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13EB1Cu;
    {
        const bool branch_taken_0x13eb1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13eb1c) {
            ctx->pc = 0x13EB20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EB1Cu;
            // 0x13eb20: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EB2Cu;
            goto label_13eb2c;
        }
    }
    ctx->pc = 0x13EB24u;
    // 0x13eb24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13EB24u;
    {
        const bool branch_taken_0x13eb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EB24u;
        // 0x13eb28: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eb24) {
            ctx->pc = 0x13EB34u;
            goto label_13eb34;
        }
    }
    ctx->pc = 0x13EB2Cu;
label_13eb2c:
    // 0x13eb2c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13eb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13eb30: 0x24740070  addiu       $s4, $v1, 0x70
    ctx->pc = 0x13eb30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_13eb34:
    // 0x13eb34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13eb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eb38: 0xc04f872  jal         func_13E1C8
    ctx->pc = 0x13EB38u;
    SET_GPR_U32(ctx, 31, 0x13EB40u);
    ctx->pc = 0x13EB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EB38u;
    // 0x13eb3c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E1C8u, 0x13EB38u, 0x13EB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EB40u;
label_13eb40:
    // 0x13eb40: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13eb40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13eb44: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x13EB44u;
    {
        const bool branch_taken_0x13eb44 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EB44u;
        // 0x13eb48: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eb44) {
            ctx->pc = 0x13EB5Cu;
            goto label_13eb5c;
        }
    }
    ctx->pc = 0x13EB4Cu;
    // 0x13eb4c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x13eb4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x13eb50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13eb50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13eb54: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x13EB54u;
    {
        const bool branch_taken_0x13eb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EB54u;
        // 0x13eb58: 0xdfb10098  ld          $s1, 0x98($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eb54) {
            ctx->pc = 0x13EC68u;
            goto label_13ec68;
        }
    }
    ctx->pc = 0x13EB5Cu;
label_13eb5c:
    // 0x13eb5c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x13eb5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x13eb60: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x13eb60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13eb64: 0x1240003d  beqz        $s2, . + 4 + (0x3D << 2)
    ctx->pc = 0x13EB64u;
    {
        const bool branch_taken_0x13eb64 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EB64u;
        // 0x13eb68: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eb64) {
            ctx->pc = 0x13EC5Cu;
            goto label_13ec5c;
        }
    }
    ctx->pc = 0x13EB6Cu;
    // 0x13eb6c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x13eb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x13eb70: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x13eb70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x13eb74: 0x24539c14  addiu       $s3, $v0, -0x63EC
    ctx->pc = 0x13eb74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941716));
    // 0x13eb78: 0x27b60080  addiu       $s6, $sp, 0x80
    ctx->pc = 0x13eb78u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13eb7c: 0x2675fefc  addiu       $s5, $s3, -0x104
    ctx->pc = 0x13eb7cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967036));
    // 0x13eb80: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x13eb80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x13eb84: 0x0  nop
    ctx->pc = 0x13eb84u;
    // NOP
label_13eb88:
    // 0x13eb88: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x13eb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x13eb8c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13eb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13eb90: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x13EB90u;
    {
        const bool branch_taken_0x13eb90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EB90u;
        // 0x13eb94: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eb90) {
            ctx->pc = 0x13EC48u;
            goto label_13ec48;
        }
    }
    ctx->pc = 0x13EB98u;
    // 0x13eb98: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x13eb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13eb9c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13eb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13eba0: 0x5040002a  beql        $v0, $zero, . + 4 + (0x2A << 2)
    ctx->pc = 0x13EBA0u;
    {
        const bool branch_taken_0x13eba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13eba0) {
            ctx->pc = 0x13EBA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EBA0u;
            // 0x13eba4: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EC4Cu;
            goto label_13ec4c;
        }
    }
    ctx->pc = 0x13EBA8u;
    // 0x13eba8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x13eba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x13ebac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13ebacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13ebb0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x13ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x13ebb4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13ebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13ebb8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13EBB8u;
    {
        const bool branch_taken_0x13ebb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ebb8) {
            ctx->pc = 0x13EBBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EBB8u;
            // 0x13ebbc: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EBC8u;
            goto label_13ebc8;
        }
    }
    ctx->pc = 0x13EBC0u;
    // 0x13ebc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13EBC0u;
    {
        const bool branch_taken_0x13ebc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EBC0u;
        // 0x13ebc4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ebc0) {
            ctx->pc = 0x13EBD0u;
            goto label_13ebd0;
        }
    }
    ctx->pc = 0x13EBC8u;
label_13ebc8:
    // 0x13ebc8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13ebc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13ebcc: 0x24700070  addiu       $s0, $v1, 0x70
    ctx->pc = 0x13ebccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_13ebd0:
    // 0x13ebd0: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
    ctx->pc = 0x13EBD0u;
    {
        const bool branch_taken_0x13ebd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EBD0u;
        // 0x13ebd4: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ebd0) {
            ctx->pc = 0x13EC4Cu;
            goto label_13ec4c;
        }
    }
    ctx->pc = 0x13EBD8u;
    // 0x13ebd8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x13EBD8u;
    SET_GPR_U32(ctx, 31, 0x13EBE0u);
    ctx->pc = 0x13EBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EBD8u;
    // 0x13ebdc: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x13EBD8u, 0x13EBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13EBE0u;
label_13ebe0:
    // 0x13ebe0: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x13ebe0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x13ebe4: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x13ebe4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13ebe8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x13ebe8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13ebec: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x13ebecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13ebf0: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x13ebf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13ebf4: 0xc6c30004  lwc1        $f3, 0x4($s6)
    ctx->pc = 0x13ebf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13ebf8: 0xc6c40008  lwc1        $f4, 0x8($s6)
    ctx->pc = 0x13ebf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13ebfc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x13ebfcu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x13ec00: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x13ec00u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x13ec04: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x13ec04u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x13ec08: 0x46000004  c1          0x4
    ctx->pc = 0x13ec08u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x13ec0c: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x13ec0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13ec10: 0x0  nop
    ctx->pc = 0x13ec10u;
    // NOP
    // 0x13ec14: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x13EC14u;
    {
        const bool branch_taken_0x13ec14 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13EC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EC14u;
        // 0x13ec18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ec14) {
            ctx->pc = 0x13EC20u;
            goto label_13ec20;
        }
    }
    ctx->pc = 0x13EC1Cu;
    // 0x13ec1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13ec1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13ec20:
    // 0x13ec20: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x13EC20u;
    {
        const bool branch_taken_0x13ec20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ec20) {
            ctx->pc = 0x13EC24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13EC20u;
            // 0x13ec24: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13EC48u;
            goto label_13ec48;
        }
    }
    ctx->pc = 0x13EC28u;
    // 0x13ec28: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x13ec28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13ec2c: 0x0  nop
    ctx->pc = 0x13ec2cu;
    // NOP
    // 0x13ec30: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x13EC30u;
    {
        const bool branch_taken_0x13ec30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13EC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EC30u;
        // 0x13ec34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ec30) {
            ctx->pc = 0x13EC3Cu;
            goto label_13ec3c;
        }
    }
    ctx->pc = 0x13EC38u;
    // 0x13ec38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13ec38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13ec3c:
    // 0x13ec3c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13EC3Cu;
    {
        const bool branch_taken_0x13ec3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EC3Cu;
        // 0x13ec40: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ec3c) {
            ctx->pc = 0x13EC4Cu;
            goto label_13ec4c;
        }
    }
    ctx->pc = 0x13EC44u;
    // 0x13ec44: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x13ec44u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_13ec48:
    // 0x13ec48: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x13ec48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_13ec4c:
    // 0x13ec4c: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x13ec4cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13ec50: 0x232182b  sltu        $v1, $s1, $s2
    ctx->pc = 0x13ec50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x13ec54: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
    ctx->pc = 0x13EC54u;
    {
        const bool branch_taken_0x13ec54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EC54u;
        // 0x13ec58: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ec54) {
            ctx->pc = 0x13EB88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13eb88;
        }
    }
    ctx->pc = 0x13EC5Cu;
label_13ec5c:
    // 0x13ec5c: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x13ec5cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x13ec60: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x13ec60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13ec64: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x13ec64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_13ec68:
    // 0x13ec68: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x13ec68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13ec6c: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x13ec6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x13ec70: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x13ec70u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x13ec74: 0xdfb500b8  ld          $s5, 0xB8($sp)
    ctx->pc = 0x13ec74u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x13ec78: 0xdfb600c0  ld          $s6, 0xC0($sp)
    ctx->pc = 0x13ec78u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x13ec7c: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x13ec7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x13ec80: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x13ec80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x13ec84: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x13ec84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13ec88: 0x3e00008  jr          $ra
    ctx->pc = 0x13EC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EC88u;
        // 0x13ec8c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EC88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13EC90u;
}
