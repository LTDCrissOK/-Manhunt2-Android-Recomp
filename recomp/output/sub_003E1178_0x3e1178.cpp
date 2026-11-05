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

// Function: sub_003E1178
// Address: 0x3e1178 - 0x3e1280
void sub_003E1178_0x3e1178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E1178_0x3e1178");
#endif

    switch (ctx->pc) {
        case 0x3e1190u: goto label_3e1190;
        default: break;
    }

    ctx->pc = 0x3e1178u;

    // 0x3e1178: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e1178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e117c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x3e117cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e1180: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x3e1180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x3e1184: 0x2488fff8  addiu       $t0, $a0, -0x8
    ctx->pc = 0x3e1184u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x3e1188: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3E1188u;
    {
        const bool branch_taken_0x3e1188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1188u;
        // 0x3e118c: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1188) {
            ctx->pc = 0x3E11A8u;
            goto label_3e11a8;
        }
    }
    ctx->pc = 0x3E1190u;
label_3e1190:
    // 0x3e1190: 0x69020007  ldl         $v0, 0x7($t0)
    ctx->pc = 0x3e1190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3e1194: 0x6d020000  ldr         $v0, 0x0($t0)
    ctx->pc = 0x3e1194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3e1198: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x3e1198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e119c: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x3e119cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e11a0: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x3e11a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e11a4: 0x2488fff8  addiu       $t0, $a0, -0x8
    ctx->pc = 0x3e11a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
label_3e11a8:
    // 0x3e11a8: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x3e11a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3e11ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3e11acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e11b0: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x3e11b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x3e11b4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3e11b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3e11b8: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x3e11b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
    // 0x3e11bc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E11BCu;
    {
        const bool branch_taken_0x3e11bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E11C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E11BCu;
        // 0x3e11c0: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e11bc) {
            ctx->pc = 0x3E11D8u;
            goto label_3e11d8;
        }
    }
    ctx->pc = 0x3E11C4u;
    // 0x3e11c4: 0xc4c000d0  lwc1        $f0, 0xD0($a2)
    ctx->pc = 0x3e11c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e11c8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3e11c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e11cc: 0x0  nop
    ctx->pc = 0x3e11ccu;
    // NOP
    // 0x3e11d0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3E11D0u;
    {
        const bool branch_taken_0x3e11d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e11d0) {
            ctx->pc = 0x3E11D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E11D0u;
            // 0x3e11d4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E11D8u;
            goto label_3e11d8;
        }
    }
    ctx->pc = 0x3E11D8u;
label_3e11d8:
    // 0x3e11d8: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x3e11d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3e11dc: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x3e11dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x3e11e0: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3e11e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3e11e4: 0x3842000f  xori        $v0, $v0, 0xF
    ctx->pc = 0x3e11e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)15);
    // 0x3e11e8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E11E8u;
    {
        const bool branch_taken_0x3e11e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E11ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E11E8u;
        // 0x3e11ec: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e11e8) {
            ctx->pc = 0x3E1204u;
            goto label_3e1204;
        }
    }
    ctx->pc = 0x3E11F0u;
    // 0x3e11f0: 0xc4a000d0  lwc1        $f0, 0xD0($a1)
    ctx->pc = 0x3e11f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e11f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3e11f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e11f8: 0x0  nop
    ctx->pc = 0x3e11f8u;
    // NOP
    // 0x3e11fc: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x3E11FCu;
    {
        const bool branch_taken_0x3e11fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E1200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E11FCu;
        // 0x3e1200: 0x38e20001  xori        $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e11fc) {
            ctx->pc = 0x3E1260u;
            goto label_3e1260;
        }
    }
    ctx->pc = 0x3E1204u;
label_3e1204:
    // 0x3e1204: 0x8ca300bc  lw          $v1, 0xBC($a1)
    ctx->pc = 0x3e1204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x3e1208: 0x3862020f  xori        $v0, $v1, 0x20F
    ctx->pc = 0x3e1208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
    // 0x3e120c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E120Cu;
    {
        const bool branch_taken_0x3e120c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e120c) {
            ctx->pc = 0x3E1210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E120Cu;
            // 0x3e1210: 0x30620007  andi        $v0, $v1, 0x7 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E122Cu;
            goto label_3e122c;
        }
    }
    ctx->pc = 0x3E1214u;
    // 0x3e1214: 0x14e00012  bnez        $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x3E1214u;
    {
        const bool branch_taken_0x3e1214 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E1218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1214u;
        // 0x3e1218: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1214) {
            ctx->pc = 0x3E1260u;
            goto label_3e1260;
        }
    }
    ctx->pc = 0x3E121Cu;
    // 0x3e121c: 0x8cc200bc  lw          $v0, 0xBC($a2)
    ctx->pc = 0x3e121cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 188)));
    // 0x3e1220: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x3e1220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x3e1224: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3E1224u;
    {
        const bool branch_taken_0x3e1224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1224u;
        // 0x3e1228: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1224) {
            ctx->pc = 0x3E1260u;
            goto label_3e1260;
        }
    }
    ctx->pc = 0x3E122Cu;
label_3e122c:
    // 0x3e122c: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x3e122cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x3e1230: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3E1230u;
    {
        const bool branch_taken_0x3e1230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E1234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1230u;
        // 0x3e1234: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1230) {
            ctx->pc = 0x3E1260u;
            goto label_3e1260;
        }
    }
    ctx->pc = 0x3E1238u;
    // 0x3e1238: 0x14e00008  bnez        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E1238u;
    {
        const bool branch_taken_0x3e1238 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E123Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1238u;
        // 0x3e123c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1238) {
            ctx->pc = 0x3E125Cu;
            goto label_3e125c;
        }
    }
    ctx->pc = 0x3E1240u;
    // 0x3e1240: 0x8cc300bc  lw          $v1, 0xBC($a2)
    ctx->pc = 0x3e1240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 188)));
    // 0x3e1244: 0x3862020f  xori        $v0, $v1, 0x20F
    ctx->pc = 0x3e1244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
    // 0x3e1248: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E1248u;
    {
        const bool branch_taken_0x3e1248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1248u;
        // 0x3e124c: 0x30620007  andi        $v0, $v1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e1248) {
            ctx->pc = 0x3E125Cu;
            goto label_3e125c;
        }
    }
    ctx->pc = 0x3E1250u;
    // 0x3e1250: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x3e1250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x3e1254: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3e1254u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3e1258: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e1258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e125c:
    // 0x3e125c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3e125cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e1260:
    // 0x3e1260: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
    ctx->pc = 0x3E1260u;
    {
        const bool branch_taken_0x3e1260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3e1260) {
            ctx->pc = 0x3E1190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e1190;
        }
    }
    ctx->pc = 0x3E1268u;
    // 0x3e1268: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x3e1268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3e126c: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x3e126cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3e1270: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x3e1270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e1274: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x3e1274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e1278: 0x3e00008  jr          $ra
    ctx->pc = 0x3E1278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E1278u;
        // 0x3e127c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E1278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E1280u;
}
