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

// Function: sub_00244E90
// Address: 0x244e90 - 0x245610
void sub_00244E90_0x244e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00244E90_0x244e90");
#endif

    switch (ctx->pc) {
        case 0x244ed8u: goto label_244ed8;
        case 0x244ee0u: goto label_244ee0;
        case 0x244f00u: goto label_244f00;
        case 0x244facu: goto label_244fac;
        case 0x244fc4u: goto label_244fc4;
        case 0x244fd8u: goto label_244fd8;
        case 0x245000u: goto label_245000;
        case 0x245024u: goto label_245024;
        case 0x245064u: goto label_245064;
        case 0x245088u: goto label_245088;
        case 0x2450bcu: goto label_2450bc;
        case 0x2450fcu: goto label_2450fc;
        case 0x245108u: goto label_245108;
        case 0x245124u: goto label_245124;
        case 0x245164u: goto label_245164;
        case 0x245190u: goto label_245190;
        case 0x2451c4u: goto label_2451c4;
        case 0x2451d0u: goto label_2451d0;
        case 0x245210u: goto label_245210;
        case 0x245244u: goto label_245244;
        case 0x245258u: goto label_245258;
        case 0x245274u: goto label_245274;
        case 0x245284u: goto label_245284;
        case 0x245294u: goto label_245294;
        case 0x2452e4u: goto label_2452e4;
        case 0x245370u: goto label_245370;
        case 0x2453c4u: goto label_2453c4;
        case 0x24545cu: goto label_24545c;
        case 0x245484u: goto label_245484;
        case 0x245490u: goto label_245490;
        case 0x2454ccu: goto label_2454cc;
        case 0x2454dcu: goto label_2454dc;
        case 0x2454f8u: goto label_2454f8;
        case 0x245508u: goto label_245508;
        case 0x24552cu: goto label_24552c;
        case 0x245598u: goto label_245598;
        case 0x2455dcu: goto label_2455dc;
        default: break;
    }

    ctx->pc = 0x244e90u;

    // 0x244e90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x244e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x244e94: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x244e94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
    // 0x244e98: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x244e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x244e9c: 0x24a56be0  addiu       $a1, $a1, 0x6BE0
    ctx->pc = 0x244e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27616));
    // 0x244ea0: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x244ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x244ea4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x244ea4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244ea8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x244ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x244eac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x244eacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244eb0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x244eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x244eb4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x244eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x244eb8: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x244eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x244ebc: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x244ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x244ec0: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x244ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x244ec4: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x244ec4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x244ec8: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x244ec8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x244ecc: 0x8e420338  lw          $v0, 0x338($s2)
    ctx->pc = 0x244eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
    // 0x244ed0: 0xc073fde  jal         func_1CFF78
    ctx->pc = 0x244ED0u;
    SET_GPR_U32(ctx, 31, 0x244ED8u);
    ctx->pc = 0x244ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244ED0u;
    // 0x244ed4: 0x8c4400a0  lw          $a0, 0xA0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF78u, 0x244ED0u, 0x244ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244ED8u;
label_244ed8:
    // 0x244ed8: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x244ED8u;
    SET_GPR_U32(ctx, 31, 0x244EE0u);
    ctx->pc = 0x244EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244ED8u;
    // 0x244edc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x244ED8u, 0x244EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244EE0u;
label_244ee0:
    // 0x244ee0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x244ee0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244ee4: 0x126001be  beqz        $s3, . + 4 + (0x1BE << 2)
    ctx->pc = 0x244EE4u;
    {
        const bool branch_taken_0x244ee4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x244EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244EE4u;
        // 0x244ee8: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244ee4) {
            ctx->pc = 0x2455E0u;
            goto label_2455e0;
        }
    }
    ctx->pc = 0x244EECu;
    // 0x244eec: 0x8e740274  lw          $s4, 0x274($s3)
    ctx->pc = 0x244eecu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 628)));
    // 0x244ef0: 0x128001bc  beqz        $s4, . + 4 + (0x1BC << 2)
    ctx->pc = 0x244EF0u;
    {
        const bool branch_taken_0x244ef0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x244EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244EF0u;
        // 0x244ef4: 0xdfb10038  ld          $s1, 0x38($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244ef0) {
            ctx->pc = 0x2455E4u;
            goto label_2455e4;
        }
    }
    ctx->pc = 0x244EF8u;
    // 0x244ef8: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x244EF8u;
    SET_GPR_U32(ctx, 31, 0x244F00u);
    ctx->pc = 0x244EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244EF8u;
    // 0x244efc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x244EF8u, 0x244F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244F00u;
label_244f00:
    // 0x244f00: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x244f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x244f04: 0x144001b6  bnez        $v0, . + 4 + (0x1B6 << 2)
    ctx->pc = 0x244F04u;
    {
        const bool branch_taken_0x244f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x244F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F04u;
        // 0x244f08: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244f04) {
            ctx->pc = 0x2455E0u;
            goto label_2455e0;
        }
    }
    ctx->pc = 0x244F0Cu;
    // 0x244f0c: 0x8e450338  lw          $a1, 0x338($s2)
    ctx->pc = 0x244f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
    // 0x244f10: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x244f10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244f14: 0x8e820070  lw          $v0, 0x70($s4)
    ctx->pc = 0x244f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x244f18: 0x8ca40088  lw          $a0, 0x88($a1)
    ctx->pc = 0x244f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 136)));
    // 0x244f1c: 0x2c470001  sltiu       $a3, $v0, 0x1
    ctx->pc = 0x244f1cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x244f20: 0x8e700274  lw          $s0, 0x274($s3)
    ctx->pc = 0x244f20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 628)));
    // 0x244f24: 0x2482ffee  addiu       $v0, $a0, -0x12
    ctx->pc = 0x244f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967278));
    // 0x244f28: 0x8cb500a0  lw          $s5, 0xA0($a1)
    ctx->pc = 0x244f28u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 160)));
    // 0x244f2c: 0x2c460002  sltiu       $a2, $v0, 0x2
    ctx->pc = 0x244f2cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x244f30: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x244F30u;
    {
        const bool branch_taken_0x244f30 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x244F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F30u;
        // 0x244f34: 0x8e160000  lw          $s6, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244f30) {
            ctx->pc = 0x244F4Cu;
            goto label_244f4c;
        }
    }
    ctx->pc = 0x244F38u;
    // 0x244f38: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x244f38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x244f3c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x244f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x244f40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x244f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x244f44: 0x2863015a  slti        $v1, $v1, 0x15A
    ctx->pc = 0x244f44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)346) ? 1 : 0);
    // 0x244f48: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x244f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_244f4c:
    // 0x244f4c: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x244F4Cu;
    {
        const bool branch_taken_0x244f4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x244f4c) {
            ctx->pc = 0x24506Cu;
            goto label_24506c;
        }
    }
    ctx->pc = 0x244F54u;
    // 0x244f54: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x244F54u;
    {
        const bool branch_taken_0x244f54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x244F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F54u;
        // 0x244f58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244f54) {
            ctx->pc = 0x244F90u;
            goto label_244f90;
        }
    }
    ctx->pc = 0x244F5Cu;
    // 0x244f5c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x244f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x244f60: 0x2403015b  addiu       $v1, $zero, 0x15B
    ctx->pc = 0x244f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 347));
    // 0x244f64: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x244f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x244f68: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x244f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x244f6c: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x244F6Cu;
    {
        const bool branch_taken_0x244f6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x244F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F6Cu;
        // 0x244f70: 0x2402015c  addiu       $v0, $zero, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244f6c) {
            ctx->pc = 0x244F8Cu;
            goto label_244f8c;
        }
    }
    ctx->pc = 0x244F74u;
    // 0x244f74: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x244F74u;
    {
        const bool branch_taken_0x244f74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x244F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F74u;
        // 0x244f78: 0x2402015e  addiu       $v0, $zero, 0x15E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244f74) {
            ctx->pc = 0x244F8Cu;
            goto label_244f8c;
        }
    }
    ctx->pc = 0x244F7Cu;
    // 0x244f7c: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x244F7Cu;
    {
        const bool branch_taken_0x244f7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x244F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F7Cu;
        // 0x244f80: 0x2402015f  addiu       $v0, $zero, 0x15F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244f7c) {
            ctx->pc = 0x244F8Cu;
            goto label_244f8c;
        }
    }
    ctx->pc = 0x244F84u;
    // 0x244f84: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x244F84u;
    {
        const bool branch_taken_0x244f84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x244f84) {
            ctx->pc = 0x244F90u;
            goto label_244f90;
        }
    }
    ctx->pc = 0x244F8Cu;
label_244f8c:
    // 0x244f8c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x244f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_244f90:
    // 0x244f90: 0x50e00008  beql        $a3, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x244F90u;
    {
        const bool branch_taken_0x244f90 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x244f90) {
            ctx->pc = 0x244F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244F90u;
            // 0x244f94: 0x8e0500b4  lw          $a1, 0xB4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244FB4u;
            goto label_244fb4;
        }
    }
    ctx->pc = 0x244F98u;
    // 0x244f98: 0x8e0500b8  lw          $a1, 0xB8($s0)
    ctx->pc = 0x244f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x244f9c: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x244F9Cu;
    {
        const bool branch_taken_0x244f9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x244FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244F9Cu;
        // 0x244fa0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244f9c) {
            ctx->pc = 0x244FC4u;
            goto label_244fc4;
        }
    }
    ctx->pc = 0x244FA4u;
    // 0x244fa4: 0xc0984bc  jal         func_2612F0
    ctx->pc = 0x244FA4u;
    SET_GPR_U32(ctx, 31, 0x244FACu);
    ctx->pc = 0x244FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244FA4u;
    // 0x244fa8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2612F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2612F0u, 0x244FA4u, 0x244FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244FACu;
label_244fac:
    // 0x244fac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x244FACu;
    {
        const bool branch_taken_0x244fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244FACu;
        // 0x244fb0: 0x8e020070  lw          $v0, 0x70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244fac) {
            ctx->pc = 0x244FC8u;
            goto label_244fc8;
        }
    }
    ctx->pc = 0x244FB4u;
label_244fb4:
    // 0x244fb4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x244FB4u;
    {
        const bool branch_taken_0x244fb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x244FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244FB4u;
        // 0x244fb8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244fb4) {
            ctx->pc = 0x244FC4u;
            goto label_244fc4;
        }
    }
    ctx->pc = 0x244FBCu;
    // 0x244fbc: 0xc0984bc  jal         func_2612F0
    ctx->pc = 0x244FBCu;
    SET_GPR_U32(ctx, 31, 0x244FC4u);
    ctx->pc = 0x244FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244FBCu;
    // 0x244fc0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2612F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2612F0u, 0x244FBCu, 0x244FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244FC4u;
label_244fc4:
    // 0x244fc4: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x244fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_244fc8:
    // 0x244fc8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x244FC8u;
    {
        const bool branch_taken_0x244fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x244FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244FC8u;
        // 0x244fcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244fc8) {
            ctx->pc = 0x24501Cu;
            goto label_24501c;
        }
    }
    ctx->pc = 0x244FD0u;
    // 0x244fd0: 0xc0d9108  jal         func_364420
    ctx->pc = 0x244FD0u;
    SET_GPR_U32(ctx, 31, 0x244FD8u);
    ctx->pc = 0x244FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244FD0u;
    // 0x244fd4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364420u, 0x244FD0u, 0x244FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244FD8u;
label_244fd8:
    // 0x244fd8: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x244fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x244fdc: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x244fdcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x244fe0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x244FE0u;
    {
        const bool branch_taken_0x244fe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x244fe0) {
            ctx->pc = 0x244FF0u;
            goto label_244ff0;
        }
    }
    ctx->pc = 0x244FE8u;
    // 0x244fe8: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x244fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x244fec: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x244fecu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_244ff0:
    // 0x244ff0: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x244FF0u;
    {
        const bool branch_taken_0x244ff0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x244ff0) {
            ctx->pc = 0x24501Cu;
            goto label_24501c;
        }
    }
    ctx->pc = 0x244FF8u;
    // 0x244ff8: 0xc06be68  jal         func_1AF9A0
    ctx->pc = 0x244FF8u;
    SET_GPR_U32(ctx, 31, 0x245000u);
    ctx->pc = 0x244FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244FF8u;
    // 0x244ffc: 0x8e440338  lw          $a0, 0x338($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF9A0u, 0x244FF8u, 0x245000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245000u;
label_245000:
    // 0x245000: 0x8e430370  lw          $v1, 0x370($s2)
    ctx->pc = 0x245000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 880)));
    // 0x245004: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x245004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x245008: 0x2404ff7f  addiu       $a0, $zero, -0x81
    ctx->pc = 0x245008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x24500c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x24500cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x245010: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x245010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x245014: 0x10000171  b           . + 4 + (0x171 << 2)
    ctx->pc = 0x245014u;
    {
        const bool branch_taken_0x245014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245014u;
        // 0x245018: 0xae430370  sw          $v1, 0x370($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 880), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245014) {
            ctx->pc = 0x2455DCu;
            goto label_2455dc;
        }
    }
    ctx->pc = 0x24501Cu;
label_24501c:
    // 0x24501c: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x24501Cu;
    SET_GPR_U32(ctx, 31, 0x245024u);
    ctx->pc = 0x245020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24501Cu;
    // 0x245020: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x24501Cu, 0x245024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245024u;
label_245024:
    // 0x245024: 0x8c4300b8  lw          $v1, 0xB8($v0)
    ctx->pc = 0x245024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x245028: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x245028u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24502c: 0xc4610594  lwc1        $f1, 0x594($v1)
    ctx->pc = 0x24502cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245030: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x245030u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x245034: 0x0  nop
    ctx->pc = 0x245034u;
    // NOP
    // 0x245038: 0x45020129  bc1fl       . + 4 + (0x129 << 2)
    ctx->pc = 0x245038u;
    {
        const bool branch_taken_0x245038 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x245038) {
            ctx->pc = 0x24503Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245038u;
            // 0x24503c: 0x8e64025c  lw          $a0, 0x25C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2454E0u;
            goto label_2454e0;
        }
    }
    ctx->pc = 0x245040u;
    // 0x245040: 0x8e420338  lw          $v0, 0x338($s2)
    ctx->pc = 0x245040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
    // 0x245044: 0x8c4300a0  lw          $v1, 0xA0($v0)
    ctx->pc = 0x245044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x245048: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x245048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24504c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x24504cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x245050: 0x0  nop
    ctx->pc = 0x245050u;
    // NOP
    // 0x245054: 0x45000121  bc1f        . + 4 + (0x121 << 2)
    ctx->pc = 0x245054u;
    {
        const bool branch_taken_0x245054 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x245058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245054u;
        // 0x245058: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245054) {
            ctx->pc = 0x2454DCu;
            goto label_2454dc;
        }
    }
    ctx->pc = 0x24505Cu;
    // 0x24505c: 0xc098bf2  jal         func_262FC8
    ctx->pc = 0x24505Cu;
    SET_GPR_U32(ctx, 31, 0x245064u);
    ctx->pc = 0x245060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24505Cu;
    // 0x245060: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262FC8u, 0x24505Cu, 0x245064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245064u;
label_245064:
    // 0x245064: 0x1000011e  b           . + 4 + (0x11E << 2)
    ctx->pc = 0x245064u;
    {
        const bool branch_taken_0x245064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245064u;
        // 0x245068: 0x8e64025c  lw          $a0, 0x25C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245064) {
            ctx->pc = 0x2454E0u;
            goto label_2454e0;
        }
    }
    ctx->pc = 0x24506Cu;
label_24506c:
    // 0x24506c: 0x50e00009  beql        $a3, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x24506Cu;
    {
        const bool branch_taken_0x24506c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x24506c) {
            ctx->pc = 0x245070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24506Cu;
            // 0x245070: 0x8e430338  lw          $v1, 0x338($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245094u;
            goto label_245094;
        }
    }
    ctx->pc = 0x245074u;
    // 0x245074: 0x8e0500bc  lw          $a1, 0xBC($s0)
    ctx->pc = 0x245074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x245078: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x245078u;
    {
        const bool branch_taken_0x245078 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245078u;
        // 0x24507c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245078) {
            ctx->pc = 0x245090u;
            goto label_245090;
        }
    }
    ctx->pc = 0x245080u;
    // 0x245080: 0xc0984bc  jal         func_2612F0
    ctx->pc = 0x245080u;
    SET_GPR_U32(ctx, 31, 0x245088u);
    ctx->pc = 0x245084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245080u;
    // 0x245084: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2612F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2612F0u, 0x245080u, 0x245088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245088u;
label_245088:
    // 0x245088: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x245088u;
    {
        const bool branch_taken_0x245088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24508Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245088u;
        // 0x24508c: 0x8ec200a8  lw          $v0, 0xA8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245088) {
            ctx->pc = 0x2450C0u;
            goto label_2450c0;
        }
    }
    ctx->pc = 0x245090u;
label_245090:
    // 0x245090: 0x8e430338  lw          $v1, 0x338($s2)
    ctx->pc = 0x245090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
label_245094:
    // 0x245094: 0x24050159  addiu       $a1, $zero, 0x159
    ctx->pc = 0x245094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 345));
    // 0x245098: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x245098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
    // 0x24509c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24509cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2450a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2450a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2450a4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2450a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2450a8: 0x10850004  beq         $a0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2450A8u;
    {
        const bool branch_taken_0x2450a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x2450ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2450A8u;
        // 0x2450ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2450a8) {
            ctx->pc = 0x2450BCu;
            goto label_2450bc;
        }
    }
    ctx->pc = 0x2450B0u;
    // 0x2450b0: 0x8e0500b0  lw          $a1, 0xB0($s0)
    ctx->pc = 0x2450b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x2450b4: 0xc0984bc  jal         func_2612F0
    ctx->pc = 0x2450B4u;
    SET_GPR_U32(ctx, 31, 0x2450BCu);
    ctx->pc = 0x2450B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2450B4u;
    // 0x2450b8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2612F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2612F0u, 0x2450B4u, 0x2450BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2450BCu;
label_2450bc:
    // 0x2450bc: 0x8ec200a8  lw          $v0, 0xA8($s6)
    ctx->pc = 0x2450bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 168)));
label_2450c0:
    // 0x2450c0: 0x50400055  beql        $v0, $zero, . + 4 + (0x55 << 2)
    ctx->pc = 0x2450C0u;
    {
        const bool branch_taken_0x2450c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2450c0) {
            ctx->pc = 0x2450C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2450C0u;
            // 0x2450c4: 0x8ea2000c  lw          $v0, 0xC($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245218u;
            goto label_245218;
        }
    }
    ctx->pc = 0x2450C8u;
    // 0x2450c8: 0xc6a1001c  lwc1        $f1, 0x1C($s5)
    ctx->pc = 0x2450c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2450cc: 0xc6c000b0  lwc1        $f0, 0xB0($s6)
    ctx->pc = 0x2450ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2450d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2450d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2450d4: 0x0  nop
    ctx->pc = 0x2450d4u;
    // NOP
    // 0x2450d8: 0x4502003f  bc1fl       . + 4 + (0x3F << 2)
    ctx->pc = 0x2450D8u;
    {
        const bool branch_taken_0x2450d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2450d8) {
            ctx->pc = 0x2450DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2450D8u;
            // 0x2450dc: 0xc6c000ac  lwc1        $f0, 0xAC($s6) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2451D8u;
            goto label_2451d8;
        }
    }
    ctx->pc = 0x2450E0u;
    // 0x2450e0: 0x8e42036c  lw          $v0, 0x36C($s2)
    ctx->pc = 0x2450e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 876)));
    // 0x2450e4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2450e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2450e8: 0x14400064  bnez        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x2450E8u;
    {
        const bool branch_taken_0x2450e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2450ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2450E8u;
        // 0x2450ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2450e8) {
            ctx->pc = 0x24527Cu;
            goto label_24527c;
        }
    }
    ctx->pc = 0x2450F0u;
    // 0x2450f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2450f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2450f4: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x2450F4u;
    SET_GPR_U32(ctx, 31, 0x2450FCu);
    ctx->pc = 0x2450F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2450F4u;
    // 0x2450f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2450F4u, 0x2450FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2450FCu;
label_2450fc:
    // 0x2450fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2450fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245100: 0xc0d94de  jal         func_365378
    ctx->pc = 0x245100u;
    SET_GPR_U32(ctx, 31, 0x245108u);
    ctx->pc = 0x245104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245100u;
    // 0x245104: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x365378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365378u, 0x245100u, 0x245108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245108u;
label_245108:
    // 0x245108: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x245108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x24510c: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x24510cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x245110: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x245110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x245114: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x245114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245118: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x245118u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24511c: 0xc046642  jal         func_119908
    ctx->pc = 0x24511Cu;
    SET_GPR_U32(ctx, 31, 0x245124u);
    ctx->pc = 0x245120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24511Cu;
    // 0x245120: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x24511Cu, 0x245124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245124u;
label_245124:
    // 0x245124: 0x8e420338  lw          $v0, 0x338($s2)
    ctx->pc = 0x245124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
    // 0x245128: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x245128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x24512c: 0x8c440084  lw          $a0, 0x84($v0)
    ctx->pc = 0x24512cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x245130: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x245130u;
    {
        const bool branch_taken_0x245130 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x245134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245130u;
        // 0x245134: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245130) {
            ctx->pc = 0x245158u;
            goto label_245158;
        }
    }
    ctx->pc = 0x245138u;
    // 0x245138: 0x50820008  beql        $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x245138u;
    {
        const bool branch_taken_0x245138 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x245138) {
            ctx->pc = 0x24513Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245138u;
            // 0x24513c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24515Cu;
            goto label_24515c;
        }
    }
    ctx->pc = 0x245140u;
    // 0x245140: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x245140u;
    {
        const bool branch_taken_0x245140 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x245144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245140u;
        // 0x245144: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245140) {
            ctx->pc = 0x245158u;
            goto label_245158;
        }
    }
    ctx->pc = 0x245148u;
    // 0x245148: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x245148u;
    {
        const bool branch_taken_0x245148 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x24514Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245148u;
        // 0x24514c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245148) {
            ctx->pc = 0x245158u;
            goto label_245158;
        }
    }
    ctx->pc = 0x245150u;
    // 0x245150: 0x54820013  bnel        $a0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x245150u;
    {
        const bool branch_taken_0x245150 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x245150) {
            ctx->pc = 0x245154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245150u;
            // 0x245154: 0x8e030070  lw          $v1, 0x70($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2451A0u;
            goto label_2451a0;
        }
    }
    ctx->pc = 0x245158u;
label_245158:
    // 0x245158: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x245158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24515c:
    // 0x24515c: 0xc0d9108  jal         func_364420
    ctx->pc = 0x24515Cu;
    SET_GPR_U32(ctx, 31, 0x245164u);
    ctx->pc = 0x245160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24515Cu;
    // 0x245160: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364420u, 0x24515Cu, 0x245164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245164u;
label_245164:
    // 0x245164: 0x8e830070  lw          $v1, 0x70($s4)
    ctx->pc = 0x245164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    // 0x245168: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x245168u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x24516c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24516Cu;
    {
        const bool branch_taken_0x24516c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24516c) {
            ctx->pc = 0x24517Cu;
            goto label_24517c;
        }
    }
    ctx->pc = 0x245174u;
    // 0x245174: 0x8e820068  lw          $v0, 0x68($s4)
    ctx->pc = 0x245174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
    // 0x245178: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x245178u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_24517c:
    // 0x24517c: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x24517Cu;
    {
        const bool branch_taken_0x24517c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x24517c) {
            ctx->pc = 0x245180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24517Cu;
            // 0x245180: 0x8e030070  lw          $v1, 0x70($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2451A0u;
            goto label_2451a0;
        }
    }
    ctx->pc = 0x245184u;
    // 0x245184: 0xc6cc00ac  lwc1        $f12, 0xAC($s6)
    ctx->pc = 0x245184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x245188: 0xc073ef8  jal         func_1CFBE0
    ctx->pc = 0x245188u;
    SET_GPR_U32(ctx, 31, 0x245190u);
    ctx->pc = 0x24518Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245188u;
    // 0x24518c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFBE0u, 0x245188u, 0x245190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245190u;
label_245190:
    // 0x245190: 0x8e420370  lw          $v0, 0x370($s2)
    ctx->pc = 0x245190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 880)));
    // 0x245194: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x245194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x245198: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x245198u;
    {
        const bool branch_taken_0x245198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24519Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245198u;
        // 0x24519c: 0xae420370  sw          $v0, 0x370($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 880), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245198) {
            ctx->pc = 0x24527Cu;
            goto label_24527c;
        }
    }
    ctx->pc = 0x2451A0u;
label_2451a0:
    // 0x2451a0: 0xae030074  sw          $v1, 0x74($s0)
    ctx->pc = 0x2451a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 3));
    // 0x2451a4: 0x8e420370  lw          $v0, 0x370($s2)
    ctx->pc = 0x2451a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 880)));
    // 0x2451a8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2451a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2451ac: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x2451ACu;
    {
        const bool branch_taken_0x2451ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2451B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2451ACu;
        // 0x2451b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2451ac) {
            ctx->pc = 0x24527Cu;
            goto label_24527c;
        }
    }
    ctx->pc = 0x2451B4u;
    // 0x2451b4: 0x8e420338  lw          $v0, 0x338($s2)
    ctx->pc = 0x2451b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
    // 0x2451b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2451b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2451bc: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x2451BCu;
    SET_GPR_U32(ctx, 31, 0x2451C4u);
    ctx->pc = 0x2451C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2451BCu;
    // 0x2451c0: 0x8c4400a0  lw          $a0, 0xA0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x2451BCu, 0x2451C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2451C4u;
label_2451c4:
    // 0x2451c4: 0x8e440338  lw          $a0, 0x338($s2)
    ctx->pc = 0x2451c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
    // 0x2451c8: 0xc06bfc8  jal         func_1AFF20
    ctx->pc = 0x2451C8u;
    SET_GPR_U32(ctx, 31, 0x2451D0u);
    ctx->pc = 0x2451CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2451C8u;
    // 0x2451cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFF20u, 0x2451C8u, 0x2451D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2451D0u;
label_2451d0:
    // 0x2451d0: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x2451D0u;
    {
        const bool branch_taken_0x2451d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2451D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2451D0u;
        // 0x2451d4: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2451d0) {
            ctx->pc = 0x2455E0u;
            goto label_2455e0;
        }
    }
    ctx->pc = 0x2451D8u;
label_2451d8:
    // 0x2451d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2451d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2451dc: 0x0  nop
    ctx->pc = 0x2451dcu;
    // NOP
    // 0x2451e0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2451E0u;
    {
        const bool branch_taken_0x2451e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2451E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2451E0u;
        // 0x2451e4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2451e0) {
            ctx->pc = 0x245200u;
            goto label_245200;
        }
    }
    ctx->pc = 0x2451E8u;
    // 0x2451e8: 0x8e440338  lw          $a0, 0x338($s2)
    ctx->pc = 0x2451e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
    // 0x2451ec: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x2451ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x2451f0: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2451F0u;
    {
        const bool branch_taken_0x2451f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2451f0) {
            ctx->pc = 0x2451F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2451F0u;
            // 0x2451f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245204u;
            goto label_245204;
        }
    }
    ctx->pc = 0x2451F8u;
    // 0x2451f8: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x2451f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x2451fc: 0xac820084  sw          $v0, 0x84($a0)
    ctx->pc = 0x2451fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 2));
label_245200:
    // 0x245200: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x245200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_245204:
    // 0x245204: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x245204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x245208: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x245208u;
    SET_GPR_U32(ctx, 31, 0x245210u);
    ctx->pc = 0x24520Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245208u;
    // 0x24520c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x245208u, 0x245210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245210u;
label_245210:
    // 0x245210: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x245210u;
    {
        const bool branch_taken_0x245210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x245210) {
            ctx->pc = 0x24527Cu;
            goto label_24527c;
        }
    }
    ctx->pc = 0x245218u;
label_245218:
    // 0x245218: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x245218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x24521c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x24521cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x245220: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x245220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245224: 0xc6a1001c  lwc1        $f1, 0x1C($s5)
    ctx->pc = 0x245224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245228: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x245228u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x24522c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x24522cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x245230: 0x0  nop
    ctx->pc = 0x245230u;
    // NOP
    // 0x245234: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x245234u;
    {
        const bool branch_taken_0x245234 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x245234) {
            ctx->pc = 0x24527Cu;
            goto label_24527c;
        }
    }
    ctx->pc = 0x24523Cu;
    // 0x24523c: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x24523Cu;
    SET_GPR_U32(ctx, 31, 0x245244u);
    ctx->pc = 0x245240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24523Cu;
    // 0x245240: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x24523Cu, 0x245244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245244u;
label_245244:
    // 0x245244: 0x2403006e  addiu       $v1, $zero, 0x6E
    ctx->pc = 0x245244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x245248: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x245248u;
    {
        const bool branch_taken_0x245248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x24524Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245248u;
        // 0x24524c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245248) {
            ctx->pc = 0x24527Cu;
            goto label_24527c;
        }
    }
    ctx->pc = 0x245250u;
    // 0x245250: 0xc0d94de  jal         func_365378
    ctx->pc = 0x245250u;
    SET_GPR_U32(ctx, 31, 0x245258u);
    ctx->pc = 0x245254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245250u;
    // 0x245254: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x365378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x365378u, 0x245250u, 0x245258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245258u;
label_245258:
    // 0x245258: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x245258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x24525c: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x24525cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x245260: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x245260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    // 0x245264: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x245264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245268: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x245268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24526c: 0xc046642  jal         func_119908
    ctx->pc = 0x24526Cu;
    SET_GPR_U32(ctx, 31, 0x245274u);
    ctx->pc = 0x245270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24526Cu;
    // 0x245270: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x24526Cu, 0x245274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245274u;
label_245274:
    // 0x245274: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x245274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x245278: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x245278u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_24527c:
    // 0x24527c: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x24527Cu;
    SET_GPR_U32(ctx, 31, 0x245284u);
    ctx->pc = 0x245280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24527Cu;
    // 0x245280: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x24527Cu, 0x245284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245284u;
label_245284:
    // 0x245284: 0x8c4300b8  lw          $v1, 0xB8($v0)
    ctx->pc = 0x245284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x245288: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x245288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24528c: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x24528Cu;
    SET_GPR_U32(ctx, 31, 0x245294u);
    ctx->pc = 0x245290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24528Cu;
    // 0x245290: 0xc4740594  lwc1        $f20, 0x594($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x24528Cu, 0x245294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245294u;
label_245294:
    // 0x245294: 0x8c4300b8  lw          $v1, 0xB8($v0)
    ctx->pc = 0x245294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x245298: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x245298u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24529c: 0xc4610598  lwc1        $f1, 0x598($v1)
    ctx->pc = 0x24529cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2452a0: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x2452a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2452a4: 0x0  nop
    ctx->pc = 0x2452a4u;
    // NOP
    // 0x2452a8: 0x45020037  bc1fl       . + 4 + (0x37 << 2)
    ctx->pc = 0x2452A8u;
    {
        const bool branch_taken_0x2452a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2452a8) {
            ctx->pc = 0x2452ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2452A8u;
            // 0x2452ac: 0x8e430334  lw          $v1, 0x334($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245388u;
            goto label_245388;
        }
    }
    ctx->pc = 0x2452B0u;
    // 0x2452b0: 0x8e420338  lw          $v0, 0x338($s2)
    ctx->pc = 0x2452b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
    // 0x2452b4: 0x8c4300a0  lw          $v1, 0xA0($v0)
    ctx->pc = 0x2452b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x2452b8: 0xc460001c  lwc1        $f0, 0x1C($v1)
    ctx->pc = 0x2452b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2452bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2452bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2452c0: 0x0  nop
    ctx->pc = 0x2452c0u;
    // NOP
    // 0x2452c4: 0x4502002c  bc1fl       . + 4 + (0x2C << 2)
    ctx->pc = 0x2452C4u;
    {
        const bool branch_taken_0x2452c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2452c4) {
            ctx->pc = 0x2452C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2452C4u;
            // 0x2452c8: 0x8e620230  lw          $v0, 0x230($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 560)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245378u;
            goto label_245378;
        }
    }
    ctx->pc = 0x2452CCu;
    // 0x2452cc: 0x46141036  c.le.s      $f2, $f20
    ctx->pc = 0x2452ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2452d0: 0x0  nop
    ctx->pc = 0x2452d0u;
    // NOP
    // 0x2452d4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2452D4u;
    {
        const bool branch_taken_0x2452d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2452D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2452D4u;
        // 0x2452d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2452d4) {
            ctx->pc = 0x2452ECu;
            goto label_2452ec;
        }
    }
    ctx->pc = 0x2452DCu;
    // 0x2452dc: 0xc098bf2  jal         func_262FC8
    ctx->pc = 0x2452DCu;
    SET_GPR_U32(ctx, 31, 0x2452E4u);
    ctx->pc = 0x2452E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2452DCu;
    // 0x2452e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262FC8u, 0x2452DCu, 0x2452E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2452E4u;
label_2452e4:
    // 0x2452e4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2452E4u;
    {
        const bool branch_taken_0x2452e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2452E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2452E4u;
        // 0x2452e8: 0x8e430334  lw          $v1, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2452e4) {
            ctx->pc = 0x245388u;
            goto label_245388;
        }
    }
    ctx->pc = 0x2452ECu;
label_2452ec:
    // 0x2452ec: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x2452ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x2452f0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2452F0u;
    {
        const bool branch_taken_0x2452f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2452F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2452F0u;
        // 0x2452f4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2452f0) {
            ctx->pc = 0x24530Cu;
            goto label_24530c;
        }
    }
    ctx->pc = 0x2452F8u;
    // 0x2452f8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2452f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2452fc: 0x0  nop
    ctx->pc = 0x2452fcu;
    // NOP
    // 0x245300: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x245300u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x245304: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x245304u;
    {
        const bool branch_taken_0x245304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245304u;
        // 0x245308: 0x8e020070  lw          $v0, 0x70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245304) {
            ctx->pc = 0x245328u;
            goto label_245328;
        }
    }
    ctx->pc = 0x24530Cu;
label_24530c:
    // 0x24530c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24530cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x245310: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x245310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x245314: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x245314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x245318: 0x0  nop
    ctx->pc = 0x245318u;
    // NOP
    // 0x24531c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x24531cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x245320: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x245320u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x245324: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x245324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_245328:
    // 0x245328: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x245328u;
    {
        const bool branch_taken_0x245328 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x24532Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245328u;
        // 0x24532c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245328) {
            ctx->pc = 0x245344u;
            goto label_245344;
        }
    }
    ctx->pc = 0x245330u;
    // 0x245330: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x245330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245334: 0x0  nop
    ctx->pc = 0x245334u;
    // NOP
    // 0x245338: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x245338u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24533c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24533Cu;
    {
        const bool branch_taken_0x24533c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24533Cu;
        // 0x245340: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24533c) {
            ctx->pc = 0x245360u;
            goto label_245360;
        }
    }
    ctx->pc = 0x245344u;
label_245344:
    // 0x245344: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x245344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x245348: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x245348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24534c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x24534cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245350: 0x0  nop
    ctx->pc = 0x245350u;
    // NOP
    // 0x245354: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x245354u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x245358: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x245358u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x24535c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x24535cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_245360:
    // 0x245360: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x245360u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x245364: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x245364u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x245368: 0xc098bf2  jal         func_262FC8
    ctx->pc = 0x245368u;
    SET_GPR_U32(ctx, 31, 0x245370u);
    ctx->pc = 0x24536Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245368u;
    // 0x24536c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262FC8u, 0x245368u, 0x245370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245370u;
label_245370:
    // 0x245370: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x245370u;
    {
        const bool branch_taken_0x245370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245370u;
        // 0x245374: 0x8e430334  lw          $v1, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245370) {
            ctx->pc = 0x245388u;
            goto label_245388;
        }
    }
    ctx->pc = 0x245378u;
label_245378:
    // 0x245378: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x245378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x24537c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24537cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x245380: 0xae620230  sw          $v0, 0x230($s3)
    ctx->pc = 0x245380u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 560), GPR_U32(ctx, 2));
    // 0x245384: 0x8e430334  lw          $v1, 0x334($s2)
    ctx->pc = 0x245384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_245388:
    // 0x245388: 0x240507a1  addiu       $a1, $zero, 0x7A1
    ctx->pc = 0x245388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1953));
    // 0x24538c: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x24538cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
    // 0x245390: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x245390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x245394: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x245394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x245398: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x245398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24539c: 0x54850050  bnel        $a0, $a1, . + 4 + (0x50 << 2)
    ctx->pc = 0x24539Cu;
    {
        const bool branch_taken_0x24539c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x24539c) {
            ctx->pc = 0x2453A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24539Cu;
            // 0x2453a0: 0x8e64025c  lw          $a0, 0x25C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2454E0u;
            goto label_2454e0;
        }
    }
    ctx->pc = 0x2453A4u;
    // 0x2453a4: 0x8e420370  lw          $v0, 0x370($s2)
    ctx->pc = 0x2453a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 880)));
    // 0x2453a8: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x2453a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x2453ac: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2453acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2453b0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2453b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x2453b4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2453B4u;
    {
        const bool branch_taken_0x2453b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2453B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2453B4u;
        // 0x2453b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2453b4) {
            ctx->pc = 0x245408u;
            goto label_245408;
        }
    }
    ctx->pc = 0x2453BCu;
    // 0x2453bc: 0xc0d9108  jal         func_364420
    ctx->pc = 0x2453BCu;
    SET_GPR_U32(ctx, 31, 0x2453C4u);
    ctx->pc = 0x2453C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2453BCu;
    // 0x2453c0: 0x8e900070  lw          $s0, 0x70($s4) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x364420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x364420u, 0x2453BCu, 0x2453C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2453C4u;
label_2453c4:
    // 0x2453c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2453c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2453c8: 0x56020010  bnel        $s0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2453C8u;
    {
        const bool branch_taken_0x2453c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2453c8) {
            ctx->pc = 0x2453CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2453C8u;
            // 0x2453cc: 0x8ea2000c  lw          $v0, 0xC($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24540Cu;
            goto label_24540c;
        }
    }
    ctx->pc = 0x2453D0u;
    // 0x2453d0: 0xc6c200b0  lwc1        $f2, 0xB0($s6)
    ctx->pc = 0x2453d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2453d4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2453d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2453d8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2453d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2453dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2453dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2453e0: 0xc6a1001c  lwc1        $f1, 0x1C($s5)
    ctx->pc = 0x2453e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2453e4: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2453e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2453e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2453e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2453ec: 0x0  nop
    ctx->pc = 0x2453ecu;
    // NOP
    // 0x2453f0: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2453F0u;
    {
        const bool branch_taken_0x2453f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2453f0) {
            ctx->pc = 0x2453F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2453F0u;
            // 0x2453f4: 0x8ea2000c  lw          $v0, 0xC($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24540Cu;
            goto label_24540c;
        }
    }
    ctx->pc = 0x2453F8u;
    // 0x2453f8: 0x3c014396  lui         $at, 0x4396
    ctx->pc = 0x2453f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17302 << 16));
    // 0x2453fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2453fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245400: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x245400u;
    {
        const bool branch_taken_0x245400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245400u;
        // 0x245404: 0x46011041  sub.s       $f1, $f2, $f1 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x245400) {
            ctx->pc = 0x245444u;
            goto label_245444;
        }
    }
    ctx->pc = 0x245408u;
label_245408:
    // 0x245408: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x245408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_24540c:
    // 0x24540c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x24540cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x245410: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x245410u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x245414: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x245414u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245418: 0xc4420010  lwc1        $f2, 0x10($v0)
    ctx->pc = 0x245418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24541c: 0xc6a1001c  lwc1        $f1, 0x1C($s5)
    ctx->pc = 0x24541cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245420: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x245420u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x245424: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x245424u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x245428: 0x0  nop
    ctx->pc = 0x245428u;
    // NOP
    // 0x24542c: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x24542Cu;
    {
        const bool branch_taken_0x24542c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24542c) {
            ctx->pc = 0x245430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24542Cu;
            // 0x245430: 0x8e4406f0  lw          $a0, 0x6F0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1776)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24544Cu;
            goto label_24544c;
        }
    }
    ctx->pc = 0x245434u;
    // 0x245434: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x245434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x245438: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x245438u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24543c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x24543cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x245440: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x245440u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_245444:
    // 0x245444: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x245444u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x245448: 0x8e4406f0  lw          $a0, 0x6F0($s2)
    ctx->pc = 0x245448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1776)));
label_24544c:
    // 0x24544c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24544cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245450: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x245450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245454: 0xc0c327c  jal         func_30C9F0
    ctx->pc = 0x245454u;
    SET_GPR_U32(ctx, 31, 0x24545Cu);
    ctx->pc = 0x245458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245454u;
    // 0x245458: 0x3c100057  lui         $s0, 0x57 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C9F0u, 0x245454u, 0x24545Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24545Cu;
label_24545c:
    // 0x24545c: 0x26115b30  addiu       $s1, $s0, 0x5B30
    ctx->pc = 0x24545cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 23344));
    // 0x245460: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x245460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x245464: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x245464u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x245468: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x245468u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x24546c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x24546cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x245470: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x245470u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245474: 0x4614ad02  mul.s       $f20, $f21, $f20
    ctx->pc = 0x245474u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[20]);
    // 0x245478: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x245478u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x24547c: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x24547Cu;
    SET_GPR_U32(ctx, 31, 0x245484u);
    ctx->pc = 0x245480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24547Cu;
    // 0x245480: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x24547Cu, 0x245484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245484u;
label_245484:
    // 0x245484: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x245484u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x245488: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x245488u;
    SET_GPR_U32(ctx, 31, 0x245490u);
    ctx->pc = 0x24548Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245488u;
    // 0x24548c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x245488u, 0x245490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245490u;
label_245490:
    // 0x245490: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x245490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x245494: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x245494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245498: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x245498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x24549c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x24549cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2454a0: 0xc6015b30  lwc1        $f1, 0x5B30($s0)
    ctx->pc = 0x2454a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 23344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2454a4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2454a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2454a8: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2454a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2454ac: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x2454acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2454b0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2454b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2454b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2454b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2454b8: 0xe7b5001c  swc1        $f21, 0x1C($sp)
    ctx->pc = 0x2454b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2454bc: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2454bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2454c0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2454c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2454c4: 0xc0b199e  jal         func_2C6678
    ctx->pc = 0x2454C4u;
    SET_GPR_U32(ctx, 31, 0x2454CCu);
    ctx->pc = 0x2454C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2454C4u;
    // 0x2454c8: 0xe7a30014  swc1        $f3, 0x14($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6678u, 0x2454C4u, 0x2454CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2454CCu;
label_2454cc:
    // 0x2454cc: 0x8e4406f0  lw          $a0, 0x6F0($s2)
    ctx->pc = 0x2454ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1776)));
    // 0x2454d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2454d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2454d4: 0xc0c32a0  jal         func_30CA80
    ctx->pc = 0x2454D4u;
    SET_GPR_U32(ctx, 31, 0x2454DCu);
    ctx->pc = 0x2454D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2454D4u;
    // 0x2454d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CA80u, 0x2454D4u, 0x2454DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2454DCu;
label_2454dc:
    // 0x2454dc: 0x8e64025c  lw          $a0, 0x25C($s3)
    ctx->pc = 0x2454dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 604)));
label_2454e0:
    // 0x2454e0: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2454E0u;
    {
        const bool branch_taken_0x2454e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2454e0) {
            ctx->pc = 0x2454E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2454E0u;
            // 0x2454e4: 0xc64104f0  lwc1        $f1, 0x4F0($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24550Cu;
            goto label_24550c;
        }
    }
    ctx->pc = 0x2454E8u;
    // 0x2454e8: 0x8e430338  lw          $v1, 0x338($s2)
    ctx->pc = 0x2454e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
    // 0x2454ec: 0x8c6200a0  lw          $v0, 0xA0($v1)
    ctx->pc = 0x2454ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 160)));
    // 0x2454f0: 0xc073e86  jal         func_1CFA18
    ctx->pc = 0x2454F0u;
    SET_GPR_U32(ctx, 31, 0x2454F8u);
    ctx->pc = 0x2454F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2454F0u;
    // 0x2454f4: 0xc44c001c  lwc1        $f12, 0x1C($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x2454F0u, 0x2454F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2454F8u;
label_2454f8:
    // 0x2454f8: 0x8e64025c  lw          $a0, 0x25C($s3)
    ctx->pc = 0x2454f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 604)));
    // 0x2454fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2454fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x245500: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x245500u;
    SET_GPR_U32(ctx, 31, 0x245508u);
    ctx->pc = 0x245504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245500u;
    // 0x245504: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x245500u, 0x245508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x245508u;
label_245508:
    // 0x245508: 0xc64104f0  lwc1        $f1, 0x4F0($s2)
    ctx->pc = 0x245508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24550c:
    // 0x24550c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24550cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x245510: 0x0  nop
    ctx->pc = 0x245510u;
    // NOP
    // 0x245514: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x245514u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x245518: 0x0  nop
    ctx->pc = 0x245518u;
    // NOP
    // 0x24551c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x24551Cu;
    {
        const bool branch_taken_0x24551c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x245520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24551Cu;
        // 0x245520: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24551c) {
            ctx->pc = 0x24552Cu;
            goto label_24552c;
        }
    }
    ctx->pc = 0x245524u;
    // 0x245524: 0xc08a15a  jal         func_228568
    ctx->pc = 0x245524u;
    SET_GPR_U32(ctx, 31, 0x24552Cu);
    ctx->pc = 0x245528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x245524u;
    // 0x245528: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228568u, 0x245524u, 0x24552Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24552Cu;
label_24552c:
    // 0x24552c: 0x8e420338  lw          $v0, 0x338($s2)
    ctx->pc = 0x24552cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
    // 0x245530: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x245530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x245534: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x245534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x245538: 0x14640029  bne         $v1, $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x245538u;
    {
        const bool branch_taken_0x245538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x24553Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245538u;
        // 0x24553c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245538) {
            ctx->pc = 0x2455E0u;
            goto label_2455e0;
        }
    }
    ctx->pc = 0x245540u;
    // 0x245540: 0x8e420334  lw          $v0, 0x334($s2)
    ctx->pc = 0x245540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    // 0x245544: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x245544u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245548: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x245548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x24554c: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x24554cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x245550: 0x14640009  bne         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x245550u;
    {
        const bool branch_taken_0x245550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x245554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245550u;
        // 0x245554: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245550) {
            ctx->pc = 0x245578u;
            goto label_245578;
        }
    }
    ctx->pc = 0x245558u;
    // 0x245558: 0x8ca201e4  lw          $v0, 0x1E4($a1)
    ctx->pc = 0x245558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
    // 0x24555c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x24555cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x245560: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x245560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x245564: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x245564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x245568: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x245568u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24556c: 0x0  nop
    ctx->pc = 0x24556cu;
    // NOP
    // 0x245570: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x245570u;
    {
        const bool branch_taken_0x245570 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x245570) {
            ctx->pc = 0x245574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245570u;
            // 0x245574: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x245578u;
            goto label_245578;
        }
    }
    ctx->pc = 0x245578u;
label_245578:
    // 0x245578: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x245578u;
    {
        const bool branch_taken_0x245578 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x24557Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245578u;
        // 0x24557c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245578) {
            ctx->pc = 0x2455E0u;
            goto label_2455e0;
        }
    }
    ctx->pc = 0x245580u;
    // 0x245580: 0x8ca201e4  lw          $v0, 0x1E4($a1)
    ctx->pc = 0x245580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
    // 0x245584: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x245584u;
    {
        const bool branch_taken_0x245584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x245584) {
            ctx->pc = 0x245588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x245584u;
            // 0x245588: 0xc4410024  lwc1        $f1, 0x24($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2455BCu;
            goto label_2455bc;
        }
    }
    ctx->pc = 0x24558Cu;
    // 0x24558c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24558cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245590: 0x24a301ec  addiu       $v1, $a1, 0x1EC
    ctx->pc = 0x245590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 492));
    // 0x245594: 0x0  nop
    ctx->pc = 0x245594u;
    // NOP
label_245598:
    // 0x245598: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x245598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24559c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x24559Cu;
    {
        const bool branch_taken_0x24559c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24559c) {
            ctx->pc = 0x2455A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24559Cu;
            // 0x2455a0: 0xc4410024  lwc1        $f1, 0x24($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2455BCu;
            goto label_2455bc;
        }
    }
    ctx->pc = 0x2455A4u;
    // 0x2455a4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2455a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2455a8: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x2455a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2455ac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2455ACu;
    {
        const bool branch_taken_0x2455ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2455B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2455ACu;
        // 0x2455b0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2455ac) {
            ctx->pc = 0x245598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_245598;
        }
    }
    ctx->pc = 0x2455B4u;
    // 0x2455b4: 0x8ca201e8  lw          $v0, 0x1E8($a1)
    ctx->pc = 0x2455b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 488)));
    // 0x2455b8: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x2455b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2455bc:
    // 0x2455bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2455bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2455c0: 0x0  nop
    ctx->pc = 0x2455c0u;
    // NOP
    // 0x2455c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2455c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2455c8: 0x0  nop
    ctx->pc = 0x2455c8u;
    // NOP
    // 0x2455cc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2455CCu;
    {
        const bool branch_taken_0x2455cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2455D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2455CCu;
        // 0x2455d0: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2455cc) {
            ctx->pc = 0x2455E0u;
            goto label_2455e0;
        }
    }
    ctx->pc = 0x2455D4u;
    // 0x2455d4: 0xc08dc8e  jal         func_237238
    ctx->pc = 0x2455D4u;
    SET_GPR_U32(ctx, 31, 0x2455DCu);
    ctx->pc = 0x2455D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2455D4u;
    // 0x2455d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237238u, 0x2455D4u, 0x2455DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2455DCu;
label_2455dc:
    // 0x2455dc: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2455dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2455e0:
    // 0x2455e0: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2455e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2455e4:
    // 0x2455e4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2455e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2455e8: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2455e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2455ec: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2455ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2455f0: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x2455f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2455f4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2455f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2455f8: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x2455f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2455fc: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x2455fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x245600: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x245600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x245604: 0x3e00008  jr          $ra
    ctx->pc = 0x245604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x245604u;
        // 0x245608: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x245604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24560Cu;
    // 0x24560c: 0x0  nop
    ctx->pc = 0x24560cu;
    // NOP
    ctx->pc = 0x245610u;
}
