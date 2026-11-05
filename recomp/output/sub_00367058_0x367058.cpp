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

// Function: sub_00367058
// Address: 0x367058 - 0x367210
void sub_00367058_0x367058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367058_0x367058");
#endif

    switch (ctx->pc) {
        case 0x3670c8u: goto label_3670c8;
        case 0x3670d8u: goto label_3670d8;
        case 0x3670f8u: goto label_3670f8;
        case 0x367178u: goto label_367178;
        case 0x3671c8u: goto label_3671c8;
        default: break;
    }

    ctx->pc = 0x367058u;

    // 0x367058: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x367058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x36705c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36705cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x367060: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x367060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367064: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x367064u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x367068: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x367068u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x36706c: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x36706cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x367070: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x367070u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    // 0x367074: 0x244ee178  addiu       $t6, $v0, -0x1E88
    ctx->pc = 0x367074u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959480));
    // 0x367078: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x367078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36707c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x36707cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x367080: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x367080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x367084: 0x244deed8  addiu       $t5, $v0, -0x1128
    ctx->pc = 0x367084u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962904));
    // 0x367088: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x367088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x36708c: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x36708cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367090: 0xa0e3cb30  sb          $v1, -0x34D0($a3)
    ctx->pc = 0x367090u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3FCB30u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FCB30u, _value); } while (0);
    // 0x367094: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x367094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367098: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x367098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x36709c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x36709cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3670a0: 0xe4cccb4c  swc1        $f12, -0x34B4($a2)
    ctx->pc = 0x3670a0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3FCB4Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FCB4Cu, _value); } while (0); }
    // 0x3670a4: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x3670a4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x3670a8: 0xe50ccb48  swc1        $f12, -0x34B8($t0)
    ctx->pc = 0x3670a8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3FCB48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FCB48u, _value); } while (0); }
    // 0x3670ac: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x3670acu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x3670b0: 0xad20cb68  sw          $zero, -0x3498($t1)
    ctx->pc = 0x3670b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FCB68u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FCB68u, _value); } while (0);
    // 0x3670b4: 0x240c00ff  addiu       $t4, $zero, 0xFF
    ctx->pc = 0x3670b4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3670b8: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x3670b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x3670bc: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x3670bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x3670c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3670c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3670c4: 0x35300  sll         $t2, $v1, 12
    ctx->pc = 0x3670c4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
label_3670c8:
    // 0x3670c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3670c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3670cc: 0x246b0001  addiu       $t3, $v1, 0x1
    ctx->pc = 0x3670ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3670d0: 0x34a80  sll         $t1, $v1, 10
    ctx->pc = 0x3670d0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x3670d4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x3670d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3670d8:
    // 0x3670d8: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x3670d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x3670dc: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x3670dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x3670e0: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x3670e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x3670e4: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x3670e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x3670e8: 0x24880001  addiu       $t0, $a0, 0x1
    ctx->pc = 0x3670e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3670ec: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x3670ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3670f0: 0x6d2821  addu        $a1, $v1, $t5
    ctx->pc = 0x3670f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x3670f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3670f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3670f8:
    // 0x3670f8: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x3670f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x3670fc: 0x6c1004  sllv        $v0, $t4, $v1
    ctx->pc = 0x3670fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 3) & 0x1F));
    // 0x367100: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x367100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x367104: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x367104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x367108: 0x2cc40004  sltiu       $a0, $a2, 0x4
    ctx->pc = 0x367108u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x36710c: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x36710cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x367110: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x367110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x367114: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x367114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x367118: 0x0  nop
    ctx->pc = 0x367118u;
    // NOP
    // 0x36711c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x36711cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x367120: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x367120u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x367124: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x367124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x367128: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x367128u;
    {
        const bool branch_taken_0x367128 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x36712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367128u;
        // 0x36712c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367128) {
            ctx->pc = 0x3670F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3670f8;
        }
    }
    ctx->pc = 0x367130u;
    // 0x367130: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x367130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367134: 0x2c820100  sltiu       $v0, $a0, 0x100
    ctx->pc = 0x367134u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x367138: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x367138u;
    {
        const bool branch_taken_0x367138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367138u;
        // 0x36713c: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367138) {
            ctx->pc = 0x3670D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3670d8;
        }
    }
    ctx->pc = 0x367140u;
    // 0x367140: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x367140u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367144: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x367144u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x367148: 0x5440ffdf  bnel        $v0, $zero, . + 4 + (-0x21 << 2)
    ctx->pc = 0x367148u;
    {
        const bool branch_taken_0x367148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x367148) {
            ctx->pc = 0x36714Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x367148u;
            // 0x36714c: 0x35300  sll         $t2, $v1, 12 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3670C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3670c8;
        }
    }
    ctx->pc = 0x367150u;
    // 0x367150: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x367150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x367154: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x367154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x367158: 0x8c47ed78  lw          $a3, -0x1288($v0)
    ctx->pc = 0x367158u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x5BED78u));
    // 0x36715c: 0x2466cb50  addiu       $a2, $v1, -0x34B0
    ctx->pc = 0x36715cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953808));
    // 0x367160: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x367160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x367164: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x367164u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x367168: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x367168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36716c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x36716cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367170: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x367170u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x367174: 0x0  nop
    ctx->pc = 0x367174u;
    // NOP
label_367178:
    // 0x367178: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x367178u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x36717c: 0x681004  sllv        $v0, $t0, $v1
    ctx->pc = 0x36717cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 3) & 0x1F));
    // 0x367180: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x367180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x367184: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x367184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x367188: 0x2ca40003  sltiu       $a0, $a1, 0x3
    ctx->pc = 0x367188u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x36718c: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x36718cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x367190: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x367190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x367194: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x367194u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x367198: 0x0  nop
    ctx->pc = 0x367198u;
    // NOP
    // 0x36719c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x36719cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3671a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3671a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3671a4: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x3671a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x3671a8: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x3671A8u;
    {
        const bool branch_taken_0x3671a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3671ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3671A8u;
        // 0x3671ac: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3671a8) {
            ctx->pc = 0x367178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_367178;
        }
    }
    ctx->pc = 0x3671B0u;
    // 0x3671b0: 0x11e0000b  beqz        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x3671B0u;
    {
        const bool branch_taken_0x3671b0 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x3671B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3671B0u;
        // 0x3671b4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3671b0) {
            ctx->pc = 0x3671E0u;
            goto label_3671e0;
        }
    }
    ctx->pc = 0x3671B8u;
    // 0x3671b8: 0x1a00000a  blez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x3671B8u;
    {
        const bool branch_taken_0x3671b8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x3671BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3671B8u;
        // 0x3671bc: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3671b8) {
            ctx->pc = 0x3671E4u;
            goto label_3671e4;
        }
    }
    ctx->pc = 0x3671C0u;
    // 0x3671c0: 0xc0d9a04  jal         func_366810
    ctx->pc = 0x3671C0u;
    SET_GPR_U32(ctx, 31, 0x3671C8u);
    ctx->pc = 0x3671C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3671C0u;
    // 0x3671c4: 0x1e0202d  daddu       $a0, $t7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366810u, 0x3671C0u, 0x3671C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3671C8u;
label_3671c8:
    // 0x3671c8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3671C8u;
    {
        const bool branch_taken_0x3671c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3671CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3671C8u;
        // 0x3671cc: 0xae22cb38  sw          $v0, -0x34C8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294953784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3671c8) {
            ctx->pc = 0x3671DCu;
            goto label_3671dc;
        }
    }
    ctx->pc = 0x3671D0u;
    // 0x3671d0: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x3671d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3671d4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3671D4u;
    {
        const bool branch_taken_0x3671d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3671D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3671D4u;
        // 0x3671d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3671d4) {
            ctx->pc = 0x3671F4u;
            goto label_3671f4;
        }
    }
    ctx->pc = 0x3671DCu;
label_3671dc:
    // 0x3671dc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3671dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3671e0:
    // 0x3671e0: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3671e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_3671e4:
    // 0x3671e4: 0x8c45cb40  lw          $a1, -0x34C0($v0)
    ctx->pc = 0x3671e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953792)));
    // 0x3671e8: 0x8c83cb44  lw          $v1, -0x34BC($a0)
    ctx->pc = 0x3671e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294953796)));
    // 0x3671ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3671ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3671f0: 0xae25cb38  sw          $a1, -0x34C8($s1)
    ctx->pc = 0x3671f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294953784), GPR_U32(ctx, 5));
label_3671f4:
    // 0x3671f4: 0xae43cb3c  sw          $v1, -0x34C4($s2)
    ctx->pc = 0x3671f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294953788), GPR_U32(ctx, 3));
    // 0x3671f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3671f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3671fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3671fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x367200: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x367200u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x367204: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x367204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x367208: 0x3e00008  jr          $ra
    ctx->pc = 0x367208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367208u;
        // 0x36720c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x367208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x367210u;
}
