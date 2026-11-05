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

// Function: sub_0035C090
// Address: 0x35c090 - 0x35c1b0
void sub_0035C090_0x35c090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035C090_0x35c090");
#endif

    switch (ctx->pc) {
        case 0x35c0c4u: goto label_35c0c4;
        case 0x35c0e8u: goto label_35c0e8;
        case 0x35c118u: goto label_35c118;
        case 0x35c130u: goto label_35c130;
        default: break;
    }

    ctx->pc = 0x35c090u;

    // 0x35c090: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35c090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35c094: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35c094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35c098: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x35c098u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x35c09c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35c09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35c0a0: 0x8e02cae4  lw          $v0, -0x351C($s0)
    ctx->pc = 0x35c0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FCAE4u));
    // 0x35c0a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35c0a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c0a8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x35C0A8u;
    {
        const bool branch_taken_0x35c0a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35C0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C0A8u;
        // 0x35c0ac: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c0a8) {
            ctx->pc = 0x35C0C8u;
            goto label_35c0c8;
        }
    }
    ctx->pc = 0x35C0B0u;
    // 0x35c0b0: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x35c0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x35c0b4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x35c0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x35c0b8: 0x2484f250  addiu       $a0, $a0, -0xDB0
    ctx->pc = 0x35c0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    // 0x35c0bc: 0xc0a8e12  jal         func_2A3848
    ctx->pc = 0x35C0BCu;
    SET_GPR_U32(ctx, 31, 0x35C0C4u);
    ctx->pc = 0x35C0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C0BCu;
    // 0x35c0c0: 0x24a56b70  addiu       $a1, $a1, 0x6B70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3848u, 0x35C0BCu, 0x35C0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C0C4u;
label_35c0c4:
    // 0x35c0c4: 0xae02cae4  sw          $v0, -0x351C($s0)
    ctx->pc = 0x35c0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294953700), GPR_U32(ctx, 2));
label_35c0c8:
    // 0x35c0c8: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x35c0c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x35c0cc: 0x8e02cae8  lw          $v0, -0x3518($s0)
    ctx->pc = 0x35c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FCAE8u));
    // 0x35c0d0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35C0D0u;
    {
        const bool branch_taken_0x35c0d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35C0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C0D0u;
        // 0x35c0d4: 0x3c04004c  lui         $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c0d0) {
            ctx->pc = 0x35C0ECu;
            goto label_35c0ec;
        }
    }
    ctx->pc = 0x35C0D8u;
    // 0x35c0d8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x35c0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x35c0dc: 0x2484f250  addiu       $a0, $a0, -0xDB0
    ctx->pc = 0x35c0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963792));
    // 0x35c0e0: 0xc0a8e12  jal         func_2A3848
    ctx->pc = 0x35C0E0u;
    SET_GPR_U32(ctx, 31, 0x35C0E8u);
    ctx->pc = 0x35C0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35C0E0u;
    // 0x35c0e4: 0x24a56b80  addiu       $a1, $a1, 0x6B80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3848u, 0x35C0E0u, 0x35C0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35C0E8u;
label_35c0e8:
    // 0x35c0e8: 0xae02cae8  sw          $v0, -0x3518($s0)
    ctx->pc = 0x35c0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294953704), GPR_U32(ctx, 2));
label_35c0ec:
    // 0x35c0ec: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x35c0ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x35c0f0: 0x3c01bd63  lui         $at, 0xBD63
    ctx->pc = 0x35c0f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48483 << 16));
    // 0x35c0f4: 0x34218e39  ori         $at, $at, 0x8E39
    ctx->pc = 0x35c0f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36409);
    // 0x35c0f8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x35c0f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x35c0fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x35c0fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x35c100: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x35c100u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x35c104: 0x26290040  addiu       $t1, $s1, 0x40
    ctx->pc = 0x35c104u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x35c108: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x35c108u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c10c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x35c10cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x35c110: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x35c110u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x35c114: 0x0  nop
    ctx->pc = 0x35c114u;
    // NOP
label_35c118:
    // 0x35c118: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x35c118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x35c11c: 0x46030880  add.s       $f2, $f1, $f3
    ctx->pc = 0x35c11cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x35c120: 0x482818  mult        $a1, $v0, $t0
    ctx->pc = 0x35c120u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x35c124: 0x24660001  addiu       $a2, $v1, 0x1
    ctx->pc = 0x35c124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x35c128: 0xa92021  addu        $a0, $a1, $t1
    ctx->pc = 0x35c128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x35c12c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35c12cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35c130:
    // 0x35c130: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x35c130u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x35c134: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x35c134u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x35c138: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x35C138u;
    {
        const bool branch_taken_0x35c138 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x35C13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C138u;
        // 0x35c13c: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c138) {
            ctx->pc = 0x35C154u;
            goto label_35c154;
        }
    }
    ctx->pc = 0x35C140u;
    // 0x35c140: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x35c140u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35c144: 0x0  nop
    ctx->pc = 0x35c144u;
    // NOP
    // 0x35c148: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x35c148u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x35c14c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x35C14Cu;
    {
        const bool branch_taken_0x35c14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C14Cu;
        // 0x35c150: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c14c) {
            ctx->pc = 0x35C174u;
            goto label_35c174;
        }
    }
    ctx->pc = 0x35C154u;
label_35c154:
    // 0x35c154: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x35c154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x35c158: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x35c158u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x35c15c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x35c15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x35c160: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x35c160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35c164: 0x0  nop
    ctx->pc = 0x35c164u;
    // NOP
    // 0x35c168: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x35c168u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x35c16c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x35c16cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x35c170: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x35c170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_35c174:
    // 0x35c174: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x35c174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x35c178: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x35c178u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x35c17c: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x35c17cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x35c180: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x35c180u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x35c184: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x35C184u;
    {
        const bool branch_taken_0x35c184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35C188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C184u;
        // 0x35c188: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c184) {
            ctx->pc = 0x35C130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c130;
        }
    }
    ctx->pc = 0x35C18Cu;
    // 0x35c18c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x35c18cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35c190: 0x2c620012  sltiu       $v0, $v1, 0x12
    ctx->pc = 0x35c190u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x35c194: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x35C194u;
    {
        const bool branch_taken_0x35c194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35C198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C194u;
        // 0x35c198: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35c194) {
            ctx->pc = 0x35C118u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35c118;
        }
    }
    ctx->pc = 0x35C19Cu;
    // 0x35c19c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35c19cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35c1a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35c1a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35c1a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35c1a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35c1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x35C1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35C1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35C1A8u;
        // 0x35c1ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35C1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35C1B0u;
}
